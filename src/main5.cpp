#include <iostream>
#include "task5.h"
using namespace std;

int main()
{
	char tmp[] = "123,456,789";
	char *buf = tmp;
	int N = 0;
	char **result = nullptr;
	split(&result, &N, buf, ',');
	cout << result[0] <<endl;
	cout << result[1] <<endl;
	cout << result[2] <<endl;
	_getch();
    return 0;
}