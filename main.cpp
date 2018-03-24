#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;
string wordd;
string strChoice;
char orlando[] = "orlando";
char seven[] = "seven";
char eleven[] = "eleven";

/*
void wordBank(string chooseWord) {


return
}*/

int main() {
	char cGuess;
	int count;
	int i;
	int j;
	int h;
	//char replayChar;
	bool replay = true;

	// Do {

		srand(time(NULL));
		int randNum = (rand() % 5) + 1;
		cout << randNum << endl;
		switch (randNum) {
		case 1:
			strChoice = "quality";
			break;
		case 2:
			strChoice = "bernie";
			break;
		case 3:
			strChoice = "production";
			break;
		case 4:
			strChoice = "chelsea";
			break;
		case 5:
			strChoice = "disingenuous";
			break;
		default:
			cout << "Something else" << endl;
		}

		string str1 = strChoice;
		string temp = strChoice;

		for (h = 0; h < str1.length(); h++) {
			temp[h] = '-';
		}
		wordd = temp;
		char wrongGuess[30];
		

		cout << "****Guess the Letter****" << endl << endl;

		do {
			count = 0;
			cout << wordd << endl;
			printf("\n");
			cin >> cGuess;

			for (i = 0; i < str1.length(); i++) {
				if (str1[i] == cGuess) {
					wordd[i] = cGuess;
					count++;
				}
				else {
					//
				}
			}

			if (count == 0) {
				printf("TRY AGAIN\n");
				for (j = 0; j < 26; j++) {
					wrongGuess[j] = cGuess;
				}
			}
			printf("\n\n");

		} while (wordd != str1);
		//cout << wrongGuess << endl;
		cout << "**Good Job!**" << endl;
		cout << wordd << endl << endl << endl;

		cout << "WANNA PLAY AGAIN? (y or n)" << endl << endl;
		/*cin >> replayChar;
			if (replayChar == 'y') {
				replay = true;
			}
			else {
				replay = false;
			} */

	//} while (replay = true); 

	system("PAUSE");
	return 0;

}



