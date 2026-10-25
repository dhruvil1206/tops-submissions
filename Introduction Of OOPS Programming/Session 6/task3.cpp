#include<iostream>
using namespace std;

class Product
{
    public:
        virtual void upload()=0;
};

class Electronics : public Product
{
    public:
        void upload()
        {
            cout<<"Uploading Electronics Product..."<<endl;
        }
};

class Clothing : public Product
{
    public:
        void upload()
        {
            cout<<"Uploading Clothing Product..."<<endl;
        }
};

int main()
{
    Electronics e;
    Clothing c;

    e.upload();
    c.upload();
}
