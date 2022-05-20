#include"order.h"
#include<string>
using namespace std;

Order::Order(){
	orderId = "";
amount = 0;
orderedDate = "";
}

Order::Order(string orderID, double Amount, string ordered_date) {
	orderId = orderID;
	amount = Amount;
	orderedDate = ordered_date;
}          