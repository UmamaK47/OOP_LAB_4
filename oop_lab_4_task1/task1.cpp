
#include<iostream>
#include<list>
#include<string>
using namespace std;
class Node {
public:
    int data;
    Node* next;
    Node(int d) : data(d), next(nullptr) {}
};
class LinkedList {
public:
    Node* head;
    LinkedList() : head(nullptr) {}
    void append(int data) {
        Node* newNode = new Node(data);
        if (!head) {
            head = newNode;
        }
        else {
            Node* temp = head;
            while (temp->next) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }
    void reverseList() {
        Node* current =head ;
        Node* prev = NULL;
        Node* next = NULL;
        while (current!=NULL) {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        head = prev;
    }
    void reverseListDisplay() {
        Node* temp = head;
        while (temp != NULL) {
            cout <<temp->data << "->";
            temp = temp->next;
        }
    }
    void display() {
        Node* temp = head;
        while (temp) {
            cout <<temp->data << "->";
            temp = temp->next;
        }
    }
    ~LinkedList() {
        while (head) {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
    }
   bool search(int value) {
        Node* find = head;
        while (find != nullptr) {
            if(find->data= value){
                return true;
            }
            find = find->next;
        }
        return false;
   }
};
int main()
{
    LinkedList list;
    list.append(10);
    list.append(20);
    list.append(30);
    list.display();
    int value = 20;
    if (list.search(value)) {
        cout << "\nValue found!";
    }
    else {
        cout << "\nValue not found!";
    }
    list.search(20);
    cout << "\nReversed List:";
    list.reverseList();
    cout << endl;
    list.reverseListDisplay();
    return 0;
}


