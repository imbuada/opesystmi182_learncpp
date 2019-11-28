#include <iostream>
using namespace std;

int main(){
	double userInput; //variable for user's input
	double perimeter, area;

	cout << "Square Calculator" << endl;
	

	cout << "Enter the length of the square: ";
	cin >> userInput; //get user input



	//Compute for area and perimeter
	perimeter = 4 * userInput;
	area = userInput * userInput; 

	//Print output
	cout << "Perimeter: " << perimeter << endl;
	cout << "Area: " << area << endl;

	return 0;

}
