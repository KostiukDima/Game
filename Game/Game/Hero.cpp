#include "Hero.h"

void Dragon::Print(int x, int y)
{
	HWND hW = GetConsoleWindow();

	y += 15;
	int xBegin = x;
	int yBegin = y;
	int yEnd;

	for (int i = 19; i >= 0; i--)
	{
		switch (i)
		{
		case 0:

			yBegin = y + 14;
			yEnd = y + 26;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
			xBegin += 2;

			break;
		case 1:


			yBegin = y + 18;
			yEnd = y + 28;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
			xBegin += 2;

			break;
		case 2:

			yBegin = y + 20;
			yEnd = y + 30;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
			xBegin += 2;

			break;
		case 3:

			yBegin = y + 22;
			yEnd = y + 32;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
			xBegin += 2;

			break;
		case 4:

			yBegin = y + 22;
			yEnd = y + 34;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
			xBegin += 2;

			break;
		case 5:

			yBegin = y + 20;
			yEnd = y + 42;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
			xBegin += 2;

			break;

		case 6:

			yBegin = y + 18;
			yEnd = y + 38;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));

			yBegin = y + 41;
			yEnd = y + 42;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
			xBegin += 2;

			break;

		case 7:

			yBegin = y + 16;
			yEnd = y + 36;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
			xBegin += 2;

			break;

		case 8:

			yBegin = y + 16;
			yEnd = y + 34;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
			xBegin += 2;

			break;
		case 9:

			yBegin = y + 14;
			yEnd = y + 36;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
			xBegin += 2;

			break;

		case 10:

			yBegin = y + 2;
			yEnd = y + 42;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
			xBegin += 2;

			break;
		case 11:

			yBegin = y;
			yEnd = y + 32;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));

			yBegin = y + 40;
			yEnd = y + 42;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
			xBegin += 2;

			break;

		case 12:

			yBegin = y;
			yEnd = y + 1;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));

			yBegin = y + 4;
			yEnd = y + 30;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
			xBegin += 2;

			break;

		case 13:


			yBegin = y;
			yEnd = y + 14;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));

			yBegin = y + 18;
			yEnd = y + 20;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));

			yBegin = y;
			yEnd = y + 28;
			Line(hW, xBegin + 2, yBegin, xBegin + 2, yEnd, RGB(250, 250, 250));
			xBegin += 2;

		case 14:

			yBegin = y;
			yEnd = y + 14;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));

			yBegin = y + 18;
			yEnd = y + 20;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
			xBegin += 2;

			break;
		case 15:

			yBegin = y;
			yEnd = y + 9;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));

			yBegin = y + 12;
			yEnd = y + 14;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));

			yBegin = y + 18;
			yEnd = y + 22;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
			xBegin += 2;

			break;

		case 16:

			yBegin = y;
			yEnd = y + 9;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));

			yBegin = y + 12;
			yEnd = y + 14;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
			xBegin += 2;

			break;

		case 17:

			yBegin = y;
			yEnd = y + 9;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));

			yBegin = y + 12;
			yEnd = y + 14;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
			xBegin += 2;

			break;

		case 18:

			yBegin = y + 2;
			yEnd = y + 9;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));

			xBegin += 2;

			break;

		default:
			break;
		}

	}
}

void Hero::Print(int x, int y)
{
	HWND hW = GetConsoleWindow();

	int xBegin = x;
	int yBegin = y;
	int yEnd;

	for (int i = 0; i < 25; i++)
	{
		switch (i)
		{
		case 0:

			yBegin = y + 19;
			yEnd = y + 28;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			xBegin += 2;

			break;
		case 1:


			yBegin = y + 17;
			yEnd = y + 18;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 19;
			yEnd = y + 28;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 0, 0));
			yBegin = y + 29;
			yEnd = y + 30;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 41;
			yEnd = y + 46;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			xBegin += 2;

			break;
		case 2:

			yBegin = y + 19;
			yEnd = y + 20;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 21;
			yEnd = y + 30;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 0, 0));
			yBegin = y + 31;
			yEnd = y + 34;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 39;
			yEnd = y + 40;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 41;
			yEnd = y + 46;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 0, 0));
			yBegin = y + 47;
			yEnd = y + 48;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			xBegin += 2;

			break;
		case 3:

			yBegin = y + 21;
			yEnd = y + 22;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 23;
			yEnd = y + 34;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 0, 0));
			yBegin = y + 35;
			yEnd = y + 38;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 39;
			yEnd = y + 48;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 0, 0));
			yBegin = y + 49;
			yEnd = y + 50;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 53;
			yEnd = y + 54;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			xBegin += 2;

			break;
		case 4:

			yBegin = y + 23;
			yEnd = y + 24;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 25;
			yEnd = y + 50;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 0, 0));
			yBegin = y + 51;
			yEnd = y + 52;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 53;
			yEnd = y + 54;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 0, 0));
			yBegin = y + 55;
			yEnd = y + 56;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			xBegin += 2;

			break;
		case 5:

			yBegin = y + 25;
			yEnd = y + 26;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 27;
			yEnd = y + 54;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 0, 0));
			yBegin = y + 55;
			yEnd = y + 56;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			xBegin += 2;

			break;

		case 6:

			yBegin = y + 25;
			yEnd = y + 26;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 27;
			yEnd = y + 54;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 0, 0));
			yBegin = y + 55;
			yEnd = y + 56;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			xBegin += 2;

			break;

		case 7:

			yBegin = y + 27;
			yEnd = y + 28;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 29;
			yEnd = y + 38;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 0, 0));
			yBegin = y + 39;
			yEnd = y + 40;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 41;
			yEnd = y + 52;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 0, 0));
			yBegin = y + 53;
			yEnd = y + 54;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			xBegin += 2;

			break;

		case 8:

			yBegin = y + 27;
			yEnd = y + 28;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 29;
			yEnd = y + 36;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 0, 0));
			yBegin = y + 37;
			yEnd = y + 38;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 39;
			yEnd = y + 40;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 250));
			yBegin = y + 41;
			yEnd = y + 42;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 43;
			yEnd = y + 50;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 0, 0));
			yBegin = y + 51;
			yEnd = y + 52;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			xBegin += 2;

			break;
		case 9:

			yBegin = y + 29;
			yEnd = y + 30;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 31;
			yEnd = y + 34;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 0, 0));
			yBegin = y + 35;
			yEnd = y + 36;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 37;
			yEnd = y + 42;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 250));
			yBegin = y + 43;
			yEnd = y + 44;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 45;
			yEnd = y + 48;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 0, 0));
			yBegin = y + 49;
			yEnd = y + 50;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			xBegin += 2;

			break;
		case 10:

			yBegin = y + 9;
			yEnd = y + 26;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 29;
			yEnd = y + 30;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 31;
			yEnd = y + 32;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 0, 0));
			yBegin = y + 33;
			yEnd = y + 34;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 35;
			yEnd = y + 44;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 250));
			yBegin = y + 45;
			yEnd = y + 48;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 51;
			yEnd = y + 56;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			xBegin += 2;

			break;
		case 11:

			yBegin = y + 7;
			yEnd = y + 14;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 15;
			yEnd = y + 26;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 150));
			yBegin = y + 27;
			yEnd = y + 30;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 31;
			yEnd = y + 32;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 0, 0));
			yBegin = y + 33;
			yEnd = y + 34;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 35;
			yEnd = y + 38;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 250));
			yBegin = y + 39;
			yEnd = y + 40;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 41;
			yEnd = y + 42;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 250));
			yBegin = y + 43;
			yEnd = y + 46;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 150));
			yBegin = y + 47;
			yEnd = y + 50;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 51;
			yEnd = y + 56;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 0, 0));
			yBegin = y + 57;
			yEnd = y + 58;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 65;
			yEnd = y + 66;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			xBegin += 2;

			break;
		case 12:

			yBegin = y + 5;
			yEnd = y + 12;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 13;
			yEnd = y + 28;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 150));
			yBegin = y + 29;
			yEnd = y + 30;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 31;
			yEnd = y + 34;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 0, 0));
			yBegin = y + 35;
			yEnd = y + 40;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 250));
			yBegin = y + 41;
			yEnd = y + 42;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 43;
			yEnd = y + 46;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 150));
			yBegin = y + 47;
			yEnd = y + 48;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 49;
			yEnd = y + 56;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 0, 0));
			yBegin = y + 57;
			yEnd = y + 58;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 65;
			yEnd = y + 66;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			xBegin += 2;

			break;
		case 13:

			yBegin = y + 5;
			yEnd = y + 12;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 13;
			yEnd = y + 18;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 150));
			yBegin = y + 19;
			yEnd = y + 20;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 21;
			yEnd = y + 30;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 150));
			yBegin = y + 31;
			yEnd = y + 32;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 33;
			yEnd = y + 34;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 0, 0));
			yBegin = y + 35;
			yEnd = y + 42;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 250));
			yBegin = y + 43;
			yEnd = y + 46;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 47;
			yEnd = y + 50;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 250));
			yBegin = y + 51;
			yEnd = y + 56;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 0, 0));
			yBegin = y + 57;
			yEnd = y + 58;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 65;
			yEnd = y + 66;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			xBegin += 2;

			break;
		case 14:

			yBegin = y + 3;
			yEnd = y + 10;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 11;
			yEnd = y + 18;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 150));
			yBegin = y + 19;
			yEnd = y + 22;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 23;
			yEnd = y + 32;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 150));
			yBegin = y + 33;
			yEnd = y + 34;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 35;
			yEnd = y + 38;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 250));
			yBegin = y + 39;
			yEnd = y + 40;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 0, 0));
			yBegin = y + 41;
			yEnd = y + 52;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 250));
			yBegin = y + 53;
			yEnd = y + 56;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 65;
			yEnd = y + 66;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			xBegin += 2;

			break;
		case 15:

			yBegin = y + 3;
			yEnd = y + 10;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 11;
			yEnd = y + 12;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 150));
			yBegin = y + 13;
			yEnd = y + 14;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 15;
			yEnd = y + 18;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 150));
			yBegin = y + 19;
			yEnd = y + 20;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 21;
			yEnd = y + 32;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 150));
			yBegin = y + 33;
			yEnd = y + 34;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 35;
			yEnd = y + 36;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 250));
			yBegin = y + 37;
			yEnd = y + 38;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 0, 0));
			yBegin = y + 39;
			yEnd = y + 40;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 150));
			yBegin = y + 41;
			yEnd = y + 42;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 0, 0));
			yBegin = y + 43;
			yEnd = y + 48;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 250));
			yBegin = y + 49;
			yEnd = y + 52;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 65;
			yEnd = y + 66;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			xBegin += 2;

			break;
		case 16:

			yBegin = y + 3;
			yEnd = y + 14;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 15;
			yEnd = y + 28;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 150));
			yBegin = y + 29;
			yEnd = y + 30;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 31;
			yEnd = y + 32;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 150));
			yBegin = y + 33;
			yEnd = y + 34;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 35;
			yEnd = y + 36;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 250));
			yBegin = y + 37;
			yEnd = y + 44;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 0, 0));
			yBegin = y + 45;
			yEnd = y + 48;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 250));
			yBegin = y + 49;
			yEnd = y + 50;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 65;
			yEnd = y + 66;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			xBegin += 2;

			break;
		case 17:

			yBegin = y + 3;
			yEnd = y + 10;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 11;
			yEnd = y + 18;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 150));
			yBegin = y + 19;
			yEnd = y + 20;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 21;
			yEnd = y + 32;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 150));
			yBegin = y + 33;
			yEnd = y + 34;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 35;
			yEnd = y + 36;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 250));
			yBegin = y + 37;
			yEnd = y + 38;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 0, 0));
			yBegin = y + 39;
			yEnd = y + 40;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 150));
			yBegin = y + 41;
			yEnd = y + 42;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 0, 0));
			yBegin = y + 43;
			yEnd = y + 48;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 250));
			yBegin = y + 49;
			yEnd = y + 52;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 65;
			yEnd = y + 66;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			xBegin += 2;

			break;
		case 18:

			yBegin = y + 3;
			yEnd = y + 8;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 9;
			yEnd = y + 18;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 150));
			yBegin = y + 19;
			yEnd = y + 22;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 23;
			yEnd = y + 32;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 150));
			yBegin = y + 33;
			yEnd = y + 34;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 35;
			yEnd = y + 38;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 250));
			yBegin = y + 39;
			yEnd = y + 40;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 0, 0));
			yBegin = y + 41;
			yEnd = y + 52;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 250));
			yBegin = y + 53;
			yEnd = y + 56;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 65;
			yEnd = y + 66;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			xBegin += 2;

			break;
		case 19:

			yBegin = y + 5;
			yEnd = y + 8;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 9;
			yEnd = y + 18;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 150));
			yBegin = y + 19;
			yEnd = y + 20;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 21;
			yEnd = y + 30;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 150));
			yBegin = y + 31;
			yEnd = y + 32;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 33;
			yEnd = y + 34;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 0, 0));
			yBegin = y + 35;
			yEnd = y + 42;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 250));
			yBegin = y + 43;
			yEnd = y + 46;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 47;
			yEnd = y + 50;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 250));
			yBegin = y + 51;
			yEnd = y + 56;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 0, 0));
			yBegin = y + 57;
			yEnd = y + 58;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 65;
			yEnd = y + 66;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			xBegin += 2;

			break;
		case 20:

			yBegin = y + 5;
			yEnd = y + 10;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 11;
			yEnd = y + 28;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 150));
			yBegin = y + 29;
			yEnd = y + 30;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 31;
			yEnd = y + 34;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 0, 0));
			yBegin = y + 35;
			yEnd = y + 40;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 250));
			yBegin = y + 41;
			yEnd = y + 42;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 43;
			yEnd = y + 46;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 150));
			yBegin = y + 47;
			yEnd = y + 48;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 49;
			yEnd = y + 56;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 0, 0));
			yBegin = y + 57;
			yEnd = y + 58;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 65;
			yEnd = y + 66;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			xBegin += 2;

			break;
		case 21:

			yBegin = y + 7;
			yEnd = y + 12;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 13;
			yEnd = y + 26;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 150));
			yBegin = y + 27;
			yEnd = y + 30;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 31;
			yEnd = y + 32;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 0, 0));
			yBegin = y + 33;
			yEnd = y + 34;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 35;
			yEnd = y + 38;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 250));
			yBegin = y + 39;
			yEnd = y + 40;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 41;
			yEnd = y + 42;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 250));
			yBegin = y + 43;
			yEnd = y + 46;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 150));
			yBegin = y + 47;
			yEnd = y + 50;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 51;
			yEnd = y + 56;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 0, 0));
			yBegin = y + 57;
			yEnd = y + 58;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 65;
			yEnd = y + 66;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			xBegin += 2;

			break;
		case 22:

			yBegin = y + 9;
			yEnd = y + 26;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 31;
			yEnd = y + 34;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 35;
			yEnd = y + 44;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 250));
			yBegin = y + 45;
			yEnd = y + 46;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 51;
			yEnd = y + 56;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			xBegin += 2;

			break;
		case 23:

			yBegin = y + 35;
			yEnd = y + 36;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 37;
			yEnd = y + 42;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 250));
			yBegin = y + 43;
			yEnd = y + 44;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			xBegin += 2;

			break;
		case 24:

			yBegin = y + 37;
			yEnd = y + 38;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 39;
			yEnd = y + 40;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 250));
			yBegin = y + 41;
			yEnd = y + 42;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			xBegin += 2;

			break;
		case 25:

			yBegin = y + 38;
			yEnd = y + 39;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			xBegin += 2;

			break;
		default:
			break;
		}
	}
}

void Wolf::Print(int x, int y)
{
	HWND hW = GetConsoleWindow();

	int xBegin = x;
	int yBegin = y;
	int yEnd;

	for (int i = 0; i < 20; i++)
	{
		switch (i)
		{
		case 0:

			yBegin = y + 25;
			yEnd = y + 26;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(128, 128, 128));
			yBegin = y + 33;
			yEnd = y + 44;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(128, 128, 128));
			yBegin = y + 47;
			yEnd = y + 50;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(128, 128, 128));
			xBegin += 2;

			break;
		case 1:

			yBegin = y + 11;
			yEnd = y + 18;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(128, 128, 128));
			yBegin = y + 21;
			yEnd = y + 24;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(128, 128, 128));
			yBegin = y + 25;
			yEnd = y + 26;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(192, 192, 192));
			yBegin = y + 27;
			yEnd = y + 28;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(128, 128, 128));
			yBegin = y + 31;
			yEnd = y + 32;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(128, 128, 128));
			yBegin = y + 33;
			yEnd = y + 44;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(192, 192, 192));
			yBegin = y + 45;
			yEnd = y + 46;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(128, 128, 128));
			yBegin = y + 47;
			yEnd = y + 48;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
			yBegin = y + 49;
			yEnd = y + 50;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(128, 128, 128));
			xBegin += 2;

			break;
		case 2:

			yBegin = y + 9;
			yEnd = y + 10;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(128, 128, 128));
			yBegin = y + 11;
			yEnd = y + 18;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(192, 192, 192));
			yBegin = y + 19;
			yEnd = y + 20;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(128, 128, 128));
			yBegin = y + 21;
			yEnd = y + 28;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(192, 192, 192));
			yBegin = y + 29;
			yEnd = y + 30;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(128, 128, 128));
			yBegin = y + 31;
			yEnd = y + 32;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(192, 192, 192));
			yBegin = y + 33;
			yEnd = y + 36;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
			yBegin = y + 37;
			yEnd = y + 42;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(192, 192, 192));
			yBegin = y + 43;
			yEnd = y + 46;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
			yBegin = y + 47;
			yEnd = y + 50;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(128, 128, 128));
			xBegin += 2;

			break;
		case 3:

			yBegin = y + 7;
			yEnd = y + 8;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(128, 128, 128));
			yBegin = y + 9;
			yEnd = y + 10;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(192, 192, 192));
			yBegin = y + 11;
			yEnd = y + 18;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
			yBegin = y + 19;
			yEnd = y + 22;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(192, 192, 192));
			yBegin = y + 23;
			yEnd = y + 28;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
			yBegin = y + 29;
			yEnd = y + 30;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(192, 192, 192));
			yBegin = y + 31;
			yEnd = y + 32;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(128, 128, 128));
			yBegin = y + 33;
			yEnd = y + 38;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
			yBegin = y + 39;
			yEnd = y + 42;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(128, 128, 128));
			yBegin = y + 43;
			yEnd = y + 48;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
			yBegin = y + 49;
			yEnd = y + 50;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(128, 128, 128));
			xBegin += 2;

			break;
		case 4:

			yBegin = y + 9;
			yEnd = y + 10;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(128, 128, 128));
			yBegin = y + 11;
			yEnd = y + 14;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(192, 192, 192));
			yBegin = y + 15;
			yEnd = y + 16;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
			yBegin = y + 17;
			yEnd = y + 20;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(192, 192, 192));
			yBegin = y + 21;
			yEnd = y + 30;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
			yBegin = y + 31;
			yEnd = y + 32;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(192, 192, 192));
			yBegin = y + 33;
			yEnd = y + 42;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
			yBegin = y + 43;
			yEnd = y + 44;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(128, 128, 128));
			yBegin = y + 45;
			yEnd = y + 46;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
			yBegin = y + 47;
			yEnd = y + 48;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(128, 128, 128));

			xBegin += 2;

			break;
		case 5:

			yBegin = y + 9;
			yEnd = y + 10;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(128, 128, 128));
			yBegin = y + 11;
			yEnd = y + 18;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(192, 192, 192));
			yBegin = y + 19;
			yEnd = y + 22;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
			yBegin = y + 23;
			yEnd = y + 24;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 25;
			yEnd = y + 44;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
			yBegin = y + 45;
			yEnd = y + 46;
			xBegin += 2;

			break;

		case 6:

			yBegin = y + 11;
			yEnd = y + 12;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(128, 128, 128));
			yBegin = y + 13;
			yEnd = y + 20;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(192, 192, 192));
			yBegin = y + 21;
			yEnd = y + 26;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
			yBegin = y + 27;
			yEnd = y + 28;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 29;
			yEnd = y + 42;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
			yBegin = y + 43;
			yEnd = y + 44;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(128, 128, 128));
			yBegin = y + 45;
			yEnd = y + 46;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
			yBegin = y + 47;
			yEnd = y + 50;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(128, 128, 128));
			xBegin += 2;

			break;

		case 7:

			yBegin = y + 11;
			yEnd = y + 12;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(128, 128, 128));
			yBegin = y + 13;
			yEnd = y + 22;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(192, 192, 192));
			yBegin = y + 23;
			yEnd = y + 26;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
			yBegin = y + 27;
			yEnd = y + 30;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 31;
			yEnd = y + 38;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
			yBegin = y + 39;
			yEnd = y + 42;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(128, 128, 128));
			yBegin = y + 43;
			yEnd = y + 48;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
			yBegin = y + 49;
			yEnd = y + 50;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(128, 128, 128));
			xBegin += 2;

			break;

		case 8:

			yBegin = y + 11;
			yEnd = y + 12;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(128, 128, 128));
			yBegin = y + 13;
			yEnd = y + 20;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(192, 192, 192));
			yBegin = y + 21;
			yEnd = y + 26;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
			yBegin = y + 27;
			yEnd = y + 28;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 29;
			yEnd = y + 46;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
			yBegin = y + 47;
			yEnd = y + 50;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(128, 128, 128));
			xBegin += 2;

			break;
		case 9:

			yBegin = y + 9;
			yEnd = y + 10;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(128, 128, 128));
			yBegin = y + 11;
			yEnd = y + 18;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(192, 192, 192));
			yBegin = y + 19;
			yEnd = y + 22;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
			yBegin = y + 23;
			yEnd = y + 24;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 25;
			yEnd = y + 36;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
			yBegin = y + 37;
			yEnd = y + 42;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(192, 192, 192));
			yBegin = y + 43;
			yEnd = y + 48;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
			yBegin = y + 49;
			yEnd = y + 50;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(128, 128, 128));
			xBegin += 2;

			break;

		case 10:

			yBegin = y + 9;
			yEnd = y + 10;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(128, 128, 128));
			yBegin = y + 11;
			yEnd = y + 14;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(192, 192, 192));
			yBegin = y + 15;
			yEnd = y + 16;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
			yBegin = y + 17;
			yEnd = y + 20;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(192, 192, 192));
			yBegin = y + 21;
			yEnd = y + 30;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
			yBegin = y + 31;
			yEnd = y + 32;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(192, 192, 192));
			yBegin = y + 33;
			yEnd = y + 34;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
			yBegin = y + 35;
			yEnd = y + 44;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(192, 192, 192));
			yBegin = y + 45;
			yEnd = y + 46;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
			yBegin = y + 47;
			yEnd = y + 48;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(128, 128, 128));
			xBegin += 2;

			break;
		case 11:

			yBegin = y + 7;
			yEnd = y + 8;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(128, 128, 128));
			yBegin = y + 9;
			yEnd = y + 10;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(192, 192, 192));
			yBegin = y + 11;
			yEnd = y + 18;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
			yBegin = y + 19;
			yEnd = y + 22;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(192, 192, 192));
			yBegin = y + 23;
			yEnd = y + 28;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
			yBegin = y + 29;
			yEnd = y + 30;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(192, 192, 192));
			yBegin = y + 31;
			yEnd = y + 32;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(128, 128, 128));
			yBegin = y + 33;
			yEnd = y + 36;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(192, 192, 192));
			yBegin = y + 37;
			yEnd = y + 48;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(128, 128, 128));

			xBegin += 2;

			break;

		case 12:

			yBegin = y + 9;
			yEnd = y + 10;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(128, 128, 128));
			yBegin = y + 11;
			yEnd = y + 18;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(192, 192, 192));
			yBegin = y + 19;
			yEnd = y + 20;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(128, 128, 128));
			yBegin = y + 21;
			yEnd = y + 28;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(192, 192, 192));
			yBegin = y + 29;
			yEnd = y + 30;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(128, 128, 128));
			yBegin = y + 31;
			yEnd = y + 40;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(192, 192, 192));
			yBegin = y + 41;
			yEnd = y + 46;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
			yBegin = y + 47;
			yEnd = y + 48;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(128, 128, 128));
			xBegin += 2;

			break;

		case 13:

			yBegin = y + 11;
			yEnd = y + 18;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(128, 128, 128));
			yBegin = y + 21;
			yEnd = y + 24;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(128, 128, 128));
			yBegin = y + 25;
			yEnd = y + 26;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(192, 192, 192));
			yBegin = y + 27;
			yEnd = y + 28;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(128, 128, 128));
			yBegin = y + 31;
			yEnd = y + 32;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(128, 128, 128));
			yBegin = y + 33;
			yEnd = y + 42;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(192, 192, 192));
			yBegin = y + 43;
			yEnd = y + 44;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
			yBegin = y + 45;
			yEnd = y + 48;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(192, 192, 192));
			xBegin += 2;

		case 14:

			yBegin = y + 25;
			yEnd = y + 26;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(128, 128, 128));
			yBegin = y + 31;
			yEnd = y + 32;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(128, 128, 128));
			yBegin = y + 33;
			yEnd = y + 42;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(192, 192, 192));
			yBegin = y + 43;
			yEnd = y + 46;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
			yBegin = y + 47;
			yEnd = y + 48;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(128, 128, 128));
			xBegin += 2;

			break;
		case 15:

			yBegin = y + 29;
			yEnd = y + 30;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(128, 128, 128));
			yBegin = y + 31;
			yEnd = y + 32;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(192, 192, 192));
			yBegin = y + 33;
			yEnd = y + 34;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(128, 128, 128));
			yBegin = y + 35;
			yEnd = y + 42;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(192, 192, 192));
			yBegin = y + 43;
			yEnd = y + 46;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(128, 128, 128));
			xBegin += 2;

			break;

		case 16:

			yBegin = y + 27;
			yEnd = y + 28;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(128, 128, 128));
			yBegin = y + 29;
			yEnd = y + 34;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(192, 192, 192));
			yBegin = y + 35;
			yEnd = y + 42;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(128, 128, 128));

			xBegin += 2;

			break;

		case 17:

			yBegin = y + 21;
			yEnd = y + 26;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(128, 128, 128));
			yBegin = y + 27;
			yEnd = y + 32;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(192, 192, 192));
			yBegin = y + 33;
			yEnd = y + 34;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(128, 128, 128));

			xBegin += 2;

			break;

		case 18:

			yBegin = y + 23;
			yEnd = y + 24;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(128, 128, 128));
			yBegin = y + 25;
			yEnd = y + 28;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
			yBegin = y + 29;
			yEnd = y + 32;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(128, 128, 128));

			xBegin += 2;

			break;
		case 19:

			yBegin = y + 25;
			yEnd = y + 28;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(128, 128, 128));

			xBegin += 2;

			break;

		default:
			break;
		}

	}
}

void Tree::Print(int x, int y)
{
	HWND hW = GetConsoleWindow();

	int xBegin = x + 10;
	int yBegin = y;
	int yEnd;

	for (int i = 0; i < 25; i++)
	{
		switch (i)
		{
		case 0:

			yBegin = y + 41;
			yEnd = y + 44;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			xBegin += 2;

			break;
		case 1:


			yBegin = y + 39;
			yEnd = y + 40;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 41;
			yEnd = y + 44;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 250, 0));
			yBegin = y + 45;
			yEnd = y + 48;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			xBegin += 2;

			break;
		case 2:

			yBegin = y + 29;
			yEnd = y + 32;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 37;
			yEnd = y + 38;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 39;
			yEnd = y + 48;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 250, 0));
			yBegin = y + 49;
			yEnd = y + 50;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			xBegin += 2;

			break;
		case 3:

			yBegin = y + 27;
			yEnd = y + 28;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 29;
			yEnd = y + 32;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 250, 0));
			yBegin = y + 33;
			yEnd = y + 36;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 37;
			yEnd = y + 50;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 250, 0));
			yBegin = y + 51;
			yEnd = y + 52;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			xBegin += 2;

			break;
		case 4:

			yBegin = y + 17;
			yEnd = y + 20;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 25;
			yEnd = y + 26;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 27;
			yEnd = y + 32;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 250, 0));
			yBegin = y + 33;
			yEnd = y + 34;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 35;
			yEnd = y + 50;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 250, 0));
			yBegin = y + 51;
			yEnd = y + 52;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			xBegin += 2;

			break;
		case 5:

			yBegin = y + 15;
			yEnd = y + 16;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 17;
			yEnd = y + 20;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 250, 0));
			yBegin = y + 21;
			yEnd = y + 24;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 25;
			yEnd = y + 30;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 250, 0));
			yBegin = y + 31;
			yEnd = y + 32;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 33;
			yEnd = y + 38;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 250, 0));
			yBegin = y + 39;
			yEnd = y + 42;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 43;
			yEnd = y + 50;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 250, 0));
			yBegin = y + 51;
			yEnd = y + 52;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			xBegin += 2;

			break;

		case 6:

			yBegin = y + 13;
			yEnd = y + 14;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 15;
			yEnd = y + 20;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 250, 0));
			yBegin = y + 21;
			yEnd = y + 22;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 23;
			yEnd = y + 36;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 250, 0));
			yBegin = y + 37;
			yEnd = y + 38;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 39;
			yEnd = y + 40;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
			yBegin = y + 41;
			yEnd = y + 42;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 230, 250));
			yBegin = y + 43;
			yEnd = y + 44;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 45;
			yEnd = y + 50;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 250, 0));
			yBegin = y + 51;
			yEnd = y + 52;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			xBegin += 2;

			break;

		case 7:

			yBegin = y + 11;
			yEnd = y + 12;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 13;
			yEnd = y + 20;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 250, 0));
			yBegin = y + 21;
			yEnd = y + 22;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 23;
			yEnd = y + 24;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 250, 0));
			yBegin = y + 25;
			yEnd = y + 26;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
			yBegin = y + 27;
			yEnd = y + 28;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 0));
			yBegin = y + 29;
			yEnd = y + 36;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 250, 0));
			yBegin = y + 37;
			yEnd = y + 38;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 39;
			yEnd = y + 42;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 250, 250));
			yBegin = y + 43;
			yEnd = y + 44;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 45;
			yEnd = y + 50;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 250, 0));
			yBegin = y + 51;
			yEnd = y + 52;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			xBegin += 2;
			break;

		case 8:
			yBegin = y + 9;
			yEnd = y + 10;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 11;
			yEnd = y + 12;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
			yBegin = y + 13;
			yEnd = y + 14;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 128, 0));
			yBegin = y + 15;
			yEnd = y + 20;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 250, 0));
			yBegin = y + 21;
			yEnd = y + 22;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 23;
			yEnd = y + 24;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 250, 0));
			yBegin = y + 25;
			yEnd = y + 28;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
			yBegin = y + 29;
			yEnd = y + 38;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 250, 0));
			yBegin = y + 39;
			yEnd = y + 42;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 43;
			yEnd = y + 44;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 250, 0));
			yBegin = y + 45;
			yEnd = y + 46;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 47;
			yEnd = y + 50;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 250, 0));
			yBegin = y + 51;
			yEnd = y + 56;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			xBegin += 2;

			break;
		case 9:
			yBegin = y + 7;
			yEnd = y + 8;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 9;
			yEnd = y + 10;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 250, 0));
			yBegin = y + 11;
			yEnd = y + 14;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 128, 0));
			yBegin = y + 15;
			yEnd = y + 22;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 250, 0));
			yBegin = y + 23;
			yEnd = y + 24;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 25;
			yEnd = y + 46;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 250, 0));
			yBegin = y + 47;
			yEnd = y + 48;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 49;
			yEnd = y + 50;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 250, 0));
			yBegin = y + 51;
			yEnd = y + 52;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 53;
			yEnd = y + 56;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(150, 300, 0));
			yBegin = y + 57;
			yEnd = y + 58;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			xBegin += 2;

			break;

		case 10:
			yBegin = y + 5;
			yEnd = y + 6;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 0));
			yBegin = y + 7;
			yEnd = y + 22;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 250, 0));
			yBegin = y + 23;
			yEnd = y + 24;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 25;
			yEnd = y + 46;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 250, 0));
			yBegin = y + 47;
			yEnd = y + 48;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 49;
			yEnd = y + 50;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 250, 0));
			yBegin = y + 51;
			yEnd = y + 52;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 53;
			yEnd = y + 56;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(150, 300, 0));
			yBegin = y + 57;
			yEnd = y + 58;

			xBegin += 2;

			break;
		case 11:
			yBegin = y + 3;
			yEnd = y + 4;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 0));
			yBegin = y + 5;
			yEnd = y + 6;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
			yBegin = y + 7;
			yEnd = y + 8;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 0));
			yBegin = y + 9;
			yEnd = y + 24;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 250, 0));
			yBegin = y + 25;
			yEnd = y + 28;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 29;
			yEnd = y + 30;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 250, 0));
			yBegin = y + 31;
			yEnd = y + 32;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
			yBegin = y + 33;
			yEnd = y + 34;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 128, 0));
			yBegin = y + 35;
			yEnd = y + 42;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 250, 0));
			yBegin = y + 43;
			yEnd = y + 46;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 47;
			yEnd = y + 50;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 250, 0));
			yBegin = y + 51;
			yEnd = y + 52;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 53;
			yEnd = y + 56;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(150, 300, 0));
			yBegin = y + 57;
			yEnd = y + 58;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			xBegin += 2;

			break;

		case 12:
			yBegin = y + 5;
			yEnd = y + 6;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 0));
			yBegin = y + 7;
			yEnd = y + 14;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 250, 0));
			yBegin = y + 15;
			yEnd = y + 16;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
			yBegin = y + 17;
			yEnd = y + 18;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(255, 0, 0));
			yBegin = y + 19;
			yEnd = y + 28;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 250, 0));
			yBegin = y + 29;
			yEnd = y + 30;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 31;
			yEnd = y + 34;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 138, 0));
			yBegin = y + 35;
			yEnd = y + 46;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 250, 0));
			yBegin = y + 47;
			yEnd = y + 48;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 49;
			yEnd = y + 50;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 250, 0));
			yBegin = y + 51;
			yEnd = y + 52;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 53;
			yEnd = y + 56;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(150, 300, 0));
			yBegin = y + 57;
			yEnd = y + 58;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			xBegin += 2;

			break;

		case 13:

			yBegin = y + 7;
			yEnd = y + 8;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 9;
			yEnd = y + 14;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 250, 0));
			yBegin = y + 15;
			yEnd = y + 18;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(255, 0, 0));
			yBegin = y + 19;
			yEnd = y + 28;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 250, 0));
			yBegin = y + 29;
			yEnd = y + 30;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 31;
			yEnd = y + 46;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 250, 0));
			yBegin = y + 47;
			yEnd = y + 48;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 49;
			yEnd = y + 50;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 250, 0));
			yBegin = y + 51;
			yEnd = y + 52;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 53;
			yEnd = y + 56;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(150, 300, 0));
			yBegin = y + 57;
			yEnd = y + 58;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			xBegin += 2;

		case 14:

			yBegin = y + 9;
			yEnd = y + 10;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 11;
			yEnd = y + 22;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 250, 0));
			yBegin = y + 23;
			yEnd = y + 24;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(255, 250, 250));
			yBegin = y + 25;
			yEnd = y + 26;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 0));
			yBegin = y + 27;
			yEnd = y + 28;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 250, 0));
			yBegin = y + 29;
			yEnd = y + 30;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 31;
			yEnd = y + 38;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 250, 0));
			yBegin = y + 39;
			yEnd = y + 42;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 43;
			yEnd = y + 44;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 250, 0));
			yBegin = y + 45;
			yEnd = y + 46;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 47;
			yEnd = y + 50;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 250, 0));
			yBegin = y + 51;
			yEnd = y + 56;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			xBegin += 1;

			break;
		case 15:

			yBegin = y + 11;
			yEnd = y + 12;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 13;
			yEnd = y + 18;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 250, 0));
			yBegin = y + 19;
			yEnd = y + 20;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 21;
			yEnd = y + 22;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 250, 0));
			yBegin = y + 23;
			yEnd = y + 26;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 0));
			yBegin = y + 27;
			yEnd = y + 30;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 250, 0));
			yBegin = y + 31;
			yEnd = y + 32;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 33;
			yEnd = y + 36;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 250, 0));
			yBegin = y + 37;
			yEnd = y + 38;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 39;
			yEnd = y + 40;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
			yBegin = y + 41;
			yEnd = y + 42;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 250, 250));
			yBegin = y + 43;
			yEnd = y + 44;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 45;
			yEnd = y + 50;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 250, 0));
			yBegin = y + 51;
			yEnd = y + 52;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			xBegin += 2;

			break;

		case 16:

			yBegin = y + 13;
			yEnd = y + 14;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 15;
			yEnd = y + 20;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 250, 0));
			yBegin = y + 21;
			yEnd = y + 22;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 23;
			yEnd = y + 30;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 250, 0));
			yBegin = y + 31;
			yEnd = y + 32;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 33;
			yEnd = y + 36;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 250, 0));
			yBegin = y + 37;
			yEnd = y + 38;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 39;
			yEnd = y + 42;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 250, 250));
			yBegin = y + 43;
			yEnd = y + 44;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 45;
			yEnd = y + 48;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 250, 0));
			yBegin = y + 49;
			yEnd = y + 50;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 250, 0));
			xBegin += 2;

			break;

		case 17:

			yBegin = y + 15;
			yEnd = y + 16;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 17;
			yEnd = y + 20;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 250, 0));
			yBegin = y + 21;
			yEnd = y + 24;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 25;
			yEnd = y + 30;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 250, 0));
			yBegin = y + 31;
			yEnd = y + 32;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 33;
			yEnd = y + 34;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
			yBegin = y + 35;
			yEnd = y + 36;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 0, 0));
			yBegin = y + 37;
			yEnd = y + 38;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 250, 0));
			yBegin = y + 39;
			yEnd = y + 42;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 43;
			yEnd = y + 50;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 250, 0));
			yBegin = y + 51;
			yEnd = y + 52;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));

			xBegin += 2;

			break;

		case 18:

			yBegin = y + 17;
			yEnd = y + 20;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 25;
			yEnd = y + 26;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 27;
			yEnd = y + 30;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 250, 0));
			yBegin = y + 31;
			yEnd = y + 32;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 33;
			yEnd = y + 36;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 0, 0));
			yBegin = y + 37;
			yEnd = y + 50;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 250, 0));
			yBegin = y + 51;
			yEnd = y + 52;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));

			xBegin += 2;

			break;
		case 19:

			yBegin = y + 27;
			yEnd = y + 28;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 29;
			yEnd = y + 32;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 250, 0));
			yBegin = y + 33;
			yEnd = y + 36;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 37;
			yEnd = y + 50;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 250, 0));
			yBegin = y + 51;
			yEnd = y + 52;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			xBegin += 1;

			break;
		case 20:

			yBegin = y + 29;
			yEnd = y + 32;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 37;
			yEnd = y + 38;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 39;
			yEnd = y + 48;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 250, 0));
			yBegin = y + 49;
			yEnd = y + 50;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			xBegin += 2;

			break;
		case 21:

			yBegin = y + 38;
			yEnd = y + 39;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			yBegin = y + 40;
			yEnd = y + 43;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 250, 0));
			yBegin = y + 44;
			yEnd = y + 47;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			xBegin += 2;

			break;
		case 22:

			yBegin = y + 39;
			yEnd = y + 42;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 0, 0));
			xBegin += 2;

			break;
		default:
			break;
		}

	}
}

void Deer::Print(int x, int y)
{
	HWND hW = GetConsoleWindow();

	int xBegin = x;
	int yBegin = y;
	int yEnd;

	for (int i = 0; i < 22; i++)
	{
		switch (i)
		{
		case 0:

			yBegin = y + 65;
			yEnd = y + 72;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
			xBegin += 2;

			break;
		case 1:


			yBegin = y + 59;
			yEnd = y + 67;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
			yBegin = y + 71;
			yEnd = y + 72;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
			xBegin += 2;

			break;
		case 2:

			yBegin = y + 57;
			yEnd = y + 62;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
			xBegin += 2;

			break;
		case 3:

			yBegin = y + 37;
			yEnd = y + 44;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
			yBegin = y + 55;
			yEnd = y + 60;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
			yBegin = y + 63;
			yEnd = y + 72;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
			xBegin += 2;

			break;
		case 4:
			yBegin = y + 41;
			yEnd = y + 58;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
			yBegin = y + 61;
			yEnd = y + 62;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
			yBegin = y + 71;
			yEnd = y + 72;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
			xBegin += 2;

			break;
		case 5:
			yBegin = y + 9;
			yEnd = y + 14;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
			yBegin = y + 43;
			yEnd = y + 56;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
			yBegin = y + 59;
			yEnd = y + 60;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
			xBegin += 2;

			break;

		case 6:
			yBegin = y + 15;
			yEnd = y + 16;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
			yBegin = y + 41;
			yEnd = y + 54;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
			yBegin = y + 57;
			yEnd = y + 58;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
			xBegin += 2;

			break;

		case 7:

			yBegin = y + 17;
			yEnd = y + 18;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
			yBegin = y + 39;
			yEnd = y + 52;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
			xBegin += 2;

			break;

		case 8:
			yBegin = y + 3;
			yEnd = y + 6;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
			yBegin = y + 19;
			yEnd = y + 20;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
			yBegin = y + 39;
			yEnd = y + 46;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
			yBegin = y + 49;
			yEnd = y + 50;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
			xBegin += 2;

			break;
		case 9:
			yBegin = y + 7;
			yEnd = y + 12;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
			yBegin = y + 19;
			yEnd = y + 20;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
			yBegin = y + 39;
			yEnd = y + 48;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
			xBegin += 2;

			break;

		case 10:

			yBegin = y + 3;
			yEnd = y + 6;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
			yBegin = y + 13;
			yEnd = y + 14;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
			yBegin = y + 19;
			yEnd = y + 20;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
			yBegin = y + 37;
			yEnd = y + 50;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
			xBegin += 2;

			break;
		case 11:

			yBegin = y + 15;
			yEnd = y + 16;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
			yBegin = y + 19;
			yEnd = y + 20;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
			yBegin = y + 37;
			yEnd = y + 50;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
			xBegin += 2;

			break;

		case 12:

			yBegin = y + 15;
			yEnd = y + 16;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
			yBegin = y + 19;
			yEnd = y + 20;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
			yBegin = y + 23;
			yEnd = y + 24;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
			yBegin = y + 35;
			yEnd = y + 48;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
			xBegin += 2;

			break;

		case 13:
			yBegin = y + 15;
			yEnd = y + 16;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
			yBegin = y + 19;
			yEnd = y + 44;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
			yBegin = y + 47;
			yEnd = y + 48;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
			xBegin += 2;

		case 14:

			yBegin = y + 5;
			yEnd = y + 8;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
			yBegin = y + 17;
			yEnd = y + 46;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
			xBegin += 2;

			break;
		case 15:

			yBegin = y + 9;
			yEnd = y + 14;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));

			yBegin = y + 17;
			yEnd = y + 20;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));

			yBegin = y + 23;
			yEnd = y + 48;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
			xBegin += 2;

			break;

		case 16:

			yBegin = y + 7;
			yEnd = y + 8;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));

			yBegin = y + 15;
			yEnd = y + 16;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
			yBegin = y + 19;
			yEnd = y + 26;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
			yBegin = y + 29;
			yEnd = y + 48;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
			xBegin += 2;

			break;

		case 17:

			yBegin = y + 15;
			yEnd = y + 16;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
			yBegin = y + 21;
			yEnd = y + 26;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
			yBegin = y + 33;
			yEnd = y + 48;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
			xBegin += 2;

			break;

		case 18:
			yBegin = y + 21;
			yEnd = y + 26;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
			yBegin = y + 35;
			yEnd = y + 42;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
			yBegin = y + 47;
			yEnd = y + 48;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
			yBegin = y + 55;
			yEnd = y + 56;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));

			xBegin += 2;

			break;
		case 19:
			yBegin = y + 23;
			yEnd = y + 24;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
			yBegin = y + 47;
			yEnd = y + 48;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
			yBegin = y + 50;
			yEnd = y + 53;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
			xBegin += 2;

			break;
		case 20:
			yBegin = y + 47;
			yEnd = y + 50;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
			yBegin = y + 59;
			yEnd = y + 60;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
			xBegin += 2;

			break;
		case 21:
			yBegin = y + 49;
			yEnd = y + 58;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 250, 250));
			xBegin += 2;

			break;

		default:
			break;
		}

	}
}

void Bush::Print(int x, int y)
{
	HWND hW = GetConsoleWindow();

	int xBegin = x + 15;
	int yBegin = y;
	int yEnd;

	for (int i = 0; i < 25; i++)
	{
		switch (i)
		{
		case 0:

			yBegin = y + 14;
			yEnd = y + 22;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 250, 0));
			xBegin += 2;

			break;
		case 1:

			yBegin = y + 12;
			yEnd = y + 24;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 250, 0));
			xBegin += 2;

			break;

		case 2:

			yBegin = y + 12;
			yEnd = y + 14;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 250, 0));


			yBegin = y + 14;
			yEnd = y + 16;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 0, 0));

			yBegin = y + 16;
			yEnd = y + 24;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 250, 0));
			xBegin += 2;

			break;

		case 3:

			yBegin = y + 12;
			yEnd = y + 24;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 250, 0));

			yBegin = y + 17;
			yEnd = y + 18;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 0, 0));


			xBegin += 2;

			break;
		case 4:

			yBegin = y + 10;
			yEnd = y + 26;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 250, 0));

			xBegin += 2;

			break;

		case 5:

			yBegin = y + 10;
			yEnd = y + 26;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 250, 0));

			yBegin = y + 14;
			yEnd = y + 15;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 0, 0));

			yBegin = y + 20;
			yEnd = y + 21;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 0, 0));



			xBegin += 2;

			break;

		case 6:

			yBegin = y + 10;
			yEnd = y + 26;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 250, 0));

			yBegin = y + 17;
			yEnd = y + 18;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 0, 0));



			xBegin += 2;

			break;

		case 7:

			yBegin = y + 8;
			yEnd = y + 28;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 250, 0));

			yBegin = y + 28;
			yEnd = y + 31;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(139, 69, 19));

			xBegin += 2;

			break;

		case 8:

			yBegin = y + 8;
			yEnd = y + 28;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 250, 0));

			yBegin = y + 12;
			yEnd = y + 13;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 0, 0));

			yBegin = y + 20;
			yEnd = y + 21;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 0, 0));

			yBegin = y + 28;
			yEnd = y + 31;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(139, 69, 19));


			xBegin += 2;

			break;

		case 9:

			yBegin = y + 8;
			yEnd = y + 28;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 250, 0));

			yBegin = y + 15;
			yEnd = y + 16;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 0, 0));

			yBegin = y + 28;
			yEnd = y + 31;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(139, 69, 19));


			xBegin += 2;

			break;
		case 10:

			yBegin = y + 10;
			yEnd = y + 26;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 250, 0));

			yBegin = y + 17;
			yEnd = y + 18;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 0, 0));



			xBegin += 2;

			break;

		case 11:

			yBegin = y + 10;
			yEnd = y + 26;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 250, 0));

			yBegin = y + 14;
			yEnd = y + 15;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 0, 0));

			yBegin = y + 20;
			yEnd = y + 21;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 0, 0));



			xBegin += 2;

			break;


		case 12:

			yBegin = y + 10;
			yEnd = y + 26;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 250, 0));

			xBegin += 2;

			break;


		case 13:

			yBegin = y + 12;
			yEnd = y + 24;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 250, 0));

			yBegin = y + 17;
			yEnd = y + 18;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 0, 0));


			xBegin += 2;

			break;


		case 14:

			yBegin = y + 12;
			yEnd = y + 14;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 250, 0));


			yBegin = y + 14;
			yEnd = y + 16;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(250, 0, 0));

			yBegin = y + 16;
			yEnd = y + 24;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 250, 0));
			xBegin += 2;

			break;

		case 15:

			yBegin = y + 12;
			yEnd = y + 24;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 250, 0));
			xBegin += 2;

			break;

		case 16:

			yBegin = y + 14;
			yEnd = y + 22;
			Line(hW, xBegin, yBegin, xBegin, yEnd, RGB(0, 250, 0));
			xBegin += 2;

			break;


		default:
			break;
		}
	}
}
