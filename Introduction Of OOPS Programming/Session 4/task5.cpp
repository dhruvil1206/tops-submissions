#include<iostream>
using namespace std;

class SocialMediaUser
{
    public:
        string username;
        int followers;

        void displayProfile()
        {
            cout<< "Username: "<<username<<endl;
            cout<< "Followers: "<<followers<<endl;
        }
};

class YouTuber : public SocialMediaUser
{
    public:
        string channelName;
};

class Podcaster : public SocialMediaUser
{
    public:
        string podcastName;
};

class InstagramInfluencer : public SocialMediaUser
{
    public:
        void postStory(string storyTitle)
        {
            cout<<username <<" posted a new story: "
                 <<storyTitle<<endl;
        }
};

int main()
{
    InstagramInfluencer obj;

    obj.username="Dhruvil";
    obj.followers=5000;

    obj.displayProfile();
    obj.postStory("My New Photo");

}
