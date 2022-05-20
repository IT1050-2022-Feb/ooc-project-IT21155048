#include"paypal.h"
#include<string>
using namespace std;



PayPal::PayPal(){
  paypalId="";
  paypalPassword="";
}

PayPal::PayPal(string paypal_id,string paypalPassword){
   paypalId=paypal_id;
  paypalPassword=paypalPassword;
}