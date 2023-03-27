// Arif Ikbal Tarik
#include<iostream>
using namespace std;
#define CAPACITY 3
int stack[CAPACITY];
int top = -1;// amader ekta top dhore nite hbe.
void push(int x)
{
    if(top < CAPACITY -1) // if capacity er theke top choto hoi..
    {
        top = top+1; // top barte thakbe..
        stack[top]= x;// push korla ekhane
        printf("Succesfully added item:%d\n",x);
    }
    else
    {
        printf("Exception!\n");
    }

}
int pop()
{
    if(top>=0){
        int value = stack[top];
        top = top -1;
        return value;
    }
    printf("Exception from pop!\n");

    return -1;
}
int peek()
{
    if(top >=0){

    return stack[top];
    }
    printf("Exception for peek.\n");
    return -1;
}
int main()
{
    printf("First stack implementation.\n");
    peek();
    push(10);
    push(20);
    push(30);
    printf("pop of stack:%d\n",pop());
    push(40);
    printf("Top of stack:%d\n",peek());
    return 0;
}
