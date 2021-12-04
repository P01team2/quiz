#include <iostream>
#include <Windows.h>
#include "Header.h"
#include "Header1.h"
using namespace std;
int main()
{
    SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
/*	Info StartMessage;
	StartMessage.print();
*/
	Question q;
	q.Print();
	q.TrueA();
}
