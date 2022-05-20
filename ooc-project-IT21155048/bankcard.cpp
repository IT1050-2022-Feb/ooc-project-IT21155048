#include"bankcard.h"
#include<string>
using namespace std;

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
