#include <iostream>
#include <string>
using namespace std;

// Node represents a single Task
class Task {
public:
    int id;
    string description;
    Task* next;

    Task(int taskId, string desc) {
        id = taskId;
        description = desc;
        next = NULL;
    }
};

class TaskManager {
    Task* head;

public:
    TaskManager() { head = NULL; }

    // Add a new task at the end (Linked List Insertion)
    void addTask(int id, string desc) {
        Task* newTask = new Task(id, desc);
        if (head == NULL) {
            head = newTask;
        } else {
            Task* temp = head;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = newTask;
        }
        cout << "Task added successfully!" << endl;
    }

    // Display all tasks (Linked List Traversal)
    void showTasks() {
        if (head == NULL) {
            cout << "No tasks available." << endl;
            return;
        }
        Task* temp = head;
        cout << "\n--- Current Task List ---" << endl;
        while (temp != NULL) {
            cout << "[" << temp->id << "] " << temp->description << endl;
            temp = temp->next;
        }
    }
};

int main() {
    TaskManager myTasks;
    
    myTasks.addTask(1, "Complete OOP Assignment");
    myTasks.addTask(2, "Review SQL Joins");
    myTasks.addTask(3, "Submit DSA Lab Report");

    myTasks.showTasks();

    return 0;
}
