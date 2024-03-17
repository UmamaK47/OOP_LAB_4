#include<iostream>
#include "ToDoList.h"
using namespace std;
int main() {
    ToDoList ToDo;
    ToDo.addTask("Do Homework", "Clean Room", "Grocery Shopping");
    ToDo.addTask("Cook", "Read a Book", "Laundry");
    ToDo.addTask("Wash Dishes", "Organize Room", "Watch a Movie");
    cout << "To Do List: \n";
    ToDo.printToDoList();
    return 0;
}
