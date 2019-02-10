#include <iostream>
using namespace std;

class Queuearr{
	public:
		int arr[50];//declaring the array
		int front=0;
		int end=0;
		//adding elements at the end
		void enqueue(int value)
		{
			arr[end]=value;
			end++;
		}
		//delete elments from the front
		void dequeue()
		{
			arr[front]=0;
			front++;
		}
		
		void display()
		{
			for(int i=front;i<end;i++)
			{
				cout<<arr[i]<<",";
				
			}
			cout<<endl;
		}
		
			bool isEmpty()
		{
			if(end==0) return true;
			else return false;
		}
		
		int countItems()
		{
			int j=0;
			for(int i=front;i<end;i++)
			{
				j++;
			}
			return j;
		}
};

int main()
{
	Queuearr q1;
	q1.enqueue(1);
	q1.enqueue(2);
	q1.enqueue(3);
	q1.enqueue(4);
	q1.display();
	cout<<"No of elements in queue: "<<q1.countItems()<<endl;
	q1.dequeue();
	q1.display();
	q1.enqueue(6);
	q1.display();
	return 0;
}