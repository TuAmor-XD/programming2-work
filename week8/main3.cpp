#include<iostream>
#include<string>
using namespace std;

class Node 
{
public:
    string name;
    int age;
    Node* next;

    Node(string studentName, int studentAge);

    void display() const;

    void printList(Node* head) const;

    int countList(Node* head) const;

    void printAbove20(Node* head) const;
    
    bool search(Node* Head, const string &targetName) const;

};



Node::Node(string studentName, int studentAge)
{
    name = studentName;
    age = studentAge;
    next = nullptr;
}

void Node::display() const
{
    cout << "Student name: " << name << ", Student age: " << age << ", Memory adress" << this << endl;
}

void Node::printList(Node* head) const
{
    Node* current = head;
    while(current != nullptr)
    {
        current->display();
        current = current->next;
    }
}

int Node::countList(Node* head) const
{
    int count = 0;
    Node* current = head;
    while(current != nullptr)
    {
        count++;
        current = current->next;
    }
    return count;
}

// void Node::printAbove20(Node* head) const
// {
//     int agex = 20;
//     Node* current = head;
//     while(current != nullptr)
//     {
//         if(current-> age > agex)
//         {
//             cout << current->name << endl;
//         }
//         current = current->next;
//     }
// }

void Node :: printAbove20(Node* head) const
{
    int agex = 20;
    Node* current = head;
    while(current != nullptr)
    {
        if(current->age > agex)
        {
            cout<<current->name<<endl;
        }
        current = current->next;
    }
}

bool Node::search(Node* head, const string& targetName) const 
{
    Node* current = head;
    while(current != nullptr) 
    {
        if(current->name == targetName) 
        {
            return true;
        }
        current = current->next;
    }
    return false;
}

int main()
{
    Node student1("Alfred", 19);
    Node student2("Gillroy", 17);
    Node student3("Akeem", 30);
    

    student1.next = &student2;
    student2.next = &student3;
    
    cout << "The queue looks like this: " << endl;
    student1.printList(&student1);
    cout << endl;

    cout << "The number of students int the line is: " << student1.countList(&student1) << endl;

    Node student4("Cesar", 22);
    student3.next = &student4;
    cout << "The updated queue looks like this: " << endl;
    student1.printList(&student1);
    cout << endl;

    cout << "The number of students int the line is: " << student1.countList(&student1) << endl;

    cout << "The students above age 20 are: " << endl;
    student1.printAbove20(&student1);

    Node student5("Dennis", 27);
    student4.next = &student5;
    student1.printList(&student1);
    cout << endl;

    cout << "The queue looks like this: " << endl;
    student1.printList(&student1);
    cout << endl;

    cout << "The number of students int the line is: " << student1.countList(&student1) << endl;

    cout << "Search results:" << endl;
    cout << "Is Akeem in the list? " << (student1.search(&student1, "Akeem") ? "Yes" : "No") << endl;
    cout << "Is Mary in the list? " << (student1.search(&student1, "Mary") ? "Yes" : "No") << endl;

    return 0;

}