#pragma once
#include <iostream>
#include <string>
#include <exception>
using std::cout;
using std::endl;
using std::string;
using std::exception;

class MobileException : public exception {
public:
	MobileException() : exception() { };

	virtual char const* what() const = 0;
};

class NameException : public MobileException {
public:
	virtual char const* what() const override {
		return "Name is empty!";
	};

};

class SecondsException : public MobileException {
public:
	virtual char const* what() const override {
		return "Seconds number can't be negative!";
	};

};

