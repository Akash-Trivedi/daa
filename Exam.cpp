/*
Total Marks - 20
Definition:
1) Create 3 Circular Batch (A, B, C) with atleast 5 Students in Each 
[ 3 Marks CREATE , Insertion at Last]

2) Rotate Each Batch in Incrementing Order (A1, B2, C3, A4, B5, C6 ...)
and Push specific Student in New Circular Batch Called Viva. 
[5 Rotate Logic + 3 Marks PUSH]

3) Viva will store all Students in Stack Formation 
which will be poped at Last to Display all Students. 
[ 3 Marks POP  + 2 Marks Display]

4) Display again after Perform Sorting accoring  Marks, Name and then Roll No.
If marks are same then Sort on name. If name are same then sort on Roll No.
You can select Ascending or Descending order as per your choice.
[ 4 Marks Sorting ]
*/


#include<iostream>
using namespace std;
int HEAD=-1;
class Batch
{
	public:
		int rollno;
		string name;
		double marks;
		Batch *next;
	Batch(int r, string n, double m){
		rollno=r; name=n, marks=m, next=NULL;	
	}	
};

Batch *HEAD1=NULL;
Batch *batch[5];
//Followings are just Suggestion.
//You can code as per your logic.

Batch *A=NULL, *B=NULL, *C=NULL, *Viva=NULL;

Batch * AddStudents(int r, string n, double m){
	if(HEAD1==NULL){
		HEAD1= new Batch(r, n, m);
	}
	return HEAD1;
}

void printBatch(){
	int choice=0;
	Batch *temp=NULL;
	cout<<"A-1\nB-2\nC-3\n"<<endl;
	cout<<"Which batch?:";
	cin>>choice;
	switch (choice)
	{
	case (1):
		temp=A;
		if(temp!=NULL){
			while(temp!=NULL){
				cout<<temp->name<<"-"<<temp->marks<<endl;
				temp=temp->next;
		}
		} else{
			cout<<"Batch Empty";
		}
	break;

	case 2:
	temp=B;
	if(B!=NULL){
		while(temp!=NULL){
		cout<<temp->name<<"-"<<temp->marks<<endl;
		temp=temp->next;
	}
	} else{
		cout<<"Batch Empty";
	}
	break;

	case (3):
	temp=C;
	if(C!=NULL){
		while(temp!=NULL){
			cout<<temp->name<<"-"<<temp->marks<<endl;
		temp=temp->next;
	}
	} else{
		cout<<"Batch Empty";
	}
	break;
	}
}

Batch * rotateBatch(Batch *, Batch *, Batch *); //Call Push Inside this Function

void push(Batch **listptr, Batch *value){
	cout<<"pushing.."<<endl;
	if(*listptr!=NULL){
		Batch *temp=*listptr;
		while(temp->next!=NULL){
			temp=temp->next;
		} temp->next=value;
	} else{
		*listptr=value;//problem
	}
}

void pop(Batch **listptr){
	if(*listptr!=NULL){
		Batch *temp=*listptr;
		Batch *temp2=*listptr;
		while(temp->next!=NULL){
			temp=temp->next;
		} *listptr=temp->next;
	} else{
		listptr= NULL;
	}
}

void sort1(Batch **list){
	cout<<"sorting started...";
	Batch *newlink=NULL, *tptr=*list, *temp=*list;
	if(temp!=NULL){
		while(temp->next!=NULL){
			while(tptr->next!=NULL){
				if(tptr->marks<temp->marks){
					// swapping here
					
				}
				tptr=tptr->next;
			}
			push(&newlink, tptr);
			temp=temp->next;
		}
	} else{
		cout<<"Batch is empty"<<endl;
	}
	cout<<"sorting complete"<<endl;
}

int main()
{
	cout<<"inside main"<<endl;
	push(&A, new Batch(1, "akash1", 25.0));
	push(&A, new Batch(2, "ravi1", 26.0));
	push(&A, new Batch(3, "amit1", 27.0));
	cout<<"batch A complete"<<endl;
	push(&B, new Batch(1, "akash2", 24.0));
	push(&B, new Batch(2, "ravi2", 26.0));
	push(&B, new Batch(3, "amit2", 23.0));
	cout<<"batch B complete"<<endl;
	push(&C, new Batch(1, "akash3", 25.0));
	push(&C, new Batch(2, "ravi3", 27.0));
	push(&C, new Batch(3, "amit3", 27.0));
	cout<<"batch C complete"<<endl;
	printBatch();
	cout<<"Print complete"<<endl;
	sort1(&A);
	printBatch();
	return 0;
}