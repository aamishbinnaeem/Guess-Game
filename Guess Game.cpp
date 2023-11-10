#include <iostream>
#include <cstdlib>   // defines a set of functions as: random number generation.
#include <ctime>     // returns the string representing the localtime.

using namespace std;

int main(){
	int num;         // variable to store random number.
	int guess;       // variable to store guessed number.
	bool isGuessed = false;  // boolean variable intialized to 'false' to control the loop.
	char again;  //variable to ask user to play game again.
	
	srand(time(0));
	num = rand()%10;  // generates random number between 0-10 (Replace integer after '%' to change the guessing limit).
	
	cout<< "Do you want to play the Guess Game? ('Y' for Yes and 'N' for No) \n\n"; // gives user a choice to play or not.
	cin >> again; 
	
while(again == 'y' || again == 'Y'){  // logical operator 'OR' to run, either if only one condition is satisfied. 
	
	cout << endl;
	
	    while(!isGuessed){
		    cout << "Enter an integer in the range of 0-10: \n";   // the '\n' sets the pointer to a new line.
		    cin >> guess;
		
		        if(guess == num){
		    	    cout << "You entered the correct number.\n";
		    	    cout << "Winner\n\n";
		    	    break;
			    }
			    else if(guess < num){
				    cout << "Your guess is lower than the number. \n";
				    cout << "Guess again! \n\n";
		     	} 
			    else if(guess > num){
				cout << "Your guess is higher than the number. \n";
				cout << "Guess again! \n\n";
			    }  
	    }
    cout<< "Do you want to play the Guess Game? ('Y' for Yes and 'N' for No) \n\n";
    cin >> again;
}
	cout << endl;
	
	cout << "Sad to see you go :( \n";
	cout << "Goodbye!"; // leaves a farewell message when user promts 'No' to stop playing.
	
	return 0;
}

