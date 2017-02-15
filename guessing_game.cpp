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

	cout << "Enter the 3rd number";
	cin >> "thirdNumber";

	cout << "Would you like to guess the average?";
	cin >> response;

	// If statement for user inputting y, n, or something invalid
	if (response == 'y')
	{
		cout << "What's your guess?";
		cin >> "guess";
		// Another if statement within the main one to check if the guess is correct
		if (guess == average)
		{
			cout << "How did you guess that? You must be a robot.";
		}
		else
		{
			cout << "Actually it's" << average;
		}
	}
	else if (response == 'n')
	{
		cout << "The average is" << average;
	}
	else
	{
		cout << "Invalid input. The average is" << average;
	}
	// Ends the program once the game is over
	return 0;
}

/* Bug notes
- Accidentally wrote comments wrong which commented things out
/*
