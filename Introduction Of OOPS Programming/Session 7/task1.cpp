#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream file("my_fav_songs.txt");

    file<<"I guess"<<endl;
    file<<"Barbaad"<<endl;
    file<<"Backbone"<<endl;
    file<<"Tutor"<<endl;
    file<<"That girl"<<endl;

    file.close();

    cout<<"Songs saved successfully.";

 
}

