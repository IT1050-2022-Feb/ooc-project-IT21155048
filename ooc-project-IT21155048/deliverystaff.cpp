#include<iostream>
#include<string>
#include "deliverystaff.h"

using namespace std;

DeliveryStaff::DeliveryStaff(){
  deliveryNo="";
  deliveryPeriod="";
  deliveryType="";
}
DeliveryStaff::DeliveryStaff(string delivery_no,string delivery_period,string delivery_type){
  deliveryNo= delivery_no;
  deliveryPeriod=delivery_period;
  deliveryType=delivery_type;
} 