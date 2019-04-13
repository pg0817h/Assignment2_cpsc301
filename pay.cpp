//Geonhyeong Park
//CPSC-301-03
#include "Person.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

void readData(Person *p, int &count) {
	const int N = 20;
	ifstream read("input.txt");
	string firstN, lastN;
	float payR;
	float hours;
	
	int n = 0;

	for (int i = 0; i < count; i++) {
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

}
void writeData(Person *a) {
	for (int i = 0; i < 6; i++) {
		cout << a[i].fullName() << " " << a[i].totalPay();
		cout << endl;
	}
}

int main() {

	Person p[20];

	ifstream input("input.txt");
	int count = 0;
	string line;
	while (getline(input,line)) {
		count++;
	}
	input.close();
	readData(p,count);
	writeData(p);

	system("pause");
	return 0;
}