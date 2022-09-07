#include<iostream>
using namespace std;
class count
{
	int value;
	public:
		count():value(8)
		{
		
		}
		void operator ++()
		{
			++ value;
		}
		void display()
		{
			cout << value; 
		}
};
int main()
{
	count cnm;
	++cnm;
	cnm.display();
	return 0;	
}
