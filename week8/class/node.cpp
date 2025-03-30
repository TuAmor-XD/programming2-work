#include "node.hpp"

Node::Node(string studentName) 
{
    name = studentName;
    next = nullptr;  // Initially, the next pointer is null (end of the list)
}


void Node::display() const 
{
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