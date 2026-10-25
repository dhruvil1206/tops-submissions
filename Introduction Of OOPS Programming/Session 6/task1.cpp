#include<iostream>
using namespace std;

class Song
{
    private:
        string title;
        string artist;

    public:
        void setTitle(string t)
        {
            title=t;
        }

        string getTitle()
        {
            return title;
        }

        void setArtist(string a)
        {
            artist=a;
        }

        string getArtist()
        {
            return artist;
        }
};

int main()
{
    Song obj;

    obj.setTitle("Admirin'you'");
    obj.setArtist("Karan Aujla");

    cout<<"Old Song Title: "<<obj.getTitle()<<endl;

    obj.setTitle("Tutor");

    cout<<"Updated Song Title: "<<obj.getTitle()<<endl;
    cout<<"Artist: "<<obj.getArtist()<<endl;
}

