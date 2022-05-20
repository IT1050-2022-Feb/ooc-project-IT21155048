#include <iostream>
#include<string>
#include "book.h"
#include "customer.h"
class Order{
	private:
		string orderId;
		double amount;
		string orderedDate;
		Customer *customer; //Bi-directional Association 
		Book *Obook;  //Uni-directional Association 
	public:
		Order();
		Order(string orderId,double amount, string ordereddate);
		void addOrderDetails(string orderId,double amount, string ordereddate,Book *book);
		void calTotAmount();
		void displayOrderDetails();	
};       