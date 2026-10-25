
#include<iostream>
using namespace std;

struct Order
{
    int orderId;
    string restaurantName;
    bool isDelivered;
};

class FoodOrder
{
    public:
        int orderId;
        string restaurantName;
        bool isDelivered;

        FoodOrder(Order o)
        {
            orderId = o.orderId;
            restaurantName = o.restaurantName;
            isDelivered = o.isDelivered;
        }

        void markDelivered()
        {
            isDelivered = true;
            cout<<"Order Delivered Successfully!"<<endl;
        }

        void display()
        {
            cout<<"Order ID : "<<orderId<<endl;
            cout<<"Restaurant Name : "<<restaurantName<<endl;
            cout<<"Is Delivered : "<<boolalpha<<isDelivered<<endl;
        }
};

int main()
{
    Order o1 = {101, "Lapinoz", false};
    FoodOrder f1(o1);
    f1.display();
    f1.markDelivered();
    cout<<"Is Delivered : "<<f1.isDelivered<<endl;
}

