#pragma once
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
class Question {
	string question = "����� �������";
	string answer[4] = {"³������ 1 ","³������ 2 ","³������ 3 ","³������ 4"};
	int Ans;
	int TrueAns=1;
	int i = 0;
public:
	void Print() {
		cout << "\t������� 1" <<endl;
		cout << "" << endl;
		cout <<"\t" << question << endl;
		cout << "" << endl;
		for (i = 0; i < 4; i++) {
			cout <<"\t" << answer[i] << endl;
			cout << "" << endl;
		}
	}
	void TrueA() {
		cout << "������ ����� ������" << endl;
		cout << "" << endl;
		cin >> Ans;
		if (Ans == TrueAns) {
			cout << "�� ��������� �������" << endl;
		}
		else {
			cout << "³������ ������" << endl;
		}
	}
};
