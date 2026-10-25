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

            cout<<"\nContent saved successfully.\n";
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
                    cout<<"\n   "<<line;

                    getline(file,line);
                    cout<<"\n   "<<line;
                    cout<<"\n";
                }
            }

            file.close();

            if(count==0)
            {
                cout<<"No content found.\n";
            }
        }

        void updateStatus()
        {
            ifstream file("content_list.txt");
            string line;
            int count=0,choice;
            bool found=false;

            while(getline(file,line))
            {
                if(line.find("Title : ")==0)
                {
                    count++;
                    cout<<count<<". "<<line<<endl;
                }
            }

            file.close();

            if(count==0)
            {
                cout<<"No content found.\n";
            }
            else
            {
                cout<<"\nEnter content number to update : ";
                cin>>choice;

                if(choice<=0 || choice>count)
                {
                    cout<<"Invalid content number.\n";
                }
                else
                {
                    string newStatus;

                    cout<<"Enter new status : ";
                    cin>>newStatus;

                    file.open("content_list.txt");
                    ofstream temp("temp.txt");

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
                            found=true;
                        }
                        else
                        {
                            temp<<line<<endl;
                        }
                    }

                    file.close();
                    temp.close();

                    if(found)
                    {
                        remove("content_list.txt");
                        rename("temp.txt","content_list.txt");

                        cout<<"Status updated successfully.\n";
                    }
                }
            }
        }

        void deleteContent()
        {
            ifstream file("content_list.txt");
            string line;
            int count=0,choice;

            while(getline(file,line))
            {
                if(line.find("Title : ")==0)
                {
                    count++;
                    cout<<count<<". "<<line<<endl;
                }
            }

            file.close();

            if(count==0)
            {
                cout<<"No content found.\n";
            }
            else
            {
                cout<<"\nEnter content number to delete : ";
                cin>>choice;

                if(choice<=0 || choice>count)
                {
                    cout<<"Invalid content number.\n";
                }
                else
                {
                    file.open("content_list.txt");
                    ofstream temp("temp.txt");

                    count=0;
                    bool skip=false;

                    while(getline(file,line))
                    {
                        if(line.find("Title : ")==0)
                        {
                            count++;
                            skip=(count==choice);
                        }

                        if(!skip)
                        {
                            temp<<line<<endl;
                        }
                    }

                    file.close();
                    temp.close();

                    if(remove("content_list.txt")==0)
                    {
                        if(rename("temp.txt","content_list.txt")==0)
                        {
                            cout<<"\nContent deleted successfully!";
                            cout<<"\n--- UPDATED CONTENT LIST ---\n";
                            displayContent();
                        }
                        else
                        {
                            cout<<"Error updating file.\n";
                        }
                    }
                    else
                    {
                        cout<<"Error deleting old file.\n";
                    }
                }
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
        cout<<"\n4. Delete Content";
        cout<<"\n5. Exit";
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
            c.deleteContent();
        }
        else if(ch==5)
        {
            cout<<"Exiting program...";
        }
        else
        {
            cout<<"Invalid choice!";
        }

    }while(ch!=5);

}

