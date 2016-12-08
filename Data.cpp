#include <stdio.h>
#include <iostream>
#include <fstream>
#include "Data.h"
#include "config.h"

using namespace std;


int matrix1[3]{3, 4, 5};	//printing matrix testing purposes, this will be deleted later
FILE * (file);
double cpu = 5;
double memory = 20;
using namespace std;
//will call on classes from data.h to retrieve data


int main() {
	double weight1;
	double weight2;
	//for now we are only considering 2 weights, we will eventually want to calculate 3
	cout << "Type in first function priority (percentage value): ";
	cin >> weight1;
	cout << " %\n";
	cout << "Type in second function priority (percentage value): ";
	cin  >> weight2;
	cout << " %\n";


	//here the c++ file will start calling classes from Data.h
	//each call will perform the necessary function/data retrieval
	
	
	//in order according to Page 2 of notes
	
	//in order from first called. 
	//void host(int id, double cap, int mem, int vm_Risk, int net_Risk);
	//void virtM(int id, double vmCap, int mem, int dep_Risk);
	double cal_SR(double weight1, double weight2);
	//double cal_w(double unusedResources, double CPU, double cap);
	//void assign(int i, int j, int temp);
	//void update(double temp, double CPU, double new_cpu, double used_mem, double mem);
	void update_SR();
	//void update_W();
	//void update_M();
	
	//results are outputed to text file, this should be a separate function class.
	
	//must print the matrix and the SR, W and [(W1 * SR) + (W2 * W)] for each node

	/*ofstream myfile("output.txt");	//file creation 
	for (int i = 0; matrix1[i] != '\0'; i++)
	{
		myfile << matrix1[i];
		double calc_SR(double SR, double weight1, double weight2, double weight);
		double calc_W();
	}

	
	*/
	system("PAUSE");
	return 0;
}