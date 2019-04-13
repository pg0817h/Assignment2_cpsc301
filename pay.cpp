//Geonhyeong Park
//CPSC301-03
#include "Person.h"
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;

void readData(vector<Person> &p, int &count) {
	
	ifstream read("input.txt");
	string firstN, lastN;
	float payR;
	float hours;
	string line;
	int n = 0;
	
	for (int i = 0; i < count; i++) {
		read >> firstN >> lastN >> hours >> payR;
		p.emplace_back(firstN, lastN, payR, hours);
		p[i].setFirstName(firstN);

		p[i].setLastName(lastN);

		p[i].setHoursWorked(hours);

		p[i].setPayRate(payR);


	}

}
void writeData(vector<Person> &p) {
	for (int i = 0; i < p.size(); i++) {
		cout << p[i].fullName() << " " << p[i].totalPay();
		cout << endl;
	}
}

int main() {

	vector<Person> p;
	ifstream input("input.txt");
	int count = 0;
	string line;
	while (getline(input, line)) {
		count++;
	}
	input.close();
	readData(p, count);
	writeData(p);

	system("pause");
}
