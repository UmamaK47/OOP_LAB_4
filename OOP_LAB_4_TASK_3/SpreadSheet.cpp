#include "Spreadsheet.h"
#include <iostream>

void Spreadsheet::printSpreadSheet() const {
    for (const auto& row : spreadSheet) {
        for (const auto& val : row) {
            std::cout << val << " ";
        }
        std::cout << std::endl;
    }
}
void Spreadsheet::addRow(const std::string& element1, const std::string& element2, const std::string& element3) {
    std::list<std::string> single_list = { element1, element2, element3 };
    spreadSheet.push_back(single_list);
}
void Spreadsheet::deleteRow(int rowNumber) {
    auto it = std::next(spreadSheet.begin(), rowNumber);
    spreadSheet.erase(it);
}