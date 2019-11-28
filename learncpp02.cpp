#include <iostream>
using namespace std;

int main(){
	int userInput; //variable for user's input
	
	cout << "What Element do you control?"<< endl;
	
	//ask for user input
	cout <<"Enter a number from 1 -4: ";
	cin >>  userInput;

	
	if(userInput == 1){
		cout << "Your element is FIRE" << endl;
	} 
	else if (userInput == 2){
		cout << "Your element is WATER" << endl;
	}
	else if (userInput == 3) {
		cout << "Your element is EARTH" << endl;
	}
	else if (userInput == 4){
		cout << "Your element is AIR" << endl;
	}
	else{
		cout <<"ERROR" << endl;
}






}
