#include "pch.h"
#include "CRobot.h"

CRobot::CRobot(int mx, int my, int md)
{
	x = mx;
	y = my;
	d = md;
	stateFlag = true;

	this->setStatel2(mx, my, md);
}

CRobot::CRobot()
{
}

void CRobot::setStatel1(int mx, int my, int md)
{
	head = CTron(mx + 2 * md, my + 1.5 * md, 1.5 * md);
	body = CHcn(mx, my + 3 * md, mx + 4 * md, my + 7 * md);
	hand = CHcn(body.x1 + 3 * md, body.y1 + 1.0 * md, body.x1 + 5 * md, body.y1 + 2.0 * md);
	f1 = CTron(body.x1 + 0.5 * md, body.y2 + 0.5 * md, 0.5 * md);
	f2 = CTron(body.x2 - 0.5 * md, body.y2 + 0.5 * md, 0.5 * md);
}
void CRobot::setStatel2(int mx, int my, int md)
{
	head = CTron(mx + 2 * md, my + 1.5 * md, 1.5 * md);
	body = CHcn(mx, my + 3 * md, mx + 4 * md, my + 7 * md);
	hand = CHcn(body.x1 + 3 * md, body.y1 + 1.0 * md, body.x2, body.y1 + 3.0 * md);
	f1 = CTron(body.x1 + 0.5 * md, body.y2 + 0.5 * md, 0.5 * md);
	f2 = CTron(body.x2 - 0.5 * md, body.y2 + 0.5 * md, 0.5 * md);
}
void CRobot::goRight(int md)
{
	x = x + md;
	toggleState();
}
void CRobot::goLeft(int md)
{
	x = x - md;
	toggleState();
}
void CRobot::goUP(int md)
{
	y = y - md;
	toggleState();
}
void CRobot::goDown(int md)
{
	y = y + md;
	toggleState();
}
/*void CRobot::goRight(int md)
{
	x = x + md;
	setStatel1(x, y, d);
}
void CRobot::goLeft(int md)
{
	x = x - md;
	setStatel1(x, y, d);
}
void CRobot::goUP(int md)
{
	y = y - md;
	setStatel1(x, y, d);
}
void CRobot::goDown(int md)
{
	y = y + md;
	setStatel1(x, y, d);
}*/

void CRobot::toggleState()
{
	if (stateFlag)
		setStatel1(x, y, d);

	else
		setStatel2(x, y, d);
	stateFlag = !stateFlag; // Flip the state flag
}
void CRobot::draw(CClientDC* pdc)
{
	head.draw(pdc);
	body.draw(pdc);
	hand.draw(pdc);
	f1.draw(pdc);
	f2.draw(pdc);
}