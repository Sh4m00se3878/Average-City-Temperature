/*Seamus Tynan
This Program Takes Calculates the Average Temperature for 3 Different Cities*/
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

const int CITDIV = 3;

int main()
{
	double cityTemp1, cityTemp2, cityTemp3, averageTemp;
	string month, city1, city2, city3;

	cout << left << setw(40) << "Please enter the month you wish to use." << ":  ";
	cin >> month;
	cin.get();
	cout << endl;
	
	cout << setw(40) << "Please enter your first city." << ":  ";
	getline(cin, city1);
	cout << endl;
	cout << setw(40) << "followed by its temperature." << ":  ";
	cin >> cityTemp1;
	cin.get();
	cout << endl;
	
	cout << setw(40) << "Please enter your second city." << ":  ";
	getline(cin, city2);
	cout << endl;
	cout << setw(40) << "followed by its temperature." << ":  ";
	cin >> cityTemp2;
	cin.get();
	cout << endl;
	
	cout << setw(40) << "Please enter your third city." << ":  ";
	getline(cin, city3);
	cout << endl;
	cout << setw(40) << "followed by its temperature." << ":  ";
	cin >> cityTemp3;
	cin.get();
	cout << endl;

	cout << fixed << showpoint << setprecision(1) << endl;
	averageTemp = (cityTemp1 + cityTemp2 + cityTemp3) / CITDIV;

	cout << "The average temperature for the month of " << month 
		 << " for " << city1 << ", " << city2 << " and " << city3 
		 << " is " << averageTemp << " degrees." << endl;

	system("pause");
	return'0';
}