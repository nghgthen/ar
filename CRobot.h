#pragma once
#include "Ctron.h"
#include"CHcn.h"
class CRobot
{
private:
	bool stateFlag;
public:
	CTron head, f1, f2;
	CHcn body, hand;
	int x, y, d;
	CRobot(int mx, int my, int md);
	CRobot();
	void goLeft(int md);
	void toggleState();
	void Draw(CClientDC* pDC);
	void setState1(int mx, int my, int md);
	void setState2(int mx, int my, int md);
	void goRight(int d);
	void goUp(int md);
	void goDown(int md);
};