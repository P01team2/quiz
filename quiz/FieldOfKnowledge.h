#pragma once
#include <iostream>
#include<string>
using namespace std;
class FieldOfKnowledge {
	int number;
	string name;
	string nameOfFile;

public:
	FieldOfKnowledge(int numberF, string nameF, const string nameOfFileF = ".\\Data\\oblast.txt")
	{
		number = numberF;
		name = nameF;
		nameOfFile = nameOfFileF;
	}
	FieldOfKnowledge() { number = 1; nameOfFile = ".\\Data\\oblast.txt"; }
	FieldOfKnowledge(const FieldOfKnowledge& obj) { number = obj.number; name = obj.name; nameOfFile = obj.nameOfFile; }
	void setChoise(int valuenumber) {
		number = valuenumber;
	}
	void setName(string valueName) {
		name = valueName;
	}
	int getChoise() {
		return number;
	}
	string getName() {
		return name;
	}
	int input() {
		cout << "\n ??????? ????? ??????? ??????: ";
		cin >> number;
		return number;
	}
	void print() {
		cout << number << "  " << name << "\n";
	}

};

