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
#ifndef _244_SHOPPINGREC_H // replace with relevant names
#define _244_SHOPPINGREC_H
namespace sdds {
	// Your header file content goes here
	const int MAX_TITLE_LENGTH = 50;

	const int MAX_QUANTITY_VALUE = 50;

	struct ShoppingRec {
		char m_title[MAX_TITLE_LENGTH + 1];
		int m_quantity;
		bool m_bought;
	};



	ShoppingRec getShoppingRec();
	void displayShoppingRec(const ShoppingRec* shp);
	void toggleBoughtFlag(ShoppingRec* rec);
	bool isShoppingRecEmpty(const ShoppingRec* shp);
}
#endif
