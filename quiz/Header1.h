#pragma once
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
class Question {
	string question = "Перше питання";
	string answer[4] = {"Відповідь 1 ","Відповідь 2 ","Відповідь 3 ","Відповідь 4"};
	int Ans;
	int TrueAns=1;
	int i = 0;
public:
	void Print() {
		cout << "\tПитання 1" <<endl;
		cout << "" << endl;
		cout <<"\t" << question << endl;
		cout << "" << endl;
		for (i = 0; i < 4; i++) {
			cout <<"\t" << answer[i] << endl;
			cout << "" << endl;
		}
	}
	void TrueA() {
		cout << "Введіть номер відповіді" << endl;
		cout << "" << endl;
		cin >> Ans;
		if (Ans == TrueAns) {
			cout << "Ви правильно відповіли" << endl;
		}
		else {
			cout << "Відповідь невірна" << endl;
		}
	}
};
