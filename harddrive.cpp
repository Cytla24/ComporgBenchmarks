/*
 * harddrive.cpp
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

void writeread();

void writeread(){
	time_t aimie = time(NULL);
	std::ofstream file;
	file.open ("inp.txt");
	const int x = 1;

	long long i = 0;

	while(i < 250000000){
		file.write((char*) &x, sizeof(int));
		i++;
	};
	file.close();

	time_t newi = time(NULL);
	cout << "write: "<< newi - aimie<< endl;

	time_t aimie2 = time(NULL);


	std::ifstream file2;
	file2.open("inp.txt");
	i = 0;

	while(i < 250000000){
		file2.read((char*) &x, sizeof(int));
		i++;
	};
	file2.close();
	time_t newi2 = time(NULL);
	cout << "read: " << newi2 - aimie2<< endl;

}
