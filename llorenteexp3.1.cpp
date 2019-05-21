#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main ()
{
	int i, n=10, num[10], temp, j;
	float sum=0, avg;

	cout << setprecision(2) << fixed << showpoint;

	for (i=0; i<10; i++)
	{
		cout << "Enter " << i+1 << " number: ";
		cin >> num[i];
	}

	for (i=0; i<n; i++)
	{
		sum=sum + num[i];
	}

	cout << " \nThe summation of the numbers is " << sum << endl;
	avg= sum/10;
	cout << "The average of the numbers is " << avg << endl;

	for(i = 0; i < 9; i++)	{
		for(j = 0; j < 9-i-1; j++)
		{
			if(num[j] > num[j+1])	{
				temp = num[j];
				num[j] = num[j+1];
				num[j+1] = temp;
			}
		}
	}
	cout << "The largest number is " << num[9] << "\n";
	cout << "The smallest number is " << num[0] << "\n" << endl;
	_getch();
	return 0;
}
