#include<iostream>
#include<fstream>
using namespace std;

class Playlist
{
    public:
        string name;

        Playlist()
        {
            name="My favorites";
        }

        void display()
        {
            cout<<"Playlist Name : "<<name<<endl;
        }

        ~Playlist()
        {
            ofstream file("autosave.txt");
            file<<"Playlist Name : "<<name;
            file.close();
            cout<<"Playlist saved successfully!"<<endl;
        }
};

int main()
{
    Playlist p1;
    p1.name="Moody mix";
    p1.display();
}

