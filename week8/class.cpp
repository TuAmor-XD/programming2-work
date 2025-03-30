#include <iostream>
#include <string>
using namespace std;

class Node {
public:
    string name;  // Name of the student
    Node* next;   // Pointer to the next node (student in line)

    // Constructor to initialize node with a student's name
    Node(string studentName);

    // Function to display the node details (name and address)
    void display() const;
    
    // Function to print all the nodes in the list
    void printList(Node* head);
    // Function to print all the nodes in the list
};

// Constructor to initialize node with a student's name
Node::Node(string studentName) {
    name = studentName;
    next = nullptr;  // Initially, the next pointer is null (end of the list)
}

// Function to display the node details (name and address)
void Node::display() const {
    cout << "Student Name: " << name << ", Memory Address: " << this << endl;
}

// Function to print all the nodes in the linked list
void Node::printList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        current->display();  // Display the current node
        current = current->next;  // Move to the next node
    }
}


int main() {
    // Create nodes (students) without using `new`
    Node student1("Alice");
    Node student2("Mary");
    Node student3("John");
    
    student1.next = &student2;
    cout << "the queue looks like tihis: ";
    student1.printList(&student1);
    cout << endl;


    student2.next = &student3;
    cout << "the queue looks like tihis: ";
    student2.printList(&student2);
    cout << endl;

    Node student4("David");
    

    return 0;
}