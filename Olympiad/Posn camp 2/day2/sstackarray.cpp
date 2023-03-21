#include<iostream>
using namespace std;
#define STACKSIZE 100
struct stack {
int top;
int items[STACKSIZE];
};
stack s;
void empty(stack *s1)
{
    s1->top = -1;
}
bool isempty(stack *s1)
{
    if(s1->top==-1)return true;
    return false;
}
void push(stack *s1 , int x)
{
    if(s1->top == STACKSIZE-1)
    {
        cout << "stack overflow";
    }
    else
    {
        s1->items[++(s1->top)] = x;
    }
}
int pop(stack *s1)
{
    if(isempty(s1))
    {
        cout << "stack overflow";
        exit(0);
    }
    return s1->items[s1->top--];
}
int stackTop(stack *s1)
{
    if(isempty(s1))
    {
        cout << "stack overflow";
        exit(0);
    }
    return s1->items[s1->top];
}
void printstack(stack *s1)
{
    for(int i=1 ; i<=s1->top ; i++)
    {
        cout << s1->items[i] << ' ';
    }
}
int main()
{
    stack *s1 = new stack;
    push(s1 ,1);
    push(s1 ,12);
    push(s1 ,11);
    push(s1 ,16);
    push(s1 ,12);
    printstack(s1);
    /*pop(s1);
    printstack(s1);
    cout << stackTop(s1);*/
    stack *s2 = new stack;
    s2 = s1;
    printstack(s2);
    delete s2;
    printstack(s1);
}
