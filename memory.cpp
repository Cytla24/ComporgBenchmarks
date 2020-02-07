/*
 * memory.cpp
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

void writearr();

void writearr(){

	time_t aimie = time(NULL);

	long long i = 0;
	std::int32_t b = 2;
	int *a = new int[100000000];
	int count = 0;
	while (count<50){
		i = 0;
		while (i < 100000000){
			a[i] = b;
			i++;
		}
		count++;
	}
	time_t newi = time(NULL);
	cout <<"write: "<< newi - aimie<< endl;

	time_t aimie2 = time(NULL);

	i = 0;
	int f = 0;
	count = 0;
	while (count<50){
		i = 0;
		while (i < 100000000){
			f = a[i];
			i++;
		}
		count++;
	}

	time_t newi2 = time(NULL);
	cout <<"read: "<< newi2 - aimie2<< endl;
	delete [] a;
}

