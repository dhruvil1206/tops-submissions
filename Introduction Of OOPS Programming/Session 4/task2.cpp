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

class YouTuber : public SocialMediaUser
{
    public:
        string channelName;

        void uploadVideo(string title)
        {
            cout<<""<<title<<" uploaded to "<<channelName;
        }
};

int main()
{
    YouTuber obj;

    obj.username="Dhruvil";
    obj.followers=1500;
    obj.channelName="Dhruvil Gaming";

    obj.displayProfile();

    obj.uploadVideo("My First Video");

}
