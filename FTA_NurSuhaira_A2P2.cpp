// Full Name: Nur Suhaira Bte Badrul Hisham
// Full Time
// Declaration: It is my own work
// Task:
// Develop sell some unknown items
// The company will give discountbased on the total costs of each items. 
// The highest costs among the three items will get a discount of 30%, 
// the lowest costs among the three items will get a discount of 10% and
// the cost in between will get a discount of 20%. 

#include <iostream>
#include <iomanip>
using namespace std;

	
const float DISC10 = (90 * 1.0) / 100;
const float DISC20 = (80 * 1.0) / 100;
const float DISC30 = (70 * 1.0) / 100;   
const char ITEM1 = '1';
const char ITEM2 = '2';
const char ITEM3 = '3';
	
int main ()
{
	float price1, price2, price3,
		  cost1, cost2, cost3,
		  final1, final2, final3, total;
		  
	char highCost, midCost, lowCost;
		  
	int qty1, qty2, qty3;	
	
	string remark1, remark2, remark3,
		   disc1, disc2, disc3;
		
	// Display the program
	cout << "\tWelcome to ABC Company" 
		 << endl << endl;
	
	cout << "Enter item 1 price and quantity: ";
	cin  >>  price1 >> qty1;

	cin.clear ();
	cin.ignore (100, '\n');
	
	while (qty1 < 0)
	{
		cout << "Please re-enter item 1 quantity: ";
		cin >> qty1;
	}
	
	while (price1 < 0.0)
	{
		cout << "Please re-enter item 1 price: ";
		cin >> price1;
	}
	
	cout << "Enter item 2 price and quantity: ";
	cin  >>  price2 >> qty2;

	cin.clear ();
	cin.ignore (100, '\n');
	
	while (qty2 < 0)
	{
		cout << "Please re-enter item 2 quantity: ";
		cin >> qty2;
	}
	
	while (price2 < 0.0)
	{
		cout << "Please re-enter item 2 price: ";
		cin >> price2;
	}
	
	cout << "Enter item 3 price and quantity: ";
	cin  >>  price3 >> qty3;

	cin.clear ();
	cin.ignore (100, '\n');
	
	while (qty3 < 0)
	{
		cout << "Please re-enter item 3 quantity: ";
		cin >> qty3;
	}
	
	while (price3 < 0.0)
	{
		cout << "Please re-enter item 3 price: ";
		cin >> price3;
	}
	
	cout << endl;
	
	//Compute the total cost of each item
	cost1 = price1 * qty1;
	cost2 = price2 * qty2;
	cost3 = price3 * qty3;
	
	//Determine which item has the highest, lowest and middle costs
	if ((cost1 >= cost2) && (cost1 >= cost3))
	{
		highCost = ITEM1;
		
		if (cost2 > cost3)
		{
			midCost = ITEM2;
			lowCost = ITEM3;
		}
		else
		{
			midCost = ITEM3;
			lowCost = ITEM2;
		}
	}
	else if ((cost2 >= cost1) && (cost2 >= cost3))
	{
		highCost = ITEM2;
		
		if (cost1 > cost3)
		{
			midCost = ITEM1;
			lowCost = ITEM3;
		}
		else
		{
			midCost = ITEM3;
			lowCost = ITEM1;
		}
	}
	else //((cost3 > cost1) && (cost3 > cost2))
	{
		highCost = ITEM3;
		
		if (cost1 > cost2)
		{
			midCost = ITEM1;
			lowCost = ITEM2;
		}
		else
		{
			midCost = ITEM2;
			lowCost = ITEM1;
		}
	}
	
	cout << "Summary of items' costs" << endl
		 << setw (23) << setfill ('-') << '-'
		 << endl;
	cout << setfill (' ')
		 << endl;
		 
	switch(highCost)
	{
		case ITEM1:		cout << "Highest cost is item " << ITEM1 << endl;
						remark1 = "MAX";
						break;
		case ITEM2:	  	cout << "Highest cost is item " << ITEM2 << endl;;
						remark2 = "MAX";
						break;
		case ITEM3: 	cout << "Highest cost is item " << ITEM3 << endl;
						remark3 = "MAX";
	}
	
	switch(midCost)
	{
		case ITEM1:		cout << "Middle  cost is item " << ITEM1 << endl;;
						remark1 = "MID";
						break;
		case ITEM2:		cout << "Middle  cost is item " << ITEM2 << endl;
						remark2 = "MID";
						break;
		case ITEM3:		cout << "Middle  cost is item " << ITEM3 << endl;
						remark3 = "MID";
	}
	
	switch(lowCost)
	{
		case ITEM1:		cout << "Lowest  cost is item " << ITEM1 << endl;
						remark1 = "MIN";
						break;
		case ITEM2:		cout << "Lowest  cost is item " << ITEM2 << endl;
						remark2 = "MIN";
						break;
		case ITEM3:		cout << "Lowest  cost is item " << ITEM3 << endl;
						remark3 = "MIN";
	}
	
	cout << endl;
			 
	//Compute the final cost of each item
	//Add them together
	//Display the total costs	 
	
	if ((highCost == ITEM1) && (midCost == ITEM2) && (lowCost == ITEM3))
	{
		 final1 = DISC30 * cost1;
		 final2 = DISC20 * cost2;
		 final3 = DISC10 * cost3;
		 disc1	= "10%";
		 disc2	= "20%";
		 disc3 	= "30%";
	}
	else if ((highCost == ITEM2) && (midCost == ITEM3) && (lowCost == ITEM1))
	{
		 final1 = DISC10 * cost1;
		 final2 = DISC30 * cost2;
		 final3 = DISC20 * cost3;
		 disc1	= "10%";
		 disc2	= "30%";
		 disc3 	= "20%";
	}
	else //((highCost == ITEM3) && (midCost == ITEM1) && (lowCost == ITEM2))
	{
		 final1 = DISC20 * cost1;
		 final2 = DISC10 * cost2;
		 final3 = DISC30 * cost3;
		 disc1	= "20%";
		 disc2	= "10%";
		 disc3 	= "30%";
	}
		
	total  = final1 + final2 + final3;
	   	    
	cout << "Summary of purchase" << endl
		 << setw (19) << setfill ('-') << '-';
	cout << setfill (' ')
		 << endl;	 
	
	cout << endl;
	cout << fixed << showpoint << setprecision (2);
	
	cout << left << setw (12) << "Item"
		 << left << setw (8) << "Price"
		 << left << setw (8) << "Qty"
		 << left << setw (8) << "Cost"
		 << left << setw (8) << "Disc't"
		 << left << setw (8) << "Final"
		 << left << setw (8) << "Remark"
		 << endl << setw (57) << setfill ('-') << '-'
		 << setfill (' ')
		 << endl;
		 
	cout << left  << setw (8) << "Item 1"
		 << right << setw (8) << price1
		 << right << setw (6) << qty1
		 << right << setw (10) << cost1
		 << right << setw (8) << disc1
		 << right << setw (8) << final1
		 << right << setw (8) << remark1
		 << endl;
		 
	cout << left  << setw (8) << "Item 2"
		 << right << setw (8) << price2
		 << right << setw (6) << qty2
		 << right << setw (10) << cost2
		 << right << setw (8) << disc2
		 << right << setw (8) << final2
		 << right << setw (8) << remark2
		 << endl;
		 
	cout << left  << setw (8) << "Item 3"
		 << right << setw (8) << price3
		 << right << setw (6) << qty3
		 << right << setw (10) << cost3
		 << right << setw (8) << disc3
		 << right << setw (8) << final3
		 << right << setw (8) << remark3
		 << endl
		 << setw (57) << setfill ('=') << '='
		 << setfill (' ')
		 << endl;
	
	cout << left << setw (10) << "Total"
		 << right << setw (38) << total
		 << endl;
		 
	cout << setw (57) << setfill ('=') << '='
		 << setfill (' ')
		 << endl;	   	     
}

