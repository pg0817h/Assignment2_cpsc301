
#include "Person.h"
string Person::getFirstName() {
	return firstName;
}

void Person::setLastName(string lName) {


}
string Person::getLastName() {


	return lastName;
}
void Person::setFirstName(string fName) {


}

void Person::setPayRate(float rate) {

}
float Person::getPayRate() {
	return payRate;
}
void Person::setHoursWorked(float hours) {

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
	
}
