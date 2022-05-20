#include<iostream>
#include<cstring>
#include"FinacialStaff.h"
using namespace std;

class Report
{
    private:
      string reportId;

    public:  
      Report();
      Report(string report_id);
      void calmonthlySales();
      void displayFinacialReport();
};