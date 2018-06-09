#include <iostream>
using namespace std;
/*
	* Problem #6
	* https://projecteuler.net/problem=6
*/
int getSumSquares();
int getSquareSums();
int main() {
	cout <<  getSquareSums() - getSumSquares();
}

int getSumSquares() {
	int sum = 0;
	for (int i = 1; i <= 100; i++)
		sum += pow(i, 2);
	return sum;
}

int getSquareSums() {
	int sum = 0;
	for (int i = 1; i <= 100; i++)
		sum += i;
	return pow(sum, 2);
}