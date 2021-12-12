#pragma once
#include <iostream>
#include <string>
using namespace std;
class Question {
public:
	string question;
	string answers[4];
	int Ans;
	int RightAnswers;
	int NofQuestion = 1;
	int i = 0;
	void Print() {
		cout << "\tПитання " << NofQuestion << endl;
		cout << "" << endl;
		cout << "\t" << question << endl;
		cout << "" << endl;
		for (i = 0; i < 4; i++) {
			cout << "\t" << answers[i] << endl;
			cout << "" << endl;
		}
		NofQuestion += 1;
	}
	void TrueA() {
		cout << "Введіть номер відповіді" << endl;
		cout << "" << endl;
		cin >> Ans;
		if (Ans == RightAnswers) {
			cout << "Ви правильно відповіли" << endl;
		}
		else {
			cout << "Відповідь невірна" << endl;
		}
	}
};
