#pragma once
#include <iostream>
#include<string>
using namespace std;
class FieldOfKnowledge {
	int number;
	string name;
	string nameOfFile;

public:
	FieldOfKnowledge(int numberF, string nameF, const string nameOfFileF = "D:\\файл\\текст.txt")
	{
		number = numberF;
		name = nameF;
		nameOfFile = nameOfFileF;
	}
	FieldOfKnowledge() { number = 1; nameOfFile = "D:\\файл\\текст.txt"; }
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
	void input() {
		cout << "введите местоположение файла: ";
		cin >> nameOfFile;
		cout << "\n введите номер роздела знаний: ";
		cin >> number;

	}
	void print() {
		cout << number << "  " << name << "\n";
	}

};

