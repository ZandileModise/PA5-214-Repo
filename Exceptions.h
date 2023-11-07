#pragma once
#include<iostream>
#include"string"
using namespace std;

/**
 * @file Exceptions.h
 * @brief This file contains the definition of the Exceptions class.
 */

/**
 * @class Exceptions
 * @brief A class representing exceptions in the restaurant system.
 * 
 * This class contains a message that describes the exception.
 */
class Exceptions
{
public:
	/**
	 * @brief The message that describes the exception.
	 */
	string message;

	/**
	 * @brief Constructor for Exceptions.
	 * @param message The message that describes the exception.
	 */
	Exceptions(string message) {
		this->message = message;
	}
};