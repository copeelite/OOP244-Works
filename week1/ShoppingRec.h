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
