// InteractiveFiction.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Morgan Soetaert
// The story is using the plot of the movie "The Menu"
// This program uses input from the user to create a personalized adventure

#include <iostream>
using namespace std;

int main() {

	char again = 'y';
	while (again == 'y')
	{
		const int Dishes = 13;
		int guests, killed, survivors;
		string Chef;

		//get the information 
		cout << "Welcome to Hawthorne\n\n ";
		cout << "Please enter the following for you personalized menu.\n";

		cout << "enter the number of people in your party: ";
		cin >> guests;

		cout << "Enter the number of people in your party minus one: ";
		cin >> killed;

		survivors = guests - killed;

		cout << "Enter your last name: ";
		cin >> Chef;

		//tell the story
		cout << "\nA hungry group of " << guests
			<< " dinner guests hopped on a boat ";
		cout << "-- to go the famous Hawthorne resturant. ";
		cout << " Hawthorne is run by the famous Chef " << Chef << ".\n";
		cout << " During their dinner some strange dishes started being served. ";
		cout << "All created by the famous Chef " << Chef;
		cout << " After the dish The Mess, everyone realized that this was no ordinary dinner. ";
		cout << " After a series of gruesome dishes, " << killed << " were killed, ";
		cout << " this left just " << survivors << "one person in the group.\n";

		cout << " \nThe last person ran back to the boat, where they looked over the menu seeing " << Dishes << " in all. ";
		cout << " they cannot believe what just happened and how their night just ended.\n";

		cout << "\n Do you want to play again y/n: ";
		cin >> again;

	}
	cout << "\nSee you next time";
	return 0;


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
