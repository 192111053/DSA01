#include<iostream>
using namespace std;
class a
{
	public:
	a(int x)
	{
		cout << x<<endl;
	}
	a(int y, int z)
	{
		cout << y <<","<< z<< endl;
	}
};
int main()
{
	a o1(66);
	a o2(45,99);
	return 0;
}
