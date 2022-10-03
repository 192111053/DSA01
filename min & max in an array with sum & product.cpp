#include <iostream>
using namespace std;

int getMin(int arr[], int n)
{
	int res = arr[0];
	for (int i = 1; i < n; i++)
		res = min(res, arr[i]);
	return res;
}

int getMax(int arr[], int n)
{
	int res = arr[0];
	for (int i = 1; i < n; i++)
		res = max(res, arr[i]);
	return res;
}
int findSum(int arr[], int n)
{
	int min = getMin(arr, n);
	int max = getMax(arr, n);

	return min + max;
}
int findsub(int arr[], int n)
{
	int min = getMin(arr, n);
	int max = getMax(arr, n);

	return min - max;
}

int main()
{
	int arr[] = { 11,2,6,8,12,5 };
	int n = sizeof(arr) / sizeof(arr[0]);

	cout << "Sum = " << findSum(arr, n) << endl;
	cout << "sub = " << findsub(arr, n);

	return 0;
}
