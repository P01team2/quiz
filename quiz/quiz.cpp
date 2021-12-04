#include <iostream>
#include <Windows.h>
#include "Header.h"
#include "Header1.h"
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	FILE* in;
	const  char* path = "D:\\файл\\текст.txt";
	char format[100];
	int number;
	
	
	if (fopen_s(&in, path, "r") == 0) {
		while (!feof(in)) {
			fscanf_s(in, "%d", &number);
			fscanf_s(in, "%s", format, 100);
	cout << number;
	cout <<" " << format << "\n";
		}
	fclose(in);
	}
	else {
		cout << "error";
	}
    SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
/*	Info StartMessage;
	StartMessage.print();
*/
	Question q;
	q.Print();
	q.TrueA();
}
