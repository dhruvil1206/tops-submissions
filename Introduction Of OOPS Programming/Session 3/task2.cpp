#include<iostream>
using namespace std;

class Product
{
    public:
        string productName;
        float price;
        float rating;

        Product(string n, float p, float r)
        {
            productName = n;
            price = p;
            rating = r;
        }

        void displayInfo()
        {
            cout<<"Product Name : "<<productName<<endl;
            cout<<"Price : Rs "<<price<<endl;
            cout<<"Rating : "<<rating<<endl;
        }
};

int main()
{
    Product p1("Smartphone", 55000, 4.5);
    p1.displayInfo();
}

