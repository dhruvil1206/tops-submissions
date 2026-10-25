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
            cout<<"Task: "<<title;

            if(isDone==true)
            {
                cout<<" - DONE"<< endl;
            }
            else
            {
                cout<< " - PENDING"<< endl;
            }
        }
};

class TaskList
{
    public:
        Task t[5];
        int count = 0;

        void addTask(string title)
        {
            t[count].title = title;
            count++;
        }

        void markTaskDone(int index)
        {
            if(index>=0 && index<count)
            {
                t[index].markDone();
            }
        }

        void showTasks()
        {
            int i;

            for(i=0;i<count;i++)
            {
                cout << i+1 << ". ";
                t[i].display();
            }
        }
};

int main()
{
    TaskList list;

    list.addTask("Study");
    list.addTask("Homework");
    list.addTask("Practice");

    list.markTaskDone(1);

    cout << "Task List:\n";
    list.showTasks();
}

