#include <iostream>
using namespace std;

int main(){
	int i, j; //variables for rows and columns
	int userInput;	//variable for user input

	cout << "Making a Square!" << endl;

	cout << "Input number of rows: "; //prompt for user input
	cin >> userInput;

	//generating the square
	for (i =1; i< userInput; i++){ 
		for (j=1; j<userInput; j++){
			cout << "*";
		}
		cout <<"\n";
	}
	return 0;
}
