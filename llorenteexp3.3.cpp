#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main ()
{
	char text[500], rev[500], temp;
	int n, i, j;

	cout << "How many characters are there inside the array? \n";
	cin>> n;

	for (i=0; i<n; i++)
	{
		cin >> text[i];
	}

	
	for(i = 0; i <= n; i++)	{
		for(j = 0; j < n-j-1; j++)
		{
			if(text[j] > text[j+1])	{
				temp = text[j];
				text[j] = text[j+1];
				text[j+1] = temp;
			}
		}
	}
	cout << "In Reverse Order: " << endl;

	for (i=0; i<n; i++)
	{
		cout << text[i] << " ";
	}

	cout<<endl<<"ARRAY NUMBER "<<n;

	_getch();
	return 0;
}
