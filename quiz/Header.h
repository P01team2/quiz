#pragma once
#include <iostream>
using namespace std;
class Info {
	int choise = 0;
public:
	void print()
	{
		cout << "³�������" << endl;
		cout << "														"<< endl;
		cout << "��� ���: ��� ���, �� ������ � �������� �� ��������� � ����� ������� ����� " << endl;
		cout << "														"<<endl;
		cout << "		������� ���:		" << endl;
		cout << "														"<< endl;
		cout << "1. ������ ������� ���� � 4" << endl;
		cout << "2. ����� ������� �� ����� ���������, �-��� ���� �� ��������� ������� �� ��� ���� �����" << endl;
		cout << "3. � ���� �������� �������� �� ������� ���������� ������� � - ��� ����, �� ����������� ������� � - ��� ����" << endl;
		cout << "4. � ����� '�������' �� ������� ���������� �������� ���� �������� �� �-��� ���� �������� �� ��� " << endl;
		cout << "														" << endl;
		cout << "������ ��" << endl;
		cout << "1. ������ ����� �����"<<endl;
		cout << "2. �������"<<endl;
		cout << "3. ����� � ��������" << endl;
		cin >> choise;
		switch (choise) {
		case 1:
		case 2:
		case 3:
			cout << "�� ������ ����� � ��������"<<endl;
			cout << "��� ������� ������� ��������� enter ";
			break;
		default:
			cout << "�� ������ ������ ��"<<endl;
		cin >> choise;
		}
	}
};
