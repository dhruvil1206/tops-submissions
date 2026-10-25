#include<iostream>
using namespace std;

class Playlist
{
    public:
        string name;

        Playlist()
        {
            name = "My Favourites";
            cout<<"Welcome to Playlist!"<<endl;
        }

        void display()
        {
            cout<<"Playlist Name : "<<name<<endl;
        }
};

int main()
{
    Playlist p1;
    p1.display();
}

