#include <iostream>
using namespace std;

int main()
{
	int bPosX, bPosY, dPosX, dPosY, gPosX, gPosY, dPos = 0, bPos = 0;
	cin >> bPosX >> bPosY >> dPosX >> dPosY >> gPosX >> gPosY;
	bPos = ((gPosX - bPosX > 0 ? gPosX - bPosX : (gPosX - bPosX) * -1) > (gPosY - bPosY > 0 ? gPosY - bPosY : (gPosY - bPosY) * -1) ? (gPosX - bPosX > 0 ? gPosX - bPosX : (gPosX - bPosX) * -1) : (gPosY - bPosY > 0 ? gPosY - bPosY : (gPosY - bPosY) * -1));
	dPos = ((gPosX - dPosX > 0 ? gPosX - dPosX : (gPosX - dPosX) * -1) + (gPosY - dPosY > 0 ? gPosY - dPosY : (gPosY - dPosY) * -1));
	cout << (bPos == dPos ? "tie" : bPos < dPos ? "bessie" : "daisy");

	return 0;
}