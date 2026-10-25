#include<iostream>
using namespace std;

class Playlist
{
    public:
        string name;
        string songs[10];
        int count;

        Playlist()
        {
            count=0;
        }

        void addSong(string songTitle)
        {
            songs[count] = songTitle;
            count++;
        }

        void displaySongs()
        {
            int i;

            cout<<"Playlist Name : "<<name<<endl;
            cout<<"Songs List : "<<endl;

            for(i=0;i<count;i++)
            {
                cout<<songs[i]<<endl;
            }
        }
};

int main()
{
    Playlist p1;

    p1.name = "Midnight Mood";

    p1.addSong("Reflection");
    p1.addSong("Lovesong");
    p1.addSong("Tutor");

    p1.displaySongs();
}

