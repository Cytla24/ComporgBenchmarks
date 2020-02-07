//============================================================================
// Name        : benchmarks.cpp
// Author      : Aimie Ojuba
// Description : Benchmarks
//============================================================================

#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdint>
#include <stdio.h>
#include <fstream>

using namespace std;

void add(int a, int b);
void intmult(int a, int b);
void intdiv(int a, int b);


void add(int a = 3, int b = 4){
	long long i = 0;
	while (i < 100000000000){
		a+=b;
		i++;
	}
}

void intmult(int a=4, int b=5){
	long long i = 0;
	while (i < 50000000000){
			a*=b;
			i++;
		}
};

void intdiv(int a=4, int b=5){
	long long i = 0;
	while (i < 20000000000){
			a/=b;
			i++;
		}
};


int main() {
	time_t aimie = time(NULL);
	intmult();
	time_t newi = time(NULL);
	cout << newi - aimie<< endl;

	return 0;
}
