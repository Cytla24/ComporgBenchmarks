//============================================================================
// Name        : benchmarks.cpp
// Author      : Aimie Ojuba
// Description : Benchmarks
//============================================================================

#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

void add(int a, int b);
void intmult(int a, int b);
void intdiv(int a, int b);
void floatadd(float a, float b);
void floatmult(float a, float b);
void floatdiv(float a, float b);
void readarr(int a[]);
void writearr(int a[]);

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

void floatadd(float a = 3.32, float b = 6.9){
	long long i = 0;
	while (i < 100000000000){
			a+=b;
			i++;
		}
};

void floatmult(float a = 3.32, float b = 1.9){
	long long i = 0;
	while (i < 5000){
			a = a*b;
			i++;
		}
};

void floatdiv(float a = 3.32, float b = 6.9){
	long long i = 0;
	while (i < 20000000000){
			a/=b;
			i++;
		}
};

void readarr(int a[]){

};

void writarr(int a[]){

}

int main() {
	time_t aimie = time(NULL);
	floatmult();
	time_t newi = time(NULL);
	cout << newi - aimie<< endl;

	return 0;
}
