#include <iostream>
using namespace std;
/*
	* Problem #1
	* If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
	* Find the sum of all the multiples of 3 or 5 below 1000.
*/
int main() {
	int start = 1, sum = 0;
	for (start; start < 1000; start++)
		if (start % 3 == 0 || start % 5 == 0)
			sum += start;
	cout << sum;
}