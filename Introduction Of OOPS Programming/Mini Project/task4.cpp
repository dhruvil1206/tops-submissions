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
            ofstream file("content_list.txt",ios::app);

            cout<<"Enter title : ";
            cin>>title;

            cout<<"Enter platform : ";
            cin>>platform;

            cout<<"Enter views : ";
            cin>>views;

            cout<<"Enter status : ";
            cin>>status;

            file<<"Title : "<<title<<endl;
            file<<"Platform : "<<platform<<endl;
            file<<"Views : "<<views<<endl;
            file<<"Status : "<<status<<endl;
            file<<"------------------"<<endl;

            file.close();

            cout<<"Content saved successfully.\n";
        }

        void displayContent()
        {
            ifstream file("content_list.txt");
            string line;
            int count=0;

            while(getline(file,line))
            {
                if(line.find("Title : ")==0)
                {
                    count++;
                    cout<<"\n"<<count<<". "<<line;

                    getline(file,line);
                    cout<<"\n   "<<line;

                    getline(file,line);
                    getline(file,line);
                    cout<<"\n   "<<line;
                }
            }

            file.close();
        }

        void updateStatus()
        {
            ifstream file("content_list.txt");
            ofstream temp("temp.txt");

            string line;
            int count=0,choice;
            string newStatus;

            cout<<"\n--- CONTENT LIST ---\n";

            while(getline(file,line))
            {
                if(line.find("Title : ")==0)
                {
                    count++;
                    cout<<count<<". "<<line<<endl;
                }
            }

            file.close();

            cout<<"\nEnter content number to update : ";
            cin>>choice;

            cout<<"Enter new status : ";
            cin>>newStatus;

            file.open("content_list.txt");
            count=0;

            while(getline(file,line))
            {
                if(line.find("Title : ")==0)
                {
                    count++;
                }

                if(line.find("Status : ")==0 && count==choice)
                {
                    temp<<"Status : "<<newStatus<<endl;
                }
                else
                {
                    temp<<line<<endl;
                }
            }

            file.close();
            temp.close();

            if(choice>0 && choice<=count)
            {
                remove("content_list.txt");
                rename("temp.txt","content_list.txt");

                cout<<"Status updated successfully.\n";
            }
            else
            {
                remove("temp.txt");
                cout<<"Invalid content number.\n";
            }
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
        cout<<"\n2. Display Content";
        cout<<"\n3. Update Status";
        cout<<"\n4. Exit";
        cout<<"\nEnter choice : ";
        cin>>ch;

        if(ch==1)
        {
            c.addContent();
        }
        else if(ch==2)
        {
            c.displayContent();
        }
        else if(ch==3)
        {
            c.updateStatus();
        }
        else if(ch==4)
        {
            cout<<"Exiting program...";
        }
        else
        {
            cout<<"Invalid choice!";
        }

    }while(ch!=4);

}

