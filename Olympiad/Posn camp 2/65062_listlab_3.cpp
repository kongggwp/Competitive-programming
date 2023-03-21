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

void deleteFront( )
{
    cout << "Data of node 1 which is being deleted is : " << head->data << endl;
    Node *temp = head;
    head = head->next;
    delete temp;
    cout << "Data, after deletion of first node : "<<endl;
}

void deleteLast( )
{
    Node* current = head;
    while (current->next->next!= NULL) {
        current = current->next;
    }
    delete current->next->next;
    current->next = NULL;
    cout << "The new list after deletion the last node are : " << endl;
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

void deleteMiddle(int pos)
{
    Node* current = head;
    if(pos==1)deleteFront();
    for(int i=0 ; i<pos-2 ; i++)
    {
        current = current->next;
    }
     Node* temp = current->next;
    current->next = current->next->next;
    delete temp;
    cout << "Deletion completed successfully." << endl;
}

int main() {
    int n;
    cout << "Input the number of nodes: ";
    cin >> n;
    createList(n);
    displayList();
    deleteFront( );
    displayList();
    deleteLast( );
    displayList();
    cout << "Input the position of node to delete : ";
    int x;
    cin >> x;
    deleteMiddle(x);
    displayList();
    return 0;
}