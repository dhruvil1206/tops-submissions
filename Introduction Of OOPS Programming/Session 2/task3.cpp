
#include<iostream>
using namespace std;

class FoodOrder
{
    public:
        int orderId;
        string restaurantName;
        bool isDelivered;

        void markDelivered()
        {
            isDelivered = true;
            cout<<"Order has been delivered successfully!"<<endl;
        }
};

int main()
{
    FoodOrder f1;

    f1.orderId=101;
    f1.restaurantName="Lapinoz";
    f1.isDelivered=false;

    cout<<"Order ID: "<<f1.orderId<<endl;
    cout<< "Restaurant Name: " << f1.restaurantName << endl;
    cout<<"Before Delivery: "<<boolalpha<<f1.isDelivered<<endl;

    f1.markDelivered();

    cout<<"After Delivery: "<<f1.isDelivered<<endl;
}

