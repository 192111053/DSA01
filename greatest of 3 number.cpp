#include<iostream>
using namespace std;
int main()
{
	int a=5;
	int b=6;
	int c=3;
	if(a>b && a>c)
	{
		cout << "a is greater";
	}
	else if (b>a && b>c)
	{
		cout << "b is greater";
	}
	else
	{
		cout << "c is greater";
	}
	return 0;
}
