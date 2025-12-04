
#include "ShoppingCart.h"
#include "warehosue.h"
#include "CartProduct.h"
ShoppingCart::ShoppingCart()
{
    this->size = 0;
}
ShoppingCart::ShoppingCart(string client)
{
    this->client = client;
    this->size = 0;
}

float ShoppingCart::total()
{
    float result = 0;
    for (int i = 0; i < size; i++)
    {
        result += products[i].subtotal();
    }
    return result;
}

void ShoppingCart::addProduct(WarehouseProduct product, int amount)
{
    if (!this->searchProduct(product.getId()))
    {
        CartProduct newProduct(product.getId(), product.getName(), product.getPrice(), amount);
        this->products[size] = newProduct;
        size++;
    }
    else
    {
        this->getProduct(product.getId()).setAmount(this->getProduct(product.getId()).getAmount() + amount);
    }
}

int ShoppingCart::getSize()
{
    return size;
}

string ShoppingCart::getClient()
{
    return this->client;
}

void ShoppingCart::showProducts()
{

    for (int i = 0; i < size; i++)
    {
        cout << this->products[i].getAmount() << "\t" << this->products[i].getId() << "\t" << this->products[i].getName() << "\t" << this->products[i].getPrice() << endl;
    }
    cout << "The total price is: " << this->total() <<"$"<< endl;
}

bool ShoppingCart::searchProduct(string id)
{
    for (int i = 0; i < size; i++)
    {
        if (products[i].getId() == id)
            return true;
    }
    return false;
}

CartProduct &ShoppingCart::getProduct(string id)
{
    for (int i = 0; i < size; i++)
    {
        if (this->products[i].getId() == id)
        {
            return this->products[i];
        }
    }
    return products[0]; // primero checa y luego manda a llamar la función
}

int ShoppingCart::getProductNum(string id)
{
    for (int i = 0; i < size; i++)
    {
        if (this->products[i].getId() == id)
        {
            return i;
        }
    }
    return -1;
}

void ShoppingCart::edit(Warehouse &warehouse)
{
    if (this->size == 0)
    {
        cout << "no products on the cart" << endl;
        return;
    }
    string id;
    int choice, amountw;
    while (true)
    {
        cout << "Cart products: " << endl;
        this->showProducts();
        cout << "Choose an id to edit it" << endl;
        cin >> id;
        cout << id << ", Is this correct?" << endl
             << "1. yes" << endl
             << "2. no" << endl;
        cin >> choice;
        if (choice == 1)
        {
            if (this->searchProduct(id))
            {
                cout << "Enter the new amount" << endl;
                cin >> amountw;
                int max = this->getProduct(id).getAmount() + warehouse.getProduct(id).getStock();
                cout << "Maximum amount for the product: " << max << endl;
                if (amountw <= max && amountw >= 0)
                {

                    int newAmount = max - amountw;

                    this->getProduct(id).setAmount(amountw);
                    warehouse.getProduct(id).newAmount(newAmount);
                    cout << "New amount for " << warehouse.getProduct(id).getName() << ": " << this->getProduct(id).getAmount() << endl;
                    cout << "Available in the warehouse: " << warehouse.getProduct(id).getStock() << endl;

                    return;
                }
                else
                {
                    cout << "Not valid quantity" << endl;
                }
            }
            else
            {
                cout << "It was not possible" << endl;
            }
        }
        else if (choice == 2)
        {
            cout << "ok" << endl;
        }
        else
        {
            cout << "it is not a valid option" << endl;
        }
    }
}

void ShoppingCart::pay(Warehouse &warehouse)
{

    this->showProducts();
    cout << "The total price is: " << this->total() << endl;
    for (int i = 0; i < size; i++)
    {
        this->products[i].setAmount(0);
    }
}

ShoppingCart::~ShoppingCart()
{
}