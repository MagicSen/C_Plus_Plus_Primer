#pragma once
#include "Person.h"
#include "string"
#include <iostream>
/*struct Person{
	std::string person_name;
	std::string person_address;
	std::string get_name() const{ return this->person_name;}
	std::string get_address() const{return this->person_address;}
	Person() = default;
	Person(std::string const name, std::string const address) : person_name(name),person_address(address) {}
	Person(std::istream &in){ in >> this->person_name >> this->person_address;}
};*/

class Person{
	friend  std::istream &read(std::istream &in, Person &a);
	friend  std::ostream &print(std::ostream &out, const Person &a);
public:
	Person() = default;
	Person(std::string const name, std::string const address) : person_name(name),person_address(address) {}
	// Set undefault constructor.
	explicit Person(std::istream &in){ in >> this->person_name >> this->person_address;}
	std::string get_name() const{ return this->person_name;}
	std::string get_address() const{return this->person_address;}
private:
	std::string person_name;
	std::string person_address;
}
std::istream &read(std::istream &in, Person &a)
{
	in >> a.person_name >> a.person_address;
	return in;
}

std::ostream &print(std::ostream &out, const Person &a)
{
	out << a.person_name << " " << a.person_address;
	return out;
}


