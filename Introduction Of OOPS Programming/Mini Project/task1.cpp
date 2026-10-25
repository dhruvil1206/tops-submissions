#include<iostream>
using namespace std;

class Content
{
    public:
        string title;
        string platform;
        int views;
        string status;

        void display()
        {
            cout<<"Title : "<<title<<endl;
            cout<<"Platform : "<<platform<<endl;
            cout<<"Views : "<<views<<endl;
            cout<<"Status : "<<status<<endl;
        }
};

int main()
{
    Content c;

    c.title="My First Video";
    c.platform="YouTube";
    c.views=1500;
    c.status="Published";

    c.display();
}

