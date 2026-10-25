#include<iostream>
using namespace std;

class UserProfile
{
    private:
        string phoneNumber;

    public:
        void setPhoneNumber(string num)
        {
            phoneNumber=num;
        }

        string getPhoneNumber()
        {
            return phoneNumber;
        }
};

int main()
{
    UserProfile user;
    user.setPhoneNumber("9876543210");
    cout<<"Phone Number: "<<user.getPhoneNumber();
}
