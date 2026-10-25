#include<iostream>
#include<fstream>
using namespace std;

class Content
{
    public:
        string title,platform,status;
        int views;

        void addContent()
        {
            cout<<"Enter content title : ";
            cin>>title;

            cout<<"Enter platform : ";
            cin>>platform;

            cout<<"Enter views : ";
            cin>>views;

            cout<<"Enter status : ";
            cin>>status;

            ofstream file("content_list.txt",ios::app);

            file<<"Title : "<<title<<endl;
            file<<"Platform : "<<platform<<endl;
            file<<"Views : "<<views<<endl;
            file<<"Status : "<<status<<endl;
            file<<"------------------"<<endl;

            file.close();

            cout<<"\nContent saved successfully.\n";
        }
};

int main()
{
    Content c;
    int ch;

    do
    {
        cout<<"\n--- CONTENT MENU ---";
        cout<<"\n1. Add Content";
        cout<<"\n2. Exit";
        cout<<"\nEnter your choice : ";
        cin>>ch;

        if(ch==1)
        {
            c.addContent();
        }
        else if(ch==2)
        {
            cout<<"Exiting program...";
        }
        else
        {
            cout<<"Invalid choice!";
        }

    }while(ch!=2);

}

