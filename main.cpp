#include <iostream>
#include <Windows.h>
using namespace std;

int choice = 0;
int number = 0;
int guess = 0;

void game()
{
	system("cls");
	cout << "Random Number Generator Game" << endl;
	cout << "1. Generate random number" << endl;
	cout << "2. Leave game" << endl;

	cin >> choice;

	switch (choice)
	{
	case 1:
		number = (rand() % 10) + 1; // From 1 to 10
		cout << "Enter your guess: " << endl;
		cin >> guess;
		cout << "Processing your answer..." << endl;
		Sleep(3000); // Wait 3 seconds
		if (guess == number)
		{
			cout << "Your guess was correct!" << endl;
			cout << "You won!" << endl;
			Sleep(1110);
			game();
		}
		else
		{
			cout << "Your guess was incorrect!" << endl;
			cout << "You Lost! Try again" << endl;
			Sleep(1110);
			game();
		}
		break;
	case 2:
		exit(1);
		break;
	default:
		cout << "ERROR::No command" << endl;
		game();
		break;
	}
}

int main()
{
	// Number guessing game!
	// Please like and subscribe!!
	// Checkout my instagram ( Where i posted What are pointers in C++ )
	
	game();
}
