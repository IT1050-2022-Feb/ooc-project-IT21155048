#include<iostream>
#include<string>
#include "financialstaff.h"

using namespace std;

FinancialStaff::FinancialStaff(){
  reportMonth="";
  totalIncome=0.00;
  totalCost=0.00;
}
FinancialStaff::FinancialStaff(string month, double income, double cost){
  reportMonth=month;
  totalIncome=income;
  totalCost=cost;
}