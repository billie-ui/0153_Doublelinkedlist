#include <iostream>
#include <string>
using namespace std;

string response_std;

class Node
{
public:
    int no;
    Node *next;
    Node *prev;
};

class DoubleLinkedList
{
private:
    Node *START;

public:
    DoubleLinkedList()
    {
        START = NULL;
    }

    void addNode()
    {
        int nim;
        cout << "Enter the roll number of the student: ";
        cin >> nim;

        // Step 1: Allocate memory for new node
        Node *newnode = new Node();

        // Step 2: Assign value to the data field
        newnode->no = nim;

        // If list is empty or inserting at 1st is empty or not in sorted
        if (START == NULL || nim <= START->no)
        {
            if (START != NULL && nim == START->no)
            {
                cout << "\nDuplicate roll numbers not allowed" << endl;
                return;
            }