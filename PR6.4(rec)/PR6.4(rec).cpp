#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

void Create(int* a, const int n, int i)
{
	cout << "a[i] = "; cin >> a[i];
	if (i < n - 1)
		Create(a, n, i + 1);
}
void Print(int* a, const int n, int i)
{
	cout << setw(4) << a[i];
	if (i < n - 1)
		Print(a, n, i + 1);
	else
		cout << endl;
}
int Min(int* a, const int size, int i, int min)
{
	if (a[i] < min)
		min = a[i];
	if (i < size - 1)
		return Min(a, size, i + 1, min);
	else
		return min;
}

void Sort(int* a, const int size, int i, int j) 
{ 
		if (abs(a[j]) >= 1 && abs(a[j + 1]) <= 1)
		{
			int tmp = a[j];
			a[j] = a[j + 1];
			a[j + 1] = tmp;
		}
		if (j < size - i - 1)
			Sort(a, size, i, j + 1);
	    if (i < size - 1)
		    Sort(a, size, i + 1, 0);
}
int main()
{
	int n;
	cout << "n = "; cin >> n;
	int* a = new int[n];

	Create(a, n, 0);
	Print(a, n, 0);

	cout << "min = " << Min(a, n, 1, a[0]) << endl;

	Sort(a, n, 1, 0);
	Print(a, n, 0);

	delete[] a;
	return 0;
}
