// Created by i3-Arch on 1-11-2015
#include <iostream>
using namespace std;

int main()
{	
	
	// Declare Variables
	
	double TotalBill = 		0.0;		
	double Liqour = 		0.0;
	double TipPercent = 	0.0;
	double TotalNoLiqour =	0.0;
	double Tip =			0.0;

	// Enter input items

	cout << "Enter the total of the bill: "; 	
	cin >> TotalBill;
	cout << "Enter the your liqour charge: ";
	cin >> Liqour;
	cout << "Enter the tip percentage in decimal format: ";
	cin >> TipPercent;

	// Calculate the total without liqour and the tip

	TotalNoLiqour = TotalBill - Liqour;	
	Tip = TotalNoLiqour * TipPercent;

	// Display the output item

	cout << "Tip: $" << Tip << endl;	
	
	return 0;
}

//EOF
