#include <iostream>
#include <cstring>
#include "task4.h"
using namespace std;

int main()
{
	char strx[10] = "123456789";
	char stry[10] = "000000001";
	char *x = strx;
	char *y = stry;

	char *z = sum(x, y);
	cout << z;
	delete z;
	return 0;
}