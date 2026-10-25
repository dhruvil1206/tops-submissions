#include<iostream>
using namespace std;

class Flipkart
{
    public:
        void searchProduct(string name)
        {
            cout<<"Searching product by name: "<<name<<endl;
        }

        void searchProduct(string name, string category)
        {
            cout<<"Searching product: " <<name<<endl;
            cout<<"Category: " <<category<<endl;
        }
};

int main()
{
    Flipkart obj;

    obj.searchProduct("Mobile");

    cout<<endl;

    obj.searchProduct("Samsung","Electronics");
}

