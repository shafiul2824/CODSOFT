#include <iostream>
#include <vector>
using namespace std;

struct Task {
    string name;
    bool completed;
};

int main() {
    vector<Task> tasks;
    int choice;

    do {
        cout << "\n===== TO-DO LIST MENU =====\n";
        cout << "1. Add Task\n";
        cout << "2. View Tasks\n";
        cout << "3. Mark Task as Completed\n";
        cout << "4. Remove Task\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();

        switch(choice) {

        case 1: {
            Task t;
            cout << "Enter Task: ";
            getline(cin, t.name);
            t.completed = false;
            tasks.push_back(t);
            cout << "Task Added Successfully!\n";
            break;
        }

        case 2: {
            if(tasks.empty()) {
                cout << "No Tasks Available.\n";
            } else {
                cout << "\n------ Task List ------\n";
                for(int i=0; i<tasks.size(); i++) {
                    cout << i+1 << ". " << tasks[i].name;
                    if(tasks[i].completed)
                        cout << " [Completed]";
                    else
                        cout << " [Pending]";
                    cout << endl;
                }
            }
            break;
        }

        case 3: {
            int n;
            cout << "Enter Task Number: ";
            cin >> n;

            if(n>=1 && n<=tasks.size()) {
                tasks[n-1].completed = true;
                cout << "Task Marked as Completed.\n";
            } else {
                cout << "Invalid Task Number.\n";
            }
            break;
        }

        case 4: {
            int n;
            cout << "Enter Task Number to Remove: ";
            cin >> n;

            if(n>=1 && n<=tasks.size()) {
                tasks.erase(tasks.begin()+n-1);
                cout << "Task Removed Successfully.\n";
            } else {
                cout << "Invalid Task Number.\n";
            }
            break;
        }

        case 5:
            cout << "Thank You!\n";
            break;

        default:
            cout << "Invalid Choice!\n";
        }

    } while(choice != 5);

    return 0;
}