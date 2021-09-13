//
//  main.cpp
//  Mid_1
//
//  Created by Adiz on 11/09/21.
//

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
#include <Line.h>
using namespace std;
class Batch
{
    public:
        int rollno;
        string name;
        double marks;
        Batch *next;
    
    Batch(int studentRoll,string studentName,double studentMarks){
        rollno=studentRoll;
        name=studentName;
        marks=studentMarks;
        next=NULL;
    }
    
    };

//Followings are just Suggestion.
//You can code as per your logic.

Batch *A=NULL, *B=NULL, *C=NULL, *Viva=NULL;

void AddStudents(int,string,int);
void printBatch(Batch *);
Batch* rotateBatch(Batch *, Batch *, Batch *); //Call Push Inside this Function
Batch* push(Batch *);
Batch* pop(Batch *);
Batch* sort(Batch *);

void AddStudents(Batch* &head, int studentRoll,string studentName,double studentMarks){
    Batch *obj = new Batch(studentRoll,studentName,studentMarks);
    Batch *temp = head;
    // if Lined List is empty!
    if (head==NULL) {
        head = obj;
        return;
    }
    // To reach at last node
    while (temp->next!=NULL) {
        temp = temp->next;
    }
    temp->next = obj;
    
}
void displayStudent(Batch* head){
    Batch* temp = head;
    if (temp==NULL) {
        cout<<endl<<"Your Linked List is Empty!"<<", temp=NULL"<<endl;
        cout<<"Plz Add Node in your Linked List becoz it's ";
    }
    while (temp!=NULL) {
        cout<<"Roll No: "<<temp->rollno<<endl;
        cout<<"Name: "<<temp->name<<endl;
        cout<<"Marks: "<<temp->marks<<endl;
        temp = temp->next;
    }
    nextLine();
    cout<<"NULL"<<endl;
}
int main()
{
    int select,numberOfNodes = 0,rollno;
    string name;
    double studMarks;
    Batch* head=NULL;
    cout<<"\t\t\t\t\t\t\t\t\tMid EXAM 1\n";
    nextsqrLine();
    do{
        nextLine();
        cout<<"Press 1 : Insert student"<<endl;
        cout<<"Press 2 : Display Student"<<endl;
        cout<<"Press 3 : Exit"<<endl;
        nextLine();
        
        cout<<"Enter Number for operation : ";
        cin>>select;
        nextLine();
        
        switch (select) {
            case 1:{
                cout<<endl<<"How many student do you want to Add : ";
                cin>>numberOfNodes;
                int stop = 0;
                while (stop!=numberOfNodes) {
                    cout<<"Enter student Roll No : ";
                    cin>>rollno;
                    cout<<"Enter student Name : ";
                    cin>>name;
                    cout<<"Enter Student Marks: ";
                    cin>>studMarks;
                    //Method Call
                    AddStudents(head, rollno,name,studMarks);
                    stop++;
                    nextLine();
                }
                cout<<numberOfNodes<<" student are successfully added!"<<endl;
                Line();
                break;
            }
            case 2:{
                cout<<"Your Linked List : "<<endl;
                displayStudent(head);
                break;
            }
            default:{
                cout<<"Exam Complite...";
                break;
            }
        }
        
    }while(select!=3);
    
    
    return 0;
}
