#include<iostream>
using namespace std;

class InstaStory
{
    protected:
        int storyViews=500;
};

class SponsoredStory : public InstaStory
{
    public:
        void display()
        {
            cout<<"Story Views: "<<storyViews;
        }
};

int main()
{
    SponsoredStory obj;
    obj.display();
}
