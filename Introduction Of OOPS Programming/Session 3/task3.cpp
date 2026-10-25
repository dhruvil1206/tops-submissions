#include<iostream>
using namespace std;

class Movie
{
    public:
        string movieName;
        float rating;

        Movie(string n, float r)
        {
            movieName=n;
            rating=r;
        }

        Movie(Movie &m)
        {
            movieName = m.movieName;
            rating = m.rating;
        }

        void display()
        {
            cout<<"Movie Name : "<<movieName<<endl;
            cout<<"Rating : "<<rating<<endl;
        }
};

int main()
{
    Movie m1("Dhurandhar", 4.5);

    Movie m2(m1);

    cout<<"Original Movie Details : "<<endl;
    m1.display();

    cout<<endl;

    cout<<"Copied Movie Details : "<<endl;
    m2.display();
}

