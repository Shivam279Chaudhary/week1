#include<iostream>
using namespace std;

void swapFunction(int &a ,int &b)
{
	a = a+b;
	b = a-b;
	a = a-b;
}

int main()
{
	int a= 5 , b=10;
	cout<<"Initial values"<<a<<" : "<<b<<endl;
	swapFunction(a,b);
	cout<<"After Swap values"<<a<<" : "<<b<<endl;
}