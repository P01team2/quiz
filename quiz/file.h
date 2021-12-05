#include <iostream>
using namespace std;
void output() {
	FILE* in;
	const  char* path = "D:\\файл\\текст.txt";
	char format[100];
	int number;


	if (fopen_s(&in, path, "r") == 0) {
		while (!feof(in)) {
			fscanf_s(in, "%d", &number);
			fscanf_s(in, "%s", format, 100);
			cout << number;
			cout << " " << format << "\n";
		}
		fclose(in);
	}
	else {
		cout << "error";
	}
}