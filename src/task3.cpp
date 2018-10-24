unsigned long long sumPrime(unsigned int hbound) {
	unsigned long long sum = 0;
	unsigned long long curr = 2;
	while (curr < hbound) {
		sum += curr;
		curr = nextPrime(curr);
	}
	return sum;
}