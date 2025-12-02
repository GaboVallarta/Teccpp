
class GroceryStore{
    private:
    int milkAmount;
    int breadAmount;
    float milkPrice;
    float breadPrice;
    public:
    GroceryStore(float mPrice, float bPrice);
    void buyMilk(int amount);
    void buyBread(int amount);
    float calculateMilkSale();
    float calculateBreadSale();
    float calculateTotalSale();
    void displaySale();
};