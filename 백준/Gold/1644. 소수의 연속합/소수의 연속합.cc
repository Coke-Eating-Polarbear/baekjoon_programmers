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
	int min;
	cin >> min;
	int total = 0;
	int count = 0;
	vector<long long> primes = isPrime(min);
	
	int left = 0, right = 0;

	while (right <= primes.size())
	{
		if (right >= primes.size() && total < min)
			break;
		if (total < min && right < primes.size())
		{
			total = total + primes[right];
			right++;
		}
		else if (total > min)
		{
			total = total - primes[left];
			left++;
		}
		else
		{
			count++;
			total = total - primes[left];
			left++;
		}
		
	}
	cout << count;
	return 0;
}