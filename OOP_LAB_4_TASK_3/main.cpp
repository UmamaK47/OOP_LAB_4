#include<iostream>
#include "SpreadSheet.h"
using namespace std;    
int main() {
    Spreadsheet spreadsheet;
    spreadsheet.addRow("A1", "B1", "C1");
    spreadsheet.addRow("A2", "B2", "C2");
    spreadsheet.addRow("A3", "B3", "C3");
    spreadsheet.printSpreadSheet();
    spreadsheet.deleteRow(0);
    cout << "\nAfter Deleting a Row: \n";
    spreadsheet.printSpreadSheet();
    return 0;
}