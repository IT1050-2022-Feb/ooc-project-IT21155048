#include "customer.h"
Customer::Customer(){
	customerId = "";
cName = "";
cAddress = "";
contactNo ="";
}

Customer::Customer(string cId, string name, string address,string contactno) {
	customerId = cId;
	cName = name;
	cAddress = address;
	contactNo = contactno;
}
void Customer::login(){
}