#include <iostream>
using namespace std;
int main()
{
	int randomNumber, userChoice, playAgainAnswer;
	string computerChoice, gameStatus;
	bool isWinner;
	cout << "Let's play Rock, Paper, Sciessors, Lizard, Spock!\n";
	while (true) {
		randomNumber = rand() % 5 + 1;
		switch (randomNumber) {
		case 1:
			computerChoice = "Rock";
			break;
		case 2:
			computerChoice = "Paper";
			break;
		case 3:
			computerChoice = "Scissors";
			break;
		case 4:
			computerChoice = "Lizard";
			break;
		default:
			computerChoice = "Spock";
			break;
		}
		cout << "What will you choose?\n";
		cout << "(1) Rock, (2) Paper, (3) Scissors, (4) Lizzard, (5) Spock: ";
		cin >> userChoice;

		cout << "The computer chooses " << computerChoice << endl;
		if (randomNumber == userChoice) {
			cout << "Tie! Try again.\n";
		}
		else {
			isWinner = false;
			switch (userChoice) {
			case 1:
				if (randomNumber == 3 || randomNumber == 4) {
					gameStatus = "Rock crashes " + computerChoice;
					isWinner = true;
				}
				else if (randomNumber == 2) {
					gameStatus = "Paper covers Rock.";
				}
				else {
					gameStatus = "Spock vaporizes Rock.";

				}
				break;

			case 2:
				if (randomNumber == 1) {
					gameStatus = "Paper covers Rock";
					isWinner = true;
				}
				else if (randomNumber == 5) {
					gameStatus = "Paper disproves Spock.";
					isWinner = true;
				}
				else if (randomNumber == 3) {
					gameStatus = "Scissors cut Paper.";
				}
				else {
					gameStatus = "Lizard eats Paper.";

				}
				break;

			case 3:
				if (randomNumber == 2) {
					gameStatus = "Scissors cut Paper.";
					isWinner = true;
				}
				else if (randomNumber == 4) {
					gameStatus = "Scissors decapitates Lizard.";
					isWinner = true;
				}
				else if (randomNumber == 5) {
					gameStatus = "Spock smashes Scissors.";
				}
				else {
					gameStatus = "Rock crushes scissors.";

				}
				break;

			case 4:
				if (randomNumber == 5) {
					gameStatus = "Lizzard poisons Spock.";
					isWinner = true;
				}
				else if (randomNumber == 2) {
					gameStatus = "Lizard eats Paper";
					isWinner = true;
				}
				else if (randomNumber == 1) {
					gameStatus = "Rock crushes Lizard.";
				}
				else {
					gameStatus = "Scissors decapitates Lizard.";

				}
				break;

			default:
				if (randomNumber == 3) {
					gameStatus = "Spock smashes Sciessors.";
					isWinner = true;
				}
				else if (randomNumber == 1) {
					gameStatus = "Spock vaporizes Rock.";
					isWinner = true;
				}
				else if (randomNumber == 2) {
					gameStatus = "Paper disproves Spock.";
				}
				else {
					gameStatus = "Lizard poisons Spock.";

				}
				break;


			}
			cout << gameStatus << endl;
			if (isWinner) {
				cout << "You win!\n";
			}
			else {
				cout << "You loose!\n";
			}
			cout << "Do you want to play again? ( 1 = Yes, 2 = No): ";
			cin >> playAgainAnswer;
			if (playAgainAnswer == 2) {
				break;
			}
			
		}
	}
	

	
}



