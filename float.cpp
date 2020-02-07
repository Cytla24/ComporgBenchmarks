/*
 * float.cpp
 *
 *  Created on: Feb 6, 2020
 *      Author: ojuba
 */


#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdint>
#include <stdio.h>
#include <fstream>

using namespace std;

void floatadd(float a, float b);
void floatmult(float a, float b);
void floatdiv(float a, float b);

void floatadd(float a = 3.32, float b = 6.9){
	long long i = 0;
	while (i < 100000000000){
			a+=b;
			i++;
		}
};

void floatmult(float a = 3.32, float b = 1.9){
	long long i = 0;
	while (i < 50000000000){
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
