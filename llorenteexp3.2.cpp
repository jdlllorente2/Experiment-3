#include <iostream>
#include <conio.h>
#include <iomanip>
#include <cstring>
using namespace std;

int main ()
{
	int i;
	double tempA[7], tempB[7], tempC[7];

	for (i=0; i<7; i++)
	{
		cout << "What are the temperatures of province A: " << endl;
		cout << "Day " << i+1 << endl;
		cin >> tempA[i];
	}

	for (i=0; i<7; i++)
	{
		cout << "What are the temperatures of province B: " << endl;
		cout << "Day " << i+1 << endl;
		cin >> tempB[i];
	}

	for (i=0; i<7; i++)
	{
		cout << "What are the temperatures of province C: " << endl;
		cout << "Day " << i+1 << endl;
		cin >> tempC[i];
	}

	cout << endl;

	for (i=0; i<7; i++)
	{
		cout << "Temperature of province A at Day " << i+1 << " is " << tempA[i] << endl;
	}
		cout << endl;

	for (i=0; i<7; i++)
	{
		cout << "Temperature of province B at Day " << i+1 << " is " << tempB[i] << endl;
	}
		cout << endl;

	for (i=0; i<7; i++)
	{
		cout << "Temperature of province C at Day " << i+1 << " is " << tempC[i] << endl;
	}
		cout << endl;

	_getch();
	return 0;
}
