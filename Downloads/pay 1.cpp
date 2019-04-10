//Geonhyeong Park
//CPSC301-03
#include "Person.h"
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;

void readData(vector<Person> &p) {
	const int N = 20;
	ifstream read("input.txt");
	string firstN, lastN;
	float payR;
	float hours;
	string line;
	int n = 0;
	/*
	for (int i = 0; i < 6; i++) {
		read >> firstN >> lastN >> hours >> payR;
		p[i].setFirstName(firstN);
		p[i].setLastName(lastN);
		p[i].setHoursWorked(hours);
		p[i].setPayRate(payR);
		n++;
		if (n > 20) {
			cout << "The maximum size of array exceeded" << endl;
			cout << "Program terminates now" << endl;
			exit(0);
		}
	}
	*/
	for (int i = 0; i < 6; i++) {
		read >> firstN >> lastN >> hours >> payR;
		p.emplace_back(firstN,lastN,payR,hours);
		p[i].setFirstName(firstN);
		
		p[i].setLastName(lastN);
		
		p[i].setHoursWorked(hours);
		
		p[i].setPayRate(payR);
	;

	}

}
void writeData(vector<Person> &p) {
	for (int i = 0; i < 6; i++) {
		cout << p[i].fullName() << " " << p[i].totalPay();
		cout << endl;
	}
}

int main() {

	vector<Person> p;
	readData(p);
	writeData(p);

	system("pause");
}