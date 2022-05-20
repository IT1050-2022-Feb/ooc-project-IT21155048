#include "payment.h"
#include <string>
using namespace std;

Payment::Payment(){
  paymentId="";
  amount=0;
  totalamount=0;
  }

Payment::Payment(string payment_id,double Amount,double Offers,double total_amount){
  paymentId=payment_id;
  amount=Amount;
  offers=Offers;
  totalamount=total_amount;
  }