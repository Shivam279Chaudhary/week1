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

	int a= 111, b=2222;
	cout<<"Initial values a : "<<a<<" , b : "<<b<<endl;
	swapFunction(a,b);
	cout<<"After Swap, final values a : "<<a<<" , b : "<<b<<endl;
}