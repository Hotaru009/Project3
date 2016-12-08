#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "config.h"
#include <iostream>
#include <vector>			//includes vector library

//extern const int id[4];


int volume;
int node;
double micro;
double small;
double medium;
double large;
double xlarge;
double VM_name[] = {micro, small, medium, large, xlarge};
int i;
int j;
int k;
int id[] = { i, j, k };
int VM[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20 };		//number of virtual machines 
int h[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };	//number of hosts
// needs to be moved int P = { int vm };
//int matrix[5][5];
int vm = rand() % 3 + 1;		//want to test 3 virtual machines for easy calculation (see page 1 of notes for reference)
//int P = id;					//lists of vmwares in the host. might not have to include P since ID is already an array
vector<int> HOST(id[3], volume);
vector<int> VMS (vm, volume); //vector for all VM's. Must contian a random virtual machine and their FINAL (?) volume 

//void function1(double x, double y, double weight1, double per1) {};

//void function2(double x, double y, double weight2, double per2) {};
	//void function3(double x, double y, double weight3, double per3) {};		//for now not inclluding third function (9/7/2016)
	void host(int id, double cap, int mem, int vm_Risk, int net_Risk) {
		vector<int> HOST;
	};//must include HOST vector
	void virtM(int id, double vmCap, double mem, int dep_Risk) {
		vector<int> VMS(vm, volume);
	};		
	void VNAME(double micro, double small, double medium, double large, double xlarge)
	{
		vector<double> MIC;
		vector<double> SML;
		vector<double> MED;
		vector<double> LRG;
		vector<double> XLRG;

		MIC.assign(1, 1);
		SML.assign(1, 2);
		MED.assign(1, 3.75);
		LRG.assign(2, 7.5);
		XLRG.assign(4, 15);

	};

	void TYPE(int node)
	{
		int type1;
		int type2;
	}


	double cal_SR(double weight1, double weight2) {
		double weight;
		double SR = 0;
		weight = weight1 + weight2;
		double calculate_SR = SR + weight;	
		return calculate_SR; 

		cout << calculate_SR << "\n";
	
	};
	double cal_W(double unusedResources, double CPU, double cap) 
	{
		CPU = 1.5;
		cap = 1;			//in TB
		double wastedResources = CPU - unusedResources;	
		return wastedResources;//calculates wasted resources
	};			//calculate Weight
	void assign(int i, int j, int temp) {
		//assigning i to a temporary value in order to assign it to j
		i = temp;
		i = j;
		j = temp;

	};			//assign i to j
	void update(double temp, double CPU, double new_cpu, double used_mem, double mem) {
		CPU = temp;
		temp = new_cpu;
		new_cpu = temp;
		double new_mem = mem - used_mem;		//must find out what used memory is. 

	
	};			//update J's capacity <cpu and memory>
	//void update_SR() {/*must be filled in*/ };		//now that we have found SR through cal_SR, we assign it 
	//void update_W() {
	//}			//update Weight of each node J
	//void update_M() {/*must be filled in*/}			//update matrix M with ij sub values
