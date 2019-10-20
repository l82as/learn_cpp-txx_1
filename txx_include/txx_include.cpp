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
