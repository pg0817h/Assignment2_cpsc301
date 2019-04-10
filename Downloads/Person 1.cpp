//Geonhyeong Park
//CPSC301-03
#include "Person.h"
#include <iostream>
Person::Person(string fName, string lName, float rate, float hours)
 {
	
	firstName = fName;
	lastName = lName;
	payRate = rate;
	hoursWorked = hours;
}
string Person::getFirstName() {
	return firstName;
}

void Person::setLastName(string lName) {
	
	lastName = lName;
	


}
string Person::getLastName() {


	return lastName;
}
void Person::setFirstName(string fName) {
	
	firstName = fName;
	


}

void Person::setPayRate(float rate) {
	
	payRate = rate;
	

}
float Person::getPayRate() {
	return payRate;
}
void Person::setHoursWorked(float hours) {
	
	hoursWorked = hours;
	

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
	
	string full;
	full = firstName + " " + lastName;

	return full;
}