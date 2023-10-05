Problem Statement



You are given an integer n representing the number of nodes in a singly linked list. Each node contains a string value. 



Your task is to implement a program that creates a singly linked list with the given number of nodes and string values and then deletes the last node from the list. Finally, you need to print the contents of the modified linked list.



Note: This is a sample question asked in a HCL interview.

Input format :
The first line of input consists of an integer n, representing the number of nodes in the singly linked list.

The next n lines of input consist of n strings, where each line represents the string value of a node in the linked list.

Output format :
The output should print the elements of the singly linked list after deleting the last node. The elements should be separated by space.

Code constraints :
1 ≤ n≤ 100

Each string value in the nodes will contain only alphabetical characters.

Sample test cases :
Input 1 :
4
Hello 
World 
I 
Am
Output 1 :
Hello World I 
Input 2 :
3
Hello 
Hello 
Hello
Output 2 :
Hello Hello 

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
void deletionatlast(node* &head){

	node* temp=head;
	while(temp->next->next!=NULL){
		temp=temp->next;
	}
	
        node* todelete=temp->next;
		temp->next=NULL;
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
	int b;
	cin>>b;
	string c;
	for(int i=0;i<b;i++){
		cin>>c;
		insertattail(head,c);
	}
	display(head);
	deletionatlast(head);
	display(head);
	
}
