#include<iostream>
using namespace std;
class base1
{
	public:
		void a()
		{
			cout << "a";
		}
};
class base2
{
	public:
		void b()
		{
			cout << "b";
		}
};
class derived:public base1,public base2
{
	public:
		void c()
		{
			cout << "c";
		}
};
int main()
{
	derived o;
	o.a();
	o.b();
	o.c();
	return 0;
}
