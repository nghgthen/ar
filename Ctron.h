#pragma once
#include "CHcn.h"
class CTron
{
private:
    int x, y, r;
public:
    CTron();
    CTron(int mx, int my, int mr);
    float chuvi();
    float dientich();
    CHcn xuathvnt();
    void goDown(int d);
    void goUp(int d);
    void goLeft(int d);
    void goRight(int d);
    void Draw(CClientDC* pDC);
};
