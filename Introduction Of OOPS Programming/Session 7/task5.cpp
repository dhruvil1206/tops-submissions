#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ifstream file("insta_followers.txt");

    string name;
    int count=0;

    while(getline(file,name))
    {
        count++;
    }

    file.close();

    cout<<"Total Instagram Followers = "<<count;
}

