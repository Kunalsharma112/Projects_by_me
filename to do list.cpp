#include <iostream>
#include <vector>
#include <string>
using namespace std;
struct Task {
    std::string description;
    bool completed;
};

class ToDoList {
private:
    std::vector<Task> tasks;

public:
    void addTask(const std::string& description) {
        tasks.push_back({ description, false });
    }

    void markAsCompleted(int taskIndex) {
        if (taskIndex >= 0 && taskIndex < tasks.size()) {
            tasks[taskIndex].completed = true;
        }
    }

    void displayTasks() {
        std::cout << "To-Do List:" << std::endl;
        for (size_t i = 0; i < tasks.size(); ++i) {
            std::cout << i + 1 << ". ";
            if (tasks[i].completed) {
                std::cout << "[Done] ";
            } else {
                std::cout << "[ ] ";
            }
            std::cout << tasks[i].description << std::endl;
        }
    }
};

int main() {
    ToDoList toDoList;
    int choice;
    std::string taskDescription;

    do {
        std::cout << "1. Add task" << std::endl;
        std::cout << "2. Mark task as completed" << std::endl;
        std::cout << "3. Display tasks" << std::endl;
        std::cout << "4. Exit" << std::endl;
        std::cout << "Enter your choice (1/2/3/4): ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                std::cout << "Enter task description: ";
                std::cin.ignore(); // Ignore the newline character from the previous input
                std::getline(std::cin, taskDescription);
                toDoList.addTask(taskDescription);
                std::cout << "Task added successfully!" << std::endl;
                break;

            case 2:
                int taskIndex;
                toDoList.displayTasks();
                std::cout << "Enter the task number to mark as completed: ";
                std::cin >> taskIndex;
                toDoList.markAsCompleted(taskIndex - 1);
                std::cout << "Task marked as completed!" << std::endl;
                break;

            case 3:
                toDoList.displayTasks();
                break;

            case 4:
                std::cout << "Exiting..." << std::endl;
                break;

            default:
                std::cout << "Invalid choice. Please try again." << std::endl;
                break;
        }

    } while (choice != 4);

    return 0;
}

