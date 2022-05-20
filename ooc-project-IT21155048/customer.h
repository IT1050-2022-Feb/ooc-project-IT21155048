#include <iostream>
#include<cstring>
#include "order.h"
using namespace std;

class Customer{
	private:
		string customerId;
		string cName;
		string cAddress;
		string contactNo;
		Order  *order[10];
	public:
		Customer();
		Customer(string cId, string name, string address,string contactno);
		void CustomerRegister();
		void login();
		void editProfile();
		void addFeedback();
};    