#include <iostream>
#include "FieldOfKnowledge.h"
#include "read.h"
#include "Reader.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	FieldOfKnowledge fieldsOfKnowledge[10];
	int count;
	count = Reader::ReadFieldsOfKnowledge(fieldsOfKnowledge);
	cout << "\n";
	for (int i = 0; i < count; i++) {
	fieldsOfKnowledge[i].print();
	
	}
	
	
	
	
}


