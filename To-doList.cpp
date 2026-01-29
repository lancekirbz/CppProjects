#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

const string FILE_NAME = "tasks.txt";

vector <string> loadTasks(){
    
    vector<string> tasks;
    ifstream file(FILE_NAME);
    string line;

    while (getline(file,line))
    {
        if (!line.empty())
        {
            tasks.push_back(line);

        }
    }
    file.close();
    return tasks;
}




void saveTasks(const vector<string> &tasks)
{
    ofstream file (FILE_NAME);
    for (const string &task : tasks)
    {
        file<<task<<endl;

    }
    file.close();
}

void DisplayTasks(const vector<string> & tasks)
{
    if (tasks.empty()){
        cout << "\n No Tasks found.\n";
        return ;
    }
    cout<<"\n Your To-Do Lists:\n";
    for(size_t i=0  ;i<tasks.size();i++)
    {
        cout<<i+1<<". "<< tasks[i]<<endl;
    }
}

void addTask(vector<string>&tasks){
    cout<<"\nEnter the new task:\n";
    string task;
    getline(cin,task);

    if(task.empty()){
        cout<< "Your task is empty!\n";
        return ;
    }
    tasks.push_back(task);
    saveTasks(tasks);
    cout<<"Task added succesfully.";


}

void RemoveTask(vector<string>&tasks){
    if (tasks.empty()){
        cout<<"\n No task to delete.\n";
        return;
    }

    DisplayTasks(tasks);
    cout<<"\n Enter the number of task to delete: ";
    int index;
    cin>> index;
    cin.ignore();
    if(index<1 || index > static_cast<int>(tasks.size())){
        return;
    }

    tasks.erase(tasks.begin()+index-1);
    saveTasks(tasks);
    cout<<"Task delete successfully. \n";
}

void displayMenu(){
    cout<< "HII KIRBBDEVV (LANCE) WELCOME TO YOUR\n";
    cout<< "\n------- TO-DO LISTS MANAGER ------\n";
    cout<< "1. View Tasks  \n";
    cout<< "2. Add Tasks \n";
    cout<< "3. Delete Tasks \n";
    cout<< "4. Exit \n";
    cout<< "Choose an Option(1-4): ";


}


int main()
{
    vector<string>tasks =loadTasks();
    while(true){
        displayMenu();
        int choice;
        cin>>choice;
        cin.ignore();

        switch (choice)
        {
        case 1 :
            DisplayTasks(tasks);
            break;
        case 2 :
            addTask(tasks);
            break;
        case 3 :
            RemoveTask(tasks);
            break;
        case 4 :
            cout<<"\nNext Time!!\n";
            return 0;
            default:
                cout<<"\nInvalid Choice.Please try again.";
        }
        return 0;
    }

    return 0;
}