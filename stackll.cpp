#include<iostream>
using namespace std;
//create the node type class 
class node{  
    public:
    int data ;
    node*next;
};
//craeat the stack class 
class stack{
    public:
    node*top;
    stack()
        {
             top=NULL; 
        }
        
//add elements to the front
void push (int value )
{
    node*temp=new node;
    temp->data=value;
    if (top==NULL)
    {
        top=temp;
        top->next=NULL;
    }
    else
    {
        temp->next=top;
        top=temp;
    }
}

//display
void display()
{
    node *current=top;
    while (current!=NULL)
    {
        cout <<current->data<<"->";
        current=current->next;
    }
    cout <<endl;
}

//delete
void pop()
{
    node*temp;
    temp=top;
    top=temp->next;
    delete temp;
}

//size
void size ()
{
    node*current=top;
    int i=0;
    while (current!=NULL)
    {
    i++;
    current=current->next;
    }
    cout << "Size of the stack : "<<i<<endl;
} 

//top
void topp()
{
    cout <<"The top element is : "<<top->data<<endl;
}
void isempty()
{
    node *current=top;
    if (current==NULL)
    {
        cout<<"Empty stack"<<endl;
    }
    else
    cout<<"It has element.";
    cout <<endl;
}
};
int main ()
{
    stack s1;
    
    for (int i=1;i<5;i++)
    {
        s1.push(i);
    }
    s1.display();
    s1.size();
    s1.topp();
    s1.isempty();
    s1.pop();
    s1.display();
    s1.push(5);
    s1.display();
    s1.size();
    return 0;
}