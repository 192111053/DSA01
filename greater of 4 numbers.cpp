#include<iostream>
using namespace std;
int main()
{
	int a=5;
	int b=6;
	int c=3;
	int d=7;
	if(a>b && a>c && a>d)
	{
		cout << "a is greater";
	}
	else if (b>a && b>c && b>d)
	{
		cout << "b is greater";
	}
	else if (c>a && c>b && c>d)
	{
		cout << "c is greater";
	}
	else
	{
		cout << "d is greater";
	}
	return 0;
}
