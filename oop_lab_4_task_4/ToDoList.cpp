#include "ToDoList.h"
#include <iostream>

void ToDoList::printToDoList() const {
    for (const auto& row : taskList) {
        for (const auto& val : row) {
            std::cout << val << ", ";
        }
        std::cout << std::endl;
    }
}
void ToDoList::addTask(const std::string& element1, const std::string& element2, const std::string& element3) {
    std::list<std::string> single_list = { element1, element2, element3 };
    taskList.push_back(single_list);
}
