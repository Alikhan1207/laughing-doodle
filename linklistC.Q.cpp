#include<iostream>
#include<conio.h>
using namespace std;
struct node{
	int data;
	node *next;
};
class linklistCQueue{
	node* rear;
	node * front;
	public:
	linklintQueue()
	{
		rear=front=NULL;
	}
	void insert(int x)
	{
		node*ptr=new node;
		ptr->data=x;
		ptr->next=front;
		if(rear==NULL)
		{
			
			rear=ptr;
			front=ptr;
		}
		else
		 rear->next=ptr;
		 ptr->next=front;
		 rear=ptr;
	}
		int remove()
	{
		int tdata=front->data;
		node *tptr=front;
	 	front=front->next;
	   //	front->next=front;
	
		if(front==rear&&front!=NULL)
		{
		rear=NULL;
		front=NULL;
	}
	 
	   
			delete tptr;
		return tdata;
		//}
		cout<<endl;
	}

	
	void  display()
	{
		node *curr=front;
        if(curr!=rear)
        {
		do
		{
			cout<<curr->data;
			curr=curr->next;
				cout<<endl;
		}
		while(curr!=front);
//	while(curr!=front);
}
	}
	
	
	
	
};
int main()
{
	 	linklistCQueue q1;
 	int option;
 	int d;
 	do
 	{
 		cout<<"\n press 1 for add:";
 		cout<<"\n press 2 for remove:";
 		cout<<"\n press 3 for display:";
 		cin>>option;
 		switch(option)
 		{
 			case 1:
 				 cout<<"enter the data:";
 				 cin>>d;
 				 q1.insert(d);
 				 break;
 			case 2:
 				  
			      q1.remove();
			      break;
			case 3:
			      q1.display();
				  break;
			default:
			     cout<<"invalid option:";
				 	  	  	 
		 }
		 cout<<"do you want to continue:";
	 }
	 while(getch()=='y');
}
