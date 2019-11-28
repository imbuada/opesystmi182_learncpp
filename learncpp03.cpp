#include <iostream>
using namespace std;
#include <stdlib.h>

int main(){
	int userInput, rng;

	cout << "Number Guessing Game!" << endl;

	//prompting for user input
	cout << "Enter a number from 1 to 10: ";
	cin >> userInput;

	rng = rand() % 10 + 1;

	while (userInput != rng){
		if (userInput >rng){
			cout << "GO LOWER!";
			cin >> userInput;
		}
		else if (userInput < rng){
			cout << "GO HIGHER";
			cin >> userInput;
		}
	}
	
	cout << "Congratulations! The number is " << rng << endl;



	return 0;

}
