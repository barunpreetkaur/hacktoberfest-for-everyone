#include<iostream>
using namespace std;
//Function to calculate factorial using recursion
int fact(int n){
	if(n<0){
		return -1;
	}
	if(n==0){
		return 1;
	}
	return n*fact(n-1);
}
int main(){
	int x=-9;
	int r=fact(x);
	cout<<"If -1 : Factorial doesn't exists"<<endl;
	cout<<r;
	return 0;
}
