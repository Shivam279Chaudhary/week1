#include<iostream>
using namespace std;

void swapFunction(int &a ,int &b)
{
	int t = a;
	a=b;
	b=t;
}

int main()
{
	int a= 10, b=20;
	cout<<"Initial values a : "<<a<<" , b : "<<b<<endl;
	swapFunction(a,b);
	cout<<"After Swap, final values a : "<<a<<" , b : "<<b<<endl;
}