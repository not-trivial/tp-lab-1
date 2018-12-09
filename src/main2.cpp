#include <iostream>
#include <cmath>
#include "task2.h"
using namespace std;

int main()
{
	int n = 17;
	bool res1;
	unsigned long long res2;
	unsigned long long res3;
	
	res1 = checkPrime(n);
	res2 = nPrime(n);
	res3 = nextPrime(n);
	
	cout << res1 << " " << res2 << " " << res3 << " " << endl;
	
    return 0;
}