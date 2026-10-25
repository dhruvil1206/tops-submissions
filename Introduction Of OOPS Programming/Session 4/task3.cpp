#include<iostream>
using namespace std;

class SocialMediaUser
{
    public:
        string username;
        int followers;

        void displayProfile()
        {
            cout << "Username: " << username << endl;
            cout << "Followers: " << followers << endl;
        }
};

class Podcaster : public SocialMediaUser
{
    public:
        string podcastName;

        void publishEpisode(string episodeTitle)
        {
            cout<< "BGMI " <<episodeTitle
                 <<" published on "<<podcastName;
        }
};

int main()
{
    Podcaster obj;

    obj.username="Dhruvil";
    obj.followers=2000;
    obj.podcastName="Tech Talks";

    obj.displayProfile();

    obj.publishEpisode("Episode 1");

}
