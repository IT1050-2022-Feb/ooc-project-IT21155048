#include<string>
#include "order.h"

using namespace std;

class DeliveryStaff {
private:
	string deliveryNo;
	string deliveryPeriod;
	string deliveryType;
	Order *confirmOrder[10];//orders which paid and confirmed 

public:
  DeliveryStaff();
  DeliveryStaff(string delivery_no,string delivery_period,string delivery_type);
	void addDeliveryDetails(Order *cOrder);
	void displayDeliveryDetails();
};