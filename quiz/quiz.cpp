#include <iostream>
#include "FieldOfKnowledge.h"
#include "read.h"
#include "Reader.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	FieldOfKnowledge fieldsOfKnowledge[10];
	Question questions[100];
	int fieldsCount;
	int questionsCount;
	fieldsCount = Reader::ReadFieldsOfKnowledge(fieldsOfKnowledge);
	cout << "\n";
	for (int i = 0; i < fieldsCount; i++)
	{
		fieldsOfKnowledge[i].print();
	}

	// ToDo: select FieldOfKnowledge
	int selectedNumber = 0;
	FieldOfKnowledge num;
	selectedNumber = num.input();
	string selectedField = fieldsOfKnowledge[selectedNumber].getName();

	questionsCount = Reader::ReadQuestions(questions, selectedField);

	for (int i = 0; i < questionsCount; i++)
	{
		//questions[i].print();
	}

	// ToDo: show random question
	// ToDo: show anwers randomized
	// ToDo: input answer number
	// ToDo: show correct or not
	
}


