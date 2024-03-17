#pragma once
#include <list>
#include <string>

class Spreadsheet {
public:
    void printSpreadSheet() const;
    void addRow(const std::string& element1, const std::string& element2, const std::string& element3);
    void deleteRow(int rowNumber);

private:
    std::list<std::list<std::string>> spreadSheet;
};

