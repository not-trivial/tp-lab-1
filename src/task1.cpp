#include <task1.h>

unsigned long gcd(unsigned int a, unsigned int b) { //finding great common divisor
	while (b) {
		a %= b;
		swap(a, b);
	}
	return a;
}

unsigned long lcm(unsigned int a, unsigned int b){  //finding less common multiplier
	unsigned long res;
	res = a * b / gcd(a, b);
	return res;
}

unsigned long findValue(unsigned int min, unsigned max) {
	unsigned long value;
	value = lcm(min, min + 1);
	for (unsigned int i = min+2; i < max; i++) {
		value = lcm(value, i);
	}
	return value;
}