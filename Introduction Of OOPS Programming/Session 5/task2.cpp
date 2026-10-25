#include<iostream>
using namespace std;

class SocialMediaUploader
{
    public:
        virtual void uploadContent()
        {
            cout<<"Uploading content to social media"<<endl;
        }
};

class InstagramUploader : public SocialMediaUploader
{
    public:
        void uploadContent() override
        {
            cout<<"Uploading photo or reel to Instagram"<<endl;
        }
};

class YouTubeUploader : public SocialMediaUploader
{
    public:
        void uploadContent() override
        {
            cout<<"Uploading video to YouTube"<<endl;
        }
};

int main()
{
    InstagramUploader obj1;
    YouTubeUploader obj2;

    obj1.uploadContent();
    obj2.uploadContent();
}

