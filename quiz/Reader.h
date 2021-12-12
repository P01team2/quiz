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

	static int ReadQuestions(Question array[], string questionsFileName) 
	{
		FILE* in;
		//const  char* path = "D:\\פאיכ\\films.txt";
		string path = ".\\Data\\" + questionsFileName+ ".txt"; // + questionsFileName + ".txt"
		int rightAnswer = 0;
	
		
		char* pathF = new char[path.length() + 1];
		path.copy(pathF, path.size() + 1);
		pathF[path.size()] = '\0';
		char format[100];
		char ch;
		int count = 0;

		if (fopen_s(&in, pathF, "r") == 0) {
			while (!feof(in)) {
				Question object;
				fscanf_s(in, "%c", &ch);
				fscanf_s(in, "%s", &format, 100);
				string str = format;
				object.question = str;

				for (int i = 0; i < 4; i++)
				{
					fscanf_s(in, "%c", &ch);
					fscanf_s(in, "%s", &format, 100);
					string str = format;
					if (ch == '!') {
						rightAnswer = i;
					}
					object.answers[i] = str;
				}

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

