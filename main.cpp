/******************************************************************************
 * AUTHOR     : Sebastian Hooshmand, Mark Saleh
 * STUDENT ID :  1063567 & 1060488
 * Lab #24	  : Introduction to Arrays
 * CLASS      : CS1A
 * SECTION    : MW: 8am
 * DUE DATE   : 4/18/18
 *****************************************************************************/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

/******************************************************************************
 * Lab #24: Introduction to Arrays
 * ----------------------------------------------------------------------------9
 * This program will read in a list of 10 names as input and then places them
 * 		into an array. The program will prompt for a name and return the
 * 		number of times that name was entered in the list.
 * ----------------------------------------------------------------------------
 * INPUT:
 * 		nameAr[AR_SIZE]  : an array of a specified number of names.
 * 		searchItem		 : searching the names in the array.
 *
 * OUTPUT:
 * 		instances	 	 : the number a name repeats in the loop.
 *
 *****************************************************************************/

int main()
{
	/**************************************************************************
	 * CONSTANTS
	 * 		AR_SIZE 	: the size of the array of names.
	 * ------------------------------------------------------------------------
	 * OUTPUT - USED FOR CLASS HEADING
	 *-------------------------------------------------------------------------
	 *PROGRAMMER[] : Programmer's Name
	 *CLASS[]      : Student's Course
	 *SECTION[]    : Class Days and Times
	 *LAB_NUM      : Lab Number (specific to this Lab / Assignment)
	 *LAB_NAME[]   : Title of the Lab / Assignment
	 *************************************************************************/


	const char PROGRAMMER[] = "Sebastian Hooshmand & Mark Saleh";
	const char CLASS[]      = "CS1A";
	const char SECTION[]    = "MW: 8:00 am";
	const int  LAB_NUM      =  24;
	const char LAB_NAME[]   = "Introduction to Arrays";
	const int  AR_SIZE		=  11;

	// variables
	string nameAr[AR_SIZE]; // IN         - an array of a specified # of names.
	string searchItem;      // IN         - searching the names in the array.
	int instances;          // CALC & OUT - the # a name repeats in the loop.

	//initialization
	instances = 0;

	//OUTPUT the class heading
	cout << left;
	cout << "***********************************************************\n";
	cout << "*  PROGRAMMED BY : " << PROGRAMMER << endl;
	cout << "*  "     << setw(14) << "CLASS"    << ": " << CLASS    << endl;
	cout << "*  "     << setw(14) << "SECTION"  << ": " << SECTION  << endl;
	cout << "*  LAB #"<< setw(9) << LAB_NUM    << ": "<< LAB_NAME << endl;
	cout << "************************************************************\n\n";
	cout << right;

	// for loop to let the user enter 10 names into the array
	for (int index = 1; index < AR_SIZE; index++)
	{
/*******************************************************************************
 *INPUT - allows the user to enter in a name and have it stored in an array
 ******************************************************************************/
		cout << "Enter name #" << index << ": ";
		getline(cin, nameAr[index]);
	}


    cout << endl;

/*******************************************************************************
 *INPUT - allows the user to enter the name they want to search for
 ******************************************************************************/
    cout << "Who do you want to search for (enter done to exit)? ";
	getline(cin, searchItem);

	while (searchItem != "done") //Loops until "done" is entered to exit
	{
		instances = 0; // initializes the instances to 0 before entering loop
		               // again.


	// for loop that increments the number of instances for a specific name
		for(int index = 1; index < AR_SIZE; index++)
		{
/*******************************************************************************
 *PROCESSING - compares the names inputed to the name the user wants to search
 *			   for.
 ******************************************************************************/
			if(nameAr[index] == searchItem)
					{
						instances++;
					}
		}

		if(instances > 1)
		{
/*******************************************************************************
 *OUTPUT - outputs the number of instances a name was entered.
 ******************************************************************************/
			cout << "There are " << instances << " instances of the name "
				 << searchItem << '.';
		}
		else if(instances == 1)
		{
			cout << "There is one instance of the name " << searchItem << '.';
		}
		else
		{
			cout << searchItem << "'s name does not exist in this list.";
		}

		cout << endl << endl;
		cout << "Who do you want to search for (enter done to exit)? ";
		getline(cin, searchItem);
	}

	cout << endl;
	cout << "Thank you for using my program.";

return 0;
}
