#include <iostream>
#include <string>
using namespace std;

class Node {
public:
    string name;  
    int age;      
    Node* next;   // Pointer to the next node (student in line)

    // Constructor to initialize node with a student's name and age
    Node(string studentName, int studentAge);

    // Function to display the node details (name, age, and address)
    void display() const;
    
    // Function to print all the nodes in the list
    void printList(Node* head) const;

    // Function to count the number of nodes in the list
    int countList(Node* head) const;

    void printAbove17(Node* head) const;

    bool search(Node* head, const string& targetName) const;  // Added targetName parameter
};

// Constructor to initialize node with a student's name and age
Node::Node(string studentName, int studentAge) {
    name = studentName;
    age = studentAge;
    next = nullptr;  // Initially, the next pointer is null (end of the list)
}

// Function to display the node details (name, age, and address)
void Node::display() const {
    cout << "Student Name: " << name << ", Student Age: " << age << ", Memory Address: " << this << endl;
}

void Node::printList(Node* head) const {
    Node* current = head;
    while (current != nullptr) { 
        current->display(); 
        current = current->next;  // Move to the next node
    }
}

int Node::countList(Node* head) const {
    int count = 0;  // Initialize
    Node* current = head;  // Start from the head
    while (current != nullptr) { 
        count++;  // Increment count
        current = current->next;  // Move to the next node
    }
    return count;  // Return the total count
}

void Node::printAbove17(Node* head) const {
    Node* current = head;
    while(current != nullptr) {
        if(current->age > 17) { // if the current age is more than 17
           cout << current->name << endl; // we print out the name of the student
        }
        current = current->next; // move to next node
    }
}

bool Node::search(Node* head, const string& targetName) const {
    Node* current = head;
    while(current != nullptr) {
        if(current->name == targetName) {  // Check if current node matches target
            return true;  // Found the student
        }
        current = current->next;  // Move to next node
    }
    return false;  // Student not found in list
}

int main() {
    // Create nodes (students) using the correct constructor
    Node student1("Alice", 18);
    Node student2("Mary", 15);
    Node student3("John", 25);
    
    // Link the nodes
    student1.next = &student2;
    student2.next = &student3;

    // Print the list starting from student1
    cout << "The queue looks like this: " << endl;
    student1.printList(&student1);
    cout << endl;

    // Count the number of students in the list
    cout << "The number of students in the line is: " << student1.countList(&student1) << endl;

    // Create another student
    Node student4("David", 20);
    student3.next = &student4;  // Link student3 to student4

    // Print the updated list
    cout << "The updated queue looks like this: " << endl;
    student1.printList(&student1);
    cout << endl;

    // Count the number of students again
    cout << "The number of students in the line after adding David is: " << student1.countList(&student1) << endl;

    cout << "The people above age 17 are: " << endl;
    student1.printAbove17(&student1);

    // Test search function
    bool result = student1.search(&student1, "Nancy");
    cout << "Search for Nancy: " << (result ? "Found" : "Not found") << endl;
    
    result = student1.search(&student1, "John");
    cout << "Search for John: " << (result ? "Found" : "Not found") << endl;

    return 0;
}