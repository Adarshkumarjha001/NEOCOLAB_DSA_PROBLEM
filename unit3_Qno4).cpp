Problem Statement



Bindu is working on a program to convert decimal numbers to binary representation using a stack data structure implemented with a linked list. She needs your help in designing and implementing this program.



Your task is to design and implement the stack with the specified push and pop operations to support this conversion.

Input format :
The input consists of an integer d, representing the decimal number to be converted into binary.

Output format :
The output is a single line containing the binary representation of the input decimal number in the format "Binary representation: [binary]".



Refer to the sample output for formatting specifications.

Code constraints :
The stack used for the conversion can have a maximum size of 32.

1 <= d <= 512

Sample test cases :
Input 1 :
10
Output 1 :
Binary representation: 1010
Input 2 :
37
Output 2 :
Binary representation: 100101

  soln:-

  #include<bits/stdc++.h>
using namespace std;
int main(){
	stack<int> ans;
	int n;
	cin>>n;
	int a;
	while(n!=0){
		a=n%2;
		ans.push(a);
		n=n/2;
	}
	while(!ans.empty()){
		cout<<ans.top();
		ans.pop();
	}
}
