#inclue <iostream>

using namespace std;

void main ()
{
	// Delcaration of variables
	int firstNumber, secondNumber, thirdNumber;

	int average;

    // Input/Output for each number
	cout << "Enter the 1st Nnmber";
	cin >> "firstNumber";

	cout << "Enter the 2nd number";
	cin >> "secondNumber";

	cout << "Enter the 3rd number";
	cin >> "thirdNumber";

	cout >> "Would you like to guess the average?";

	average = (firstNumber + secondNumber + thirdNumber) / 3;

	// Start of if statement to calculate if guess is correct
	if (cin >> "y")
	{
		cout << "What's your guess?";
		cin >> "averageGuess";
		
		switch ("averageGuess")
		{
			case 7:
			cout << "How did you do that? You must be a robot.";
			break;

			default:
			cout << "Wrong. Try again!"
			break;
		}
	}
	else if (cin >> "n")
	{
		cout << "The average is 7";
	}

}
