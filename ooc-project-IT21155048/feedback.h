  
#include<iostream>
#include<cstring>
#include "customer.h"
#define SIZE 10;

using namespace std;

class Feedback
{
    private:
      int feedbackNo;
      string feedback;
      Customer * customer[SIZE];

    public:
        Feedback();
        Feedback(int feedback_no , string feedBack);
        void displayFeedback(Customer * customer1 , Customer* customer2);
        void inputFeedback(int feedback_no , string description);
};
