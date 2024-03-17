#include<iostream>
#include<list>
using namespace std;
void printList(list<int>& lst) {
    for (int n : lst)cout << n << " ";
    cout << endl;
}
class List {
public:
    void sortList(list<int>& lst) {
        lst.sort();
    }
    void mergeList(list<int>& lst1, list<int>& lst2) {
        lst1.merge(lst2);
    }
};
int main() {
    List List;
    list<int> List1 = { 2, 5, 1, 4, 3 };
    list<int> List2 = { 10,9,8,7, 6 };
    cout << "Original: " << endl;
    printList(List1);
    List.sortList(List1);
    List.sortList(List2);
    cout << "Sorted list 1: " << endl;
    printList(List1);
    cout << "Sorted list 2: " << endl;
    printList(List2);
    List.mergeList(List1, List2);
    cout << "Merged list: " << endl;
    printList(List1);
    return 0;
}
