#include<string>
#include "report.h"
#include "payment.h"

using namespace std;

class FinancialStaff {
private:
	string reportMonth;
  double totalIncome;
  double totalCost;
	Report* report[8];
	Payment* payment[7];

public:
  FinancialStaff();
  FinancialStaff(string month, double income, double cost);
	double calProfit(Payment *pay1,Payment *pay2);
	void displayProfit();
};