#include <iostream>
#include<string>
using namespace std;


class BankCard: public Payment {
private:
	int cardNo;
	string expDate;
	int cvv;
public:
  BankCard();
  BankCard(int card_no,string exp_date,int Cvv);
};
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

class PayPal :public Payment {
private:
	string paypalId;
	string paypalPassword;
public:
  PayPal();
  PayPal(string paypal_id,string paypalPassword);
};
PayPal::PayPal(){
  paypalId="";
  paypalPassword="";
}

PayPal::PayPal(string paypal_id,string paypalPassword){
   paypalId=paypal_id;
  paypalPassword=paypalPassword;
}
 BankCard::BankCard(){
  cardNo=0;
  expDate="";
  cvv=0;
}
BankCard::BankCard(int card_no,string exp_date,int Cvv){
  cardNo= card_no;
 expDate=exp_date;
  cvv=Cvv;
}
int main()
{
  Payment *payment1=new Payment();
  BankCard *card1=new BankCard();
  PayPal *pal1=new PayPal();
} 
