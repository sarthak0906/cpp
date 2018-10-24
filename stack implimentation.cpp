#include<iostream>

using namespace std;
int top = -1;
bool is-empty(){
	if (top == -1) return true;
	else return false;
}
void push(int stack[],int a,int n){
	if (top == n-1) cout << "stack full	overflow condition" << endl ;
	else {
		top++;
		stack[top] = a;
	}
}
void pop(){
	if (t==-1) return ;
	else {
		stack[top] = 0;
		top--;
	}
}
int top-element(int stack[]){
	if (t==-1) return ;
	else return stack[top];
}
int size(){
	return (t+1);
}
int main()
{
	int stack[5];
	
	return 0;
}

