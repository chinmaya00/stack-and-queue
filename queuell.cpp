#include<iostream>
using namespace std;
//create the node type class
class node
{       public:
        int data;
        node*next;
};
//create the queue class
class queue
{
        public:
        node*head;
        node*tail;
        queue()
        {
                head=NULL;
                tail=NULL;
        }

//add
void enqueue(int value)
{
        node*temp=new node;
        temp->data=value;
        if(head==NULL)
        {
           head=temp;     
        }
        else
        tail->next=temp;
        tail=temp;
        tail->next=NULL;
}

//delete
void dequeue()
{
        node*temp;
        temp=head;
        head=temp->next;
        delete temp;
        cout<<endl;
}
void display()
{ 
        node*current=head;
        while(current!=NULL)
        {
          cout<<current->data<<"->";
          current=current->next;
        }
  cout<<endl;
}
void isempty()
{
        if (head==NULL)
        {
         cout<<"Empty queue";
        }
        else 
        {
        cout<<"Queue has elements.";
        }
        cout<<endl;
}
void size()
{
        int i=0;
        node*current=head;
        while(current!=NULL)
        {
                i++;
                current=current->next;
        }
        cout<<"The no elements in queue is :  "<<i<<endl;
}
};
int main ()
{
        queue q1;
        for(int i=1;i<=10;i++)
        {
                q1.enqueue(i);
        }
        q1.display();
        q1.isempty();
        q1.size();
        q1.dequeue();
        q1.display();
        q1.size();
        q1.enqueue(1);
        q1.display();
        q1.size();
        return 0;
}





