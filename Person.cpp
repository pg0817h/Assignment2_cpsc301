//Geonhyeong Park
//CPSC301-03
#include "Person.h"
#include <iostream>
Person::Person() {
	numberofEmloyees = 20;
}
string Person::getFirstName() {
	return firstName;
}

void Person::setLastName(string lName) {
	Person p;
	lastName = lName;
	employees[numberofEmloyees] = p.lastName;


}
string Person::getLastName() {


	return lastName;
}
void Person::setFirstName(string fName) {
	Person p;
	firstName = fName;
	employees[numberofEmloyees] = p.firstName;


}

void Person::setPayRate(float rate) {
	Person p;
	payRate = rate;
	employees[numberofEmloyees] = p.payRate;

}
float Person::getPayRate() {
	return payRate;
}
void Person::setHoursWorked(float hours) {
	Person p;
	hoursWorked = hours;
	employees[numberofEmloyees] = p.hoursWorked;

}
float Person::getHoursWorked() {
	return hoursWorked;
}
float Person::totalPay() {
	float total;
	total = hoursWorked * payRate;

	return total;
}
string Person::fullName() {
	Person p;
	string full;
	full = firstName + " " + lastName;

	return full;
}