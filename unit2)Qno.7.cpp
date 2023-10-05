You are working on a text processing tool, and you need to implement a feature that allows users to insert characters into a linked list of characters at a specific position. Each character represents a piece of text, and the linked list maintains the order of characters.



Implement a program that takes user inputs to create a linked list of characters and inserts a new character after a given index in the list.

Input format :
The first line of input consists of an integer n, representing the number of characters in the initial linked list.

The second line contains a sequence of n characters representing the initial linked list.

The third line contains an integer index, representing the index after which the new character node needs to be inserted.

The line contains a character value representing the character to be inserted after the given index.

Output format :
The program should output the updated linked list after the insertion of the new character node, after the given index (0-indexed)

If the provided index is out of bounds (negative or larger than the list size), the program should output "Invalid index." and the linked list remains unchanged.



Refer to the sample output for formatting specifications.

Code constraints :
The initial linked list can contain up to 50 characters.

The index is a non-negative integer.

The character value can be any printable ASCII character.

Sample test cases :
Input 1 :
5
a b c d e
2
X
Output 1 :
Updated list: a b c X d e 
Input 2 :
3
x y z
0
A
Output 2 :
Updated list: x A y z 
Input 3 :
4
a b c d
6
x
Output 3 :
Invalid index.
Updated list: a b c d 

soln:-

  #include<bits/stdc++.h>
using namespace std;
class node{
	public:
		string data;
		node* next;
		node(string val){
			data=val;
			next=NULL;
		}
};
void insertattail(node* &head,string val){
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
void insertatanyposition(node* &head,int y,string val){
	node* n=new node(val);
	int count=0;
	node* temp=head;
	while(count!=y){
		temp=temp->next;
		count++;
}

   n->next=temp->next;
   temp->next=n;
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
	int b;
	cin>>b;
	string c;
	for(int i=1;i<=b;i++){
		cin>>c;
		insertattail(head,c);
	}
	display(head);
	int y;
	cin>>y;
	string p;
	cin>>p;
	insertatanyposition(head,y,p);
	display(head);
	
}
