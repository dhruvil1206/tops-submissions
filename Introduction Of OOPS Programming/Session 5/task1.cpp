#include<iostream>
using namespace std;

class PaymentProcessor
{
    public:
        void processPayment(float amount)
        {
            cout<<"Payment without coupon"<<endl;
            cout<<"Final amount: Rs "<<amount<<endl;
        }

        void processPayment(float amount, string couponCode)
        {
            cout<<"Payment with coupon"<<endl;

            if(couponCode=="SAVE10")
            {
                amount=amount - (amount*10/100);
            }

            cout<<"Coupon code: "<<couponCode<<endl;
            cout<<"Final amount: Rs "<<amount<<endl;
        }
};

int main()
{
    PaymentProcessor obj;

    obj.processPayment(1000);
    cout<<endl;

    obj.processPayment(1000,"SAVE10");

}
