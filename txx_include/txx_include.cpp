// txx_include.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <cmath>
#include "TX/TXLib.h"
#include <iomanip>
using namespace std;
void drawBall(int xCenter, int yCenter, int R)
{
	txSetColor(TX_TRANSPARENT);
	txSetFillColor(TX_YELLOW);
	txCircle(xCenter, yCenter, R);
}
void clearBall(int xCenter, int yCenter, int R)
{
	txSetColor(TX_TRANSPARENT);
	txSetFillColor(TX_BLUE);
	txCircle(xCenter, yCenter, R);
}
int main()
{
	int R = 10;
	int xCenter = R, yCenter = 200;
	txCreateWindow(400, 400);
	txSetFillColor(TX_BLUE);
	txRectangle(0, 0, 400, 400);
	while (xCenter <= 400-R) {
		drawBall(xCenter, yCenter, R);
		txSleep(20);
		clearBall(xCenter, yCenter, R);
		xCenter += 5;
		if (GetAsyncKeyState(VK_ESCAPE)) {
			break;
		}
	}
}
// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
