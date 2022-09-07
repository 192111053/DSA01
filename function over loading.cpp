#include <iostream>
using namespace std;
void add(int a, int b)
{
  cout << "sum = " << (a + b);
} 
void add(double a, double b)
{
    cout << endl << "sum = " << (a + b);
}
int main()
{
    add(55,72);
    add(8.3, 7.2);
    return 0;
}
