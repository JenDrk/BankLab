#include "Customer.h"
#include <string>
using namespace std;

Customer::Customer(string firstName, string lastName) : _firstName(firstName), _lastName(lastName)
{
}


Customer::~Customer()
{
}

std::string Customer::getFullName()
{
	return _lastName + ", " + _firstName;
}
