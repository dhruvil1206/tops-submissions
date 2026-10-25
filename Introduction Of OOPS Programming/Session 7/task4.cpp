#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    string name;
    int price,i;

    ofstream file("wishlist.txt");

    for(i=1;i<=3;i++)
    {
        cout<<"Enter product name : ";
        cin>>name;

        cout<<"Enter product price : ";
        cin>>price;

        file<<name<<" "<<price<<endl;
    }

    file.close();

    ifstream read("wishlist.txt");

    cout<<"\n-- MY FLIPKART WISHLIST --\n";

    while(read>>name>>price)
    {
        cout<<"Product Name : "<<name<<endl;
        cout<<"Product Price : Rs "<<price<<endl;
        cout<<"--------------------"<<endl;
    }

    read.close();

}

