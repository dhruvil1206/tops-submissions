#include<iostream>
using namespace std;

class SocialMediaUser
{
    public:
        string username;
        int followers;

        void displayProfile()
        {
            cout<<"Username: "<<username<<endl;
            cout<<"Followers: "<<followers<<endl;
        }
};

int main()
{
    SocialMediaUser obj;

    obj.username="Dhruvil";
    obj.followers=440;

    obj.displayProfile();
}
