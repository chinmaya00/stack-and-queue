#include <iostream>
using namespace std;
class Stackarr
{
	public:
		int a1[200];//array declaration
		int top=0;
		
		void push(int value)
		{
		    //condition for pushing the elements to the end of array
			a1[top]=value;
			top++;
		}
		
		void pop()
		{
		    //condition for deleting last element of array
			a1[top-1]=0;
			top--;
		}
		
		void display()
		{
			for(int i=0;i<top;i++)
			{
				cout<<a1[i]<<",";
			}
			
			cout<<endl;
		}
		
		bool isEmpty()
		{
			if(top==0) return true;
			else return false;
		}
		
		int countItems()
		{
			int j=0;
			for(int i=0;i<top;i++)
			{
				j++;
			}
			return j;
		}
};

int main()
{
	Stackarr s1;
	s1.push(1);
	s1.push(2);
	s1.push(3);
	s1.push(4);
	s1.push(5);
	s1.display();
	s1.pop();
	s1.pop();
	s1.display();
	cout<<"The no of elements in the stack is: "<<s1.countItems();
	return 0;
}