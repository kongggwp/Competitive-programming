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

int searchList(int n)
{
    Node *current = head;
    int idx=1;
    while(current->data != n)
    {
        current = current->next;
        if(current==NULL)return 0;
        idx++;
    }
    return idx;
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
    int x;
    cout << "Input the element to be searched : ";
    cin >> x;
    if(searchList(x)) cout << "Data found at node " << searchList(x);
    else cout << "Data not found in the list";
    return 0;
}