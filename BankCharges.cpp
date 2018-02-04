/*
 * Description: Program that computes and displays the bank's service fees for the month.
 * File name: BankCharges.cpp
 *
 */

#include <iostream>
#include <iomanip>    
#include <ctime>
#include <cstdlib>
using namespace std;

int main ()
{
// Define variables needed
   const double MONTHLY_CHARGE = 10;
   const double CHECKFEE_1 = 0.10;
   const double CHECKFEE_2 = 0.08;
   const double CHECKFEE_3 = 0.06;
   const double CHECKFEE_4 = 0.04;
   const double BELOW_MIN_FEE = 15;
   double balance;
   double checks;
   double bankFee;

	cout << endl;
// Ask user to input data
	cout << "Enter the following information about your checking account." << endl;
	cout << "Beginning of balance: ";
	cin >> balance;

// If user inputs negative balance, display urgent message and exit.	
	if (balance < 0){
	   cout << "URGENT MESSAGE: The account is overdrawn. " << endl;}
// Otherwise, ask user to input number of checks written
	else
	{cout << "Number of checks written: ";
	cin >> checks;
	cout << endl;}

// Determine output display
	cout << fixed << showpoint << setprecision(2);

// Calculate Bank fee
		if (balance > 0 && balance < 400)
		{
		   bankFee = MONTHLY_CHARGE + BELOW_MIN_FEE;
		}
		 else
                {
                   bankFee = MONTHLY_CHARGE;

                }

// Display Bank fee adding Check Fees
			if (balance < 0)
			   cout << endl;
				 
			else if (checks < 20){
			   cout << "The bank fee of this month is $" 
				<< bankFee + (checks * CHECKFEE_1) << endl;	
			   }
			else if (checks > 20 && checks < 39){
			   cout << "The bank fee of this month is $"
				<< bankFee + (checks * CHECKFEE_2) << endl;
			   }
			else if (checks > 40 && checks < 59){
			   cout << "The bank fee of this month is $"
				<< bankFee + (checks * CHECKFEE_3) << endl;
			   }
			else if (checks > 60){
			  cout << "The bank fee of this month is $"
				<< bankFee + (checks * CHECKFEE_4) << endl;
			   }
			else if (balance < 0)
			   cout << endl;
			
	 
	cout << endl;
	cout << "Programmed by Maria Seljak." << endl;		
	cout << endl;

	return 0;
}

// Sample Run
/*

SAMPLE 1


Enter the following information about your checking account.
Beginning of balance: 2000 
Number of checks written: 5

The bank fee of this month is $10.50

/////////////////////////////////////////////////////////////////

SAMPLE 2


Enter the following information about your checking account.
Beginning of balance: -50
URGENT MESSAGE: The account is overdrawn. 

/////////////////////////////////////////////////////////////////

SAMPLE 3 


Enter the following information about your checking account.
Beginning of balance: 350
Number of checks written: 15

The bank fee of this month is $26.50


*/
