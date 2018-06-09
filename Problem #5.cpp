#include <iostream>
using namespace std;
/*
	* Problem #5
	* 2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
	* What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
*/
bool isValid(int);
int main() {
	int n = 1;
	while (true) {
		if (isValid(n))
			break;
		n++;
	}
	cout << n;
}

bool isValid(int current) {
	for (int i = 1; i <= 20; i++) {
		if (current % i != 0)
			return false;
	}
	return true;
}