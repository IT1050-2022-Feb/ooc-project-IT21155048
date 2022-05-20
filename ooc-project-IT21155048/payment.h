#include <iostream>
#include<string>
using namespace std;

class Payment {
protected:
	string paymentId;
	double amount;
	double offers;
	double totalamount;
public:
  Payment();
  Payment(string payment_id,double Amount,double Offers,double total_amount);
	void paymentDetails();
	void payValidate();
};