#include<iostream>
using namespace std;
int main()
{
	int a, b,c,d;
	cout << "Enter your choice:";
	cin >> c;
    a=6;
	b=9;
	switch(c)
	{
		case(1):
			d=a+b;
		    cout << "the addition is :" << d;
	        break;
	   	case(2):
			d=a-b;
		    cout << "the subtraction is :" << d;
	        break;
		case(3):
			d=a*b;
		    cout << "the multiplication is :" << d;
	        break;	
		case(4):
			d=a/b;
		    cout << "the division is :" << d;
	        break;		     
		case(5):
			d=a%b;
		    cout << "the modulus is :" << d;
	        break; 
		default:
		     cout << " invalid choice";
			 break;
			 	       
	}
	return 0;
}
