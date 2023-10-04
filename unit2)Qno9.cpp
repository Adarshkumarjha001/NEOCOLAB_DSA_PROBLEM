Problem Statement



Vennila is a student. She is learning data structure and a singly linked list. She wants to write a program to delete the second-to-last node of the linked list and also implement a program that deletes the second-to-last node of a singly linked list. Define a struct Node with two members: data to store the integer value and next to store the pointer to the next node in the list.



Note: This is a sample question asked in a mPhasis interview.

Input format :
The input consists of the following:



The first line contains an integer size, representing the number of elements in the linked list.

The second line contains arr space-separated integers, representing the elements of the linked list, and inserts nodes at the end.

Output format :
The output consists of the following:



The first line should display the elements of the original linked list.

The second line should display the elements of the linked list after deleting the second-to-last node.



Refer to the sample output for formatting specifications.

Code constraints :
1 <= size <= 100

-50000 <= arr <= 50000

Sample test cases :
Input 1 :
5
1 2 3 4 5
Output 1 :
Original Linked List: 1 2 3 4 5 
Updated Linked List: 1 2 3 5 
Input 2 :
6
-50000 50000 7976 9887 4000 7765
Output 2 :
Original Linked List: -50000 50000 7976 9887 4000 7765 
Updated Linked List: -50000 50000 7976 9887 7765 


  soln:-

  #include<bits/stdc++.h>
using namespace std;
class node{
	public:
		int data;
		node* next;
		node(int val){
			data=val;
			next=NULL;
		}
};
void insertattail(node* &head,int val){
	node* n=new node(val);
	if(head==NULL){
		head=n;
		return;
	}
	node* temp=head;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->next=n;
}

void deletionatsecondlastnode(node* &head,int pos){
	int count=1;
	node* temp=head;
	while(count!=pos-1){
		temp=temp->next;
		count++;
}
     node* todelete=temp->next;
     temp->next=temp->next->next;
     delete todelete;
	
}
void display(node* head){
	node* temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}
int main(){
	node* head=NULL;
	int n;
	
	cin>>n;
	for(int i=0;i<n;i++){
		int a;
		cin>>a;
		insertattail(head,a);
	}
	display(head);
	deletionatsecondlastnode(head,n-1);
	display(head);
}
