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
            cout<<" "<<title
                 <<" uploaded to "<<channelName<<endl;
        }
};

class GamingYouTuber : public YouTuber
{
    public:
        void streamGame(string gameName)
        {
            cout<<username<<" is now streaming "
                 <<gameName<<" on "<<channelName;
        }
};

int main()
{
    GamingYouTuber obj;

    obj.username = "Dhruvil";
    obj.followers = 5000;
    obj.channelName = "Dhruvil Gaming";

    obj.displayProfile();
    obj.uploadVideo("My First Video");
    obj.streamGame("BGMI");

}
