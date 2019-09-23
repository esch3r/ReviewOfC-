// Example program
#include <iostream>
using namespace std; 


int main()
{ 
  char choice ='Y';
  {
      
  const double RegularHours=40.0 ;// declare a constant double assign it 40
  int dependent,hours; 
  double sstax,ftax,stax,insdep; 
  double grosspay,netpay,withhold; 
  
  cout << "Please enter the number of hours worked in one week" << endl; 
  cin >> hours; 
  cout<< "Number of dependents " << endl;
  cin >>dependent;
  
  
  /* if the number of hours exceeds 40 than calculate the grosspay 
  adding 1.5 times the rate times hours m  */ 
   if (hours > RegularHours)  {
     grosspay =16.78*RegularHours + (1.5)*(16.78)*(hours-RegularHours);
   }
   else  {
     grosspay =16.78*hours; 
   }
   
   
   // Tag on 35 if theres more than 3 dependents
   if (dependent >= 3.0) {
     insdep = 35; 
   }
   else  {
     insdep =0;  
   }
   
   sstax =.06*grosspay; 
   ftax  =.14*grosspay; 
   stax = .05*grosspay;
   
   withhold = sstax+ftax+stax+insdep+10; // taxs summed up + amount unidue
   netpay = grosspay - withhold;
   cout << "Gross pay = " << grosspay << endl; 
   cout << "Social Security tax = "<<sstax << endl;
   cout << "Federal Income tax = " <<ftax <<endl; 
   cout << "State income tax = " << stax << endl;
   cout <<"Total witholdings= " << withhold<<endl;
   cout <<"Net take home pay = " << netpay <<endl;
   
  cout << "Would you like to run the program over again: " << "Y/n  yes or no" << endl;
  cin >>choice;
  } while (choice='y' || choice == 'Y')
 
 return 0; 
}