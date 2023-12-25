#include "pch.h"
#include "CTron.h"
#include "CHcn.h"
CTron::CTron()
{
    x = 0;
    y = 0;
    r = 0;
}
CTron::CTron(int mx, int my, int mr)
{
    x = mx;
    y = my;
    r = mr;
}
float CTron::chuvi()
{
    float cv = 0;
    cv = 3.14 * 2 * r;
    return cv;
}
float CTron::dientich()
{
    float dt = 0;
    dt = 3.14 * r * r;
    return dt;
}
CHcn CTron::xuathvnt()
{
    int x1, x2, y1, y2;
    x1 = x - r;
    y1 = y - r;
    x2 = x + r;
    y2 = y + r;

    CHcn hcn(x1, y1, x2, y2);
    return hcn;
}

void CTron::goDown(int d)
{
    y = y + d;
}

void CTron::goUp(int d)
{
    y = y - d;
}

void CTron::goLeft(int d)
{
    x = x - d;
}

void CTron::goRight(int d)
{
    x = x + d;
}

void CTron::draw(CClientDC* pDC)
{
    CHcn hcn1 = this->xuathvnt();
    pDC->Ellipse(hcn1.x1, hcn1.y1, hcn1.x2, hcn1.y2);
}
