#include <iostream>
#include<cstring>
#include "order.h"
using namespace std;

class Cart {
private:
	string cartId;
	Order *order[10];
public:
	Cart();
	Cart(string cardId);
	void displayCart();
	void addToCart(Order *getOrder);
	void removeFromCart();
};          