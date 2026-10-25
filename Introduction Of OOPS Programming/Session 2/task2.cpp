
#include<iostream>
using namespace std;

class Playlist
{
    public:
        string name;
        string createdOn;
        bool isPublic;

        void togglePublic()
        {
            isPublic = !isPublic;
        }
};

int main()
{
    Playlist p1;

    p1.name="Midnight Mood";
    p1.createdOn="23-10-2026";
    p1.isPublic=true;

    cout<<"Playlist Name: "<<p1.name<<endl;

    cout<<"Before Toggle: "<<boolalpha<<p1.isPublic<<endl;

    p1.togglePublic();
    cout<< "After First Toggle: "<<p1.isPublic<<endl;

    p1.togglePublic();
    cout<< "After Second Toggle: "<<p1.isPublic<<endl;
}

