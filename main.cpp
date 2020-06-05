#include <iostream>
using namespace std;

int main() {
	//Only the top 10 scores are kept for the leader board
	int top_scores[10] = {11118, 10579, 10178, 9026, 8254, 7947, 7503, 7478, 7021, 6873};
	char choice;	//whether to enter another score
	
	cout << "This program asks users to enter new scores";
	cout << " for the game and determine how they affect ";
	cout << "the leader board. Only top 10 scores are kept." << endl;
	do {
		int score;
		cout << "Enter a new score:\t";
		cin >> score;
		//Add code to decide whether and how top_scores may be adjusted. Use loop(s) to avoid unnecessary repetition of code.

		cout << "Would you like to process another score (Y/N)?\t";
		cin >> choice;
	}	while (choice != 'N' && choice != 'n');	//continue until user enter 'N' or 'n'.

	//Add code to display the final top 10 scores. Use loop(s) to avoid unnecessary repetition of code.
	return 0;
}