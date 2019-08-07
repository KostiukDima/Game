#include "Line.h"

void Line(HWND hW, int x0, int y0, int x1, int y1, COLORREF color)
{
	HDC hDC = GetDC(hW);
	HPEN hPen = CreatePen(PS_SOLID, 2, color);
	HPEN hOldPen = (HPEN)SelectObject(hDC, hPen);

	POINT p = { 0, 0 };
	GetCurrentPositionEx(hDC, &p);
	MoveToEx(hDC, x0, y0, &p);
	LineTo(hDC, x1, y1);

	SelectObject(hDC, hOldPen);
	DeleteObject(hPen);
	ReleaseDC(hW, hDC);
}