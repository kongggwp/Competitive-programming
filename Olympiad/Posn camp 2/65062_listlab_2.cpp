//65062 ก้องกิดากร จันคนา
#include<bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    Node* next;
};
Node* head = NULL;
Node* pre = NULL;

void createList(int n)
{
    for (int i = 0; i < n; i++) {
        Node* newNode = new Node;
        cout << "Input the data for node " << i+1 << ": ";
        cin >> newNode->data;

        newNode->next = NULL;
        if (head == NULL) {
            head = newNode;
            pre = newNode;
        } else {
            pre->next = newNode;
            pre = newNode;
        }
    }
}

void insertFront(int n)
{
    Node *newnode = new Node;
    newnode->data = n;
    newnode->next = head;
    head = newnode; 
}

void insertLast(int n)
{
    Node* current = head;
    while (current->next!= NULL) {
        current = current->next;
    }
     Node *newnode = new Node;
     newnode->data=n;
     current->next= newnode;
     newnode->next = NULL;
}

void insertMiddle(int n)
{
    cout << "Input the position to insert new node : ";
    int pos;
    cin >> pos;
    if(pos==1)insertFront(n);
    Node* current = head;
    for(int i=0 ; i<pos-2 ; i++)
    {
        current = current->next;
    }
    Node* newnode = new Node;
    newnode->data = n;
    newnode->next = current->next;
    current->next = newnode;
}

void displayList( )
{
    cout << "Data entered in the list :" << endl;
    Node* current = head;
    while (current != NULL) {
        cout << "Data = ";
        cout << current->data <<endl;
        current = current->next;
    }
}
int main() {
    int n;
    cout << "Input the number of nodes: ";
    cin >> n;
    createList(n);
    displayList();
    cout << "Input data to insert at the beginning of the list : ";
    int x;
    cin >> x;
    insertFront(x);
    displayList();
    cout << "Input data to insert at the beginning of the list : ";
    cin >> x;
    insertLast(x);
    displayList();
    cout << "Input data to insert in the middle of the list : ";
    cin >> x;
    insertMiddle(x);
    displayList();
    return 0;
}