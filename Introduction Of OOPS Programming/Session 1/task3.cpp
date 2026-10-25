#include <iostream>
using namespace std;

	class Task
	{
    	public:
        	string title;
        	bool isDone = false;

    		void markDone()
        	{
        	    isDone = true;
        	}

        void display()
        {
            cout << "Task: " << title << endl;

            if(isDone == true)
            {
                cout << "Status: DONE" << endl;
            }
            else
            {
                cout << "Status: PENDING" << endl;
            }
        }
};

int main()
{
    Task t;

    cout << "Enter task: ";
    cin >> t.title;

    cout << "\nBefore completing task:\n";
    t.display();

    t.markDone();

    cout << "\nAfter completing task:\n";
    t.display();
}

