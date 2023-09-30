Problem Statement



Alice and Bob are working on a programming project where they need to reverse a given string using the Last-In-First-Out (LIFO) stack method. They want to create a program that accomplishes this task efficiently. They have asked for your help with this task.



Write a program that takes a string as input, uses a LIFO (Last-In-First-Out) stack to reverse the characters in the string, and then prints the reversed string.



Note: This is a sample question asked in a Capgemini recruitment.

Input format :
The input consists of a string s, representing the single line of text as input.

Output format :
The output prints the reversed string on a single line.

Code constraints :
1 <= s <= 100

Sample test cases :
Input 1 :
JNCAB
Output 1 :
BACNJ
Input 2 :
DEFG CVDF
Output 2 :
FDVC GFED
Input 3 :
Talk is cheap.
Output 3 :
.paehc si klaT



soln:-
#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<char> ans;
    string ch;
    getline(cin,ch);
    for(int i=0;i<ch.length();i++){
        ans.push(ch[i]);
    }
    while(!ans.empty()){
        cout<<ans.top();
        ans.pop();
    }
}
