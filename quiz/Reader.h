#pragma once
#include <iostream>
#include "FieldOfKnowledge.h"
#include "question.h"
	using namespace std;
static class Reader
{
public:
	static int ReadFieldsOfKnowledge(FieldOfKnowledge array[]) {

		FILE* in;
		const  char* path = "D:\\פאיכ\\עוךסע.txt";
		char format[100];
		int number;
		int count = 0;
		

		if (fopen_s(&in, path, "r") == 0) {
			while (!feof(in)) {
				fscanf_s(in, "%d", &number);
				fscanf_s(in, "%s", &format, 100);
				string str = format;
				FieldOfKnowledge object(number, str);
				array[count] = object;
				count++;
			}
			fclose(in);
		}
		else {
			cout << "error";
		}
		return count;
	}

	static int ReadQuestions(Question array[]) {

		FILE* in;
		const  char* path = "D:\\פאיכ\\films.txt";
		char format[100];
		char ch;
		int count = 0;
		int rightAnswer;


		if (fopen_s(&in, path, "r") == 0) {
			while (!feof(in)) {
				Question object;
				fscanf_s(in, "%c", &ch);
				fscanf_s(in, "%s", &format, 100);
				string str = format;
				object.question = str;
				fscanf_s(in, "%c", &ch);
				fscanf_s(in, "%s", &format, 100);
				string str = format;
				if(ch == '!') {
					rightAnswer = 0;
				}
				object.answers[0] = str;
				fscanf_s(in, "%c", &ch);
				fscanf_s(in, "%s", &format, 100);
				string str = format;
				if (ch == '!') {
					rightAnswer = 1;
				}
				object.answers[1] = str;
				fscanf_s(in, "%c", &ch);
				fscanf_s(in, "%s", &format, 100);
				string str = format;
				if (ch == '!') {
					rightAnswer = 2;
				}
				object.answers[2] = str;
				fscanf_s(in, "%c", &ch);
				fscanf_s(in, "%s", &format, 100);
				string str = format;
				if (ch == '!') {
					rightAnswer = 3;
				}
				object.answers[3] = str;
				object.RightAnswers = rightAnswer;
				array[count] = object;
				count++;
			}
			fclose(in);
		}
		else {
			cout << "error";
		}
		return count;
	}
};

