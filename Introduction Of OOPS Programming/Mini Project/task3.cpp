#include<iostream>
#include<fstream>
using namespace std;

int main()
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
        }
    }

    file.close();
}

