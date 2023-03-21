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
    return 0;
}