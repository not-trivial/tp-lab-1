bool checkPrime(unsigned int value) {
	bool res=true;
	if (value == 1)
		return !res;
	for (int i = 2; i < value-1; i++) {
		if (value%i == 0)
			res = false;
	}
	return res;
}

unsigned long long nPrime(unsigned n) {
	unsigned long long res;
	res = 1;
	for (int i = 1; i <= n; i++) {
		res++;
		if (checkPrime(res) != true) {
			while (checkPrime(res) != true)
				res++;
		}
	}
	return res;
}

unsigned long long nextPrime(unsigned long long value) {
	unsigned long long res;
	res = value + 1;
	while (checkPrime(res) != true)
		res++;
	return res;
}