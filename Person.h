//Geonhyeong Park
//CPSC301-03
#pragma once 
#include <string>
using namespace std;

#ifndef PERSON_H
#define PERSON_H

class Person
{
private:
	string lastName;
	string firstName;
	float  payRate;
	float  hoursWorked;
	string employees[20];
	int numberofEmloyees;

public:
	Person();
	string employees2[20];
	void setLastName(string lName);
	string getLastName();
	void setFirstName(string fName);
	string getFirstName();
	void setPayRate(float rate);
	float getPayRate();
	void setHoursWorked(float hours);
	float getHoursWorked();
	float totalPay();
	string fullName();
	void PrintEmployee();
};
#endif // end Person.h
