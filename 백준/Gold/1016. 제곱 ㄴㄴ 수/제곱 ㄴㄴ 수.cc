#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<stdio.h>
#include <vector>
#include <stack>
#include <string>
#include <unordered_set>
#include <algorithm>
#include <math.h>
using namespace std;

vector<long long> isPrime(long long num) {
	vector<bool> is_prime(num + 1, true);
	vector<long long> primes;
	is_prime[0] = is_prime[1] = false;

	for (long long i = 2; i <= num; i++) {
		if (is_prime[i]) {
			primes.push_back(i);
			for (long long j = i * i; j <= num; j += i) {
				is_prime[j] = false;
			}
		}
	}
	return primes;
}

int main()
{
	unsigned long long int min, max, count = 0;
	cin >> min >> max;
	vector<bool> temp(max - min + 1, 1);
	vector<long long> primes = isPrime(sqrt(max));
	for (long long i : primes)
	{
		long long sqr = i * i;
		long long start = (min + sqr - 1) / sqr * sqr;
		for (unsigned long long j = start; j <= max; j += sqr)
			temp[j - min] = false;
	}
	for (int i = 0; i < temp.size(); i++)
		if (temp[i])
			count++;
	cout << count;

	return 0;
}