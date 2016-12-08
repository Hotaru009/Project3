#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <iostream>
#include <vector>			//includes vector library

using namespace std;

//int node;		//this can be defined by the user. around 15-50. size of an array. 

/*double vm_Risk = 4.5; //later assign for different options (check table)
double host_vm_Risk = 0; //initial VM risk is set at 0 at the beginning, must be calculated later
double host_net_Risk = 0;		//initial network risk is set at 0
double dep_Risk;			//dependency risk
*/
void function1(double x, double y, double weight1, double per1);

void function2(double x, double y, double weight2, double per2);

void host(int id, double cap, int mem, double vm_Risk, int net_Risk);

void virtM(int id, double vmCap, int mem, int dep_Risk);

double cal_SR(double weight1, double weight2);

double cal_W(double unusedResources, double CPU, double cap);

void assign(int i, int j, int temp);

void update(double temp, double CPU, double new_cpu, double used_mem, double mem);


//right now because the classes themselves are empty we will for now comment them out to avoid a symbolic error

//void update_SR();

//void update_W();

//void update_M();

