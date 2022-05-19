/*
*****************************************************************************
						Assignment 1 - Workshop1Part1
Full Name  :FanghaoMeng
Student ID#:180210213
Email      :fmeng18@myseneca.ca
Section    :OOP244NAA

Authenticity Declaration:
I have done all the coding by myself and only copied the code that my professor provided
to complete my workshops and assignments.
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
*****************************************************************************
*/
#ifndef _244_FILE_H // replace with relevant names
#define _244_FILE_H
#include "ShoppingRec.h"
// Your header file content goes here
namespace sdds {
	bool openFileForRead();
	bool openFileForOverwrite();
	void closeFile();
	bool freadShoppingRec(ShoppingRec* rec);
	void fwriteShoppintRec(const ShoppingRec* rec);
}
#endif
