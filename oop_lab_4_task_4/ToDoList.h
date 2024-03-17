#pragma once
#include<list>
#include<string>
class ToDoList
{
public:
    void printToDoList() const;
    void addTask(const std::string& element1, const std::string& element2, const std::string& element3);

private:
    std::list<std::list<std::string>> taskList;
};

