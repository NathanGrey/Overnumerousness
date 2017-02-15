// Starts the preprocessor command including the contents of iostream
#inclue <iostream>

// This eliminates the need to write std::cout so it can just be cout
using namespace std;

/* I've looked up and heard void main () is considered in bad practice? 
Still not completely understanding why though */
void main ()
{
	// Delcaration of variables
	int firstNumber, secondNumber, thirdNumber, average, guess;
	// Takes a single character as a response
	char response;

	// Calcualtes the average
	average = (firstNumber + secondNumber + thirdNumber) / 3;

    // Input/Output for each number
	cout << "Enter the 1st Nnmber";
	cin >> "firstNumber";

	cout << "Enter the 2nd number";
	cin >> "secondNumber";

	cout << "Enter the 3rd number4";
	cin >> "thirdNumber";

	cout << "Would you like to guess the average?";
	cin >> response;

	// If statement for user inputting y
	if (response == 'y')
	{
		cout << "What's your guess?";
		cin >> "guess";
		// Another if statement within the main one to check if the guess is correct
		if (guess == average)
		{
			cout << "That's mathematical! You're correct!";
		}
		// Else statement which give the correct answer if user's guess is incorrect
		else
		{
			cout << "Actually it's" << average;
		}
	}
	// Else if statement for if the user inputs n
	else if (response == 'n')
	{
		cout << "The average is" << average;
	}
	else
	{
		cout << "That's not y or n, but the average is actually" << average;
	}
	// Ends the program once the game is over
	return 0;
}

/* Bug notes
- Accidentally wrote comments wrong which commented things out
/*
