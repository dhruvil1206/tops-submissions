
#include<iostream>
using namespace std;

class Ticket
{
    public:
        string movieName;

        Ticket(string n)
        {
            movieName = n;
            cout<<"Ticket Booked Successfully!"<<endl;
        }

        void display()
        {
            cout<<"Movie Name : "<<movieName<<endl;
        }

        ~Ticket()
        {
            cout<<"Saving your ticket..."<<endl;
        }
};

int main()
{
    Ticket *t1 = new Ticket("Spiderman:Brand new day");
    t1->display();
    delete t1;
}

