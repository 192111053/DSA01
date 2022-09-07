#include<iostream>
using namespace std;
class base
{
	public:
		void a()
		{
			cout << "a";
		}
};
class derived:public base
{
	public:
		void b()
		{
			cout << "b";
		}
};
int main()
{
	derived o;
	o.a();
	o.b();
	return 0;
}
