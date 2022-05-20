#include"feedback.h"
#include <iostream>

using namespace std;

Feedback::Feedback()
{
  feedbackNo=0;
  feedback="";
}
 Feedback::Feedback(int feedback_no,string feedBack)
{
   feedbackNo=feedback_no;
   feedback=feedBack;
 }
