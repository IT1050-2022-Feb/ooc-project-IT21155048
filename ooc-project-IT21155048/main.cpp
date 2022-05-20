#include<iostream>
#include "customer.h"
#include  "book.h"
#include "order.h"
#include "cart.h"
#include "financialStaff.h"
#include "deliverystaff.h"
#include "report.h"
#include "feedback.h"
#include "payment.h"
#include "bankcard.h"
#include "paypal.h"

using namespace std;
int main()
{
  Customer *c1=new Customer();
  Book *b1=new Book();
  Order *o1=new Order();
  Cart *cart1= new Cart();
  FinancialStaff *f1= new FinancialStaff();
  DeliveryStaff *d1=new DeliveryStaff() ;
  Payment *payment1=new Payment();
  BankCard *card1=new BankCard();
  PayPal *pal1=new PayPal();
  Report *report1=new  Report();
  Feedback *feedback1=new Feedback();
}    