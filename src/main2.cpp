#include <iostream>
#include <task2.h>
using namespace std;

int main()
{
	int n;
	bool res1;
	unsigned long long res2;
	unsigned long long res3;
	cout << "enter n\n";
	cin >> n;
	
	res1 = checkPrime(n);
	res2 = nPrime(n);
	res3 = nextPrime(n);
	boolalpha(cout);
	cout << res1 << "\n" << res2 << "\n" << res3<<"\n";
	
    return 0;
}