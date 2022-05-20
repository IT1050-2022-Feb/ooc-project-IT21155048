#include <iostream>
#include<string>
#include "payment.h"
using namespace std;

class PayPal :public Payment {
private:
	string paypalId;
	string paypalPassword;
public:
  PayPal();
  PayPal(string paypal_id,string paypalPassword);
};  