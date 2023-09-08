#include<iostream>
using namespace std;
class stacks
{
    int top=-1;
    int MAXSIZE=7;
    int s[7]={};
    
    public:
    bool isEmpty()
    {
}
 if (top==-1){
    return 1;
 }
 else 
 return 0;
 }
 void push(int data)
 {
    if (isFull)
    {
        cout<<"stack is full"<<endl;
    }
    else{
        top=top+1;
        s[top]==data;
    }
 }
 int 