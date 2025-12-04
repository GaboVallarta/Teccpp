#include "warehosue.h"
#include <iostream>
using namespace std;

Warehouse::Warehouse()
{
    this->size = 0;

    ifstream file("products.txt");

    if (!file.is_open())
    {
        cout << "File can not be opened" << endl;
    }
    else
    {
        string line;
        // lee todas las líneas hata que se quede sin lineas
        while (getline(file, line))
        {
            // cout<<line<<endl;
            string idStr, nameStr, priceStr, amountStr;

            stringstream stream(line);

            getline(stream, idStr, ',');
            getline(stream, nameStr, ',');
            getline(stream, priceStr, ',');
            getline(stream, amountStr, ',');

             //cout<<"LINE BRAK DOWN: "<<idStr<< "|"<<nameStr<<"|"<<priceStr<<"|"<<amountStr<<endl;

            float price = stof(priceStr);
            int amount = stoi(amountStr);
            WarehouseProduct newProduct(idStr, nameStr, price, amount);
            products[size] = newProduct;
            size++;
        }

        file.close();
    }
}

void Warehouse::seeProducts()
{ 
    cout<<"id"<<"\t"<<"name"<<"\t"<<"price"<<"\t\t"<<"stock"<<endl<<endl;

    for (int i = 0; i < size; i++)
    {
        cout << this->products[i].getId() << "\t" << this->products[i].getName() << "\t$" << this->products[i].getPrice() << "\t\t" << this->products[i].getStock() << endl;
    }
}
void Warehouse::setSize()
{
    this->size++;
}

Warehouse::~Warehouse()
{
}

bool Warehouse::checkId(string id)
{
    for (int i = 0; i < this->size; i++)
    {
        if (this->products[i].getId() == id)
        {
            return true;
        }
    }
    return false;
}

bool Warehouse::checkAvailability(string id, int num)
{
    if (this->getProduct(id).getStock() >= num)
    {
        return true;
    }
    return false;
}

WarehouseProduct& Warehouse::getProduct(string id)
{
    for (int i = 0; i < this->size; i++)
    {
        if (this->products[i].getId() == id)
        {
            return this->products[i];
        }
    }
    // nomás para quitar el warning, siempre se revisa que esté el producto antes con otra función
    return this->products[0];
}

void Warehouse::buy(ShoppingCart &shoppingCart)
{
    string choice;
    int num=0;
    int confirmation;

    while (true)
    {
        cout << "Which product do you want? (Enter the id)" << endl;
        this->seeProducts();
        cin >> choice;
        bool numProduct = true;
        while (numProduct)
        {
            if (this->checkId(choice) && this->checkAvailability(choice,1))
            {
                cout << "Product was found, how mucho do you want to buy?" << endl;
                cin >> num;
                if (this->checkAvailability(choice, num) && numProduct)
                {
                    if (shoppingCart.getSize() < 20)
                    {
                        cout << num << " " << this->getProduct(choice).getName() << "(s), is this correct?" << endl
                             << "1. yes" << endl
                             << "2. no" << endl;
                        cin >> confirmation;
                        if (confirmation == 1)
                        {
                            
                            shoppingCart.addProduct(this->getProduct(choice), num);
                            
                            this->products[this->getNumId(choice)].setAmount(num);
                            
                            numProduct = false;

                            return;
                        }
                        else if (confirmation == 2)
                        {

                            cout << "canceled" << endl;
                            numProduct = false;
                        }
                        else
                        {
                            cout << "It is not a valid answere" << endl;
                        }
                    }
                    else
                    {
                        cout << "There is not enough space on your cart" << endl;
                        // regresa
                    }
                }
                else
                {
                    cout << "There is not enought stock, choose another value" << endl;
                    // regresa
                }
            }
            else if(!this->checkId(choice))
            {
                cout << "Product was not found :(" << endl;
                cout << "Which product do you want? (Enter the id)" << endl;
                this->seeProducts();
                getline(cin, choice);
                // regresa
            }else{
                cout<<"There are no products left"<<endl;
                return;
            }
        }
    }
}


int Warehouse::getNumId(string id){
    for (int i=0;i<this->size;i++){
        if(this->products[i].getId()==id) return i;
    }
    return -1;// si no encuentra nada, que no pasa ya que checa antes con funciones previas
}