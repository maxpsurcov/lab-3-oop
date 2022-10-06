#pragma once
#include <iostream>
/*
* У всіх завданнях, крім зазначених у завданні операцій, обов'язково
повинні бути реалізовані наступні методи:
• метод ініціалізації Init();
• метод введення із клавіатури Read();
• метод вивідення на екран Display();
• перетворення в рядок toString().
/* 17. Створити клас Bitstring для роботи з 64-бітовими рядками. Бітовий рядок
повинна бути представлено двома полями типу unsigned long. Повинні бути
реалізовані всі традиційні операції для роботи з бітами: and, or, xor, not.
Реалізувати зсув вліво shiftleft() і зсув вправо shiftright() на задану кількість
бітів.*/
#include <string>
using namespace std;
class Bitstring
{
public:
    Bitstring();      //���������� ���� ������ �� ���������
    class Error {};             //�������� �� ������
    int SizeOfBitstring();     //������ �������� ������
    void Read();                //���� � ����������
    void Display();             //����� �� �����
    char  toString();
    Bitstring(unsigned long *one, unsigned long two);
    Bitstring(unsigned long *one) {
    unit = one;
    count = 0;
    };
	string rShift(unsigned long n); 
	string lShift(unsigned long n);
private:
    unsigned long *unit;       //��� �������� ���� �����
    unsigned long count;   //��� �������� ������� �����
}
;