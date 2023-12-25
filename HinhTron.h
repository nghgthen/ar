#pragma once
class HinhTron
{
private: 
	int x1, y1, x2, y2;
public:
	HinhTron();
	HinhTron(int mx1, int my2, int mx2, int my2)	;
	void SetHinhTron(int mx1, int my2, int mx2, int my2);
	void VeHinh(CClientDC* pdc);

	void VeHinhDiChuyen(CClientDC* pdc);
	void VeHinhTrang(CClientDC* pdc);
};

