#ifndef NODE_H
#define NODE_H
#include<string>
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
    };

#endif 