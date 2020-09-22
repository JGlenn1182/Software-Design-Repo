//		This is an example menu to display how stubbing works. Stubbing helps programmers to make sure that 
// the logic of their code works before they have to worry about the details of every piece of it. It is
// especially helpful in a team environment because teammembers can see what parts need to be completed based on 
// the error messages that are outputted.

#include <iostream>

using namespace std;

void Item1();
void Item2();
void Item3();
void Item4();
void Item5();
void Item6();
void Item7();
void Item8();
void Item9();

int main()
{
	// int variable for menu selection
	int menu = 0;

	// do while loop to keep the menu open if the user hasn't selected exit
	do {

		// display menu
		cout << "Select an option 1-10.\n\n1. Example item 1\t2. Example item 2\n3. Example item 3\t4. Example item 4" <<
			"\n5. Example item 5\t6. Example item 6\n7. Example item 7\t8. Example item 8\n9. Example item 9\t10. Exit\n\n";

		// user input menu item
		cin >> menu;

		// formatting
		cout << endl;

		// switch on int menu, anything other than an integer 1-10 will output error message
		switch (menu)
		{
		case 1:
			Item1();
			break;
		case 2:
			Item2();
			break;
		case 3:
			Item3();
			break;
		case 4:
			Item4();
			break;
		case 5:
			Item5();
			break;
		case 6:
			Item6();
			break;
		case 7:
			Item7();
			break;
		case 8:
			Item8();
			break;
		case 9:
			Item9();
			break;
		case 10:
			cout << "Exiting..." << endl;
			break;
		default:
			cin.clear();
			cin.ignore(numeric_limits<streamsize > ::max(), '\n');

			cout << "Error: invalid menu entry." << endl;
		}


	} while (menu != 10);

		return 0;
}

void Item1()
{
	cout << "Function not yet implemented.\n" << endl;
};

void Item2()
{
	cout << "Function not yet implemented.\n" << endl;
};

void Item3()
{
	cout << "Function not yet implemented.\n" << endl;
};

void Item4()
{
	cout << "Function not yet implemented.\n" << endl;
};

void Item5()
{
	cout << "Function not yet implemented.\n" << endl;
};

void Item6()
{
	cout << "Function not yet implemented.\n" << endl;

};

void Item7()
{
	cout << "Function not yet implemented.\n" << endl;
};

void Item8()
{
	cout << "Function not yet implemented.\n" << endl;
};

void Item9()
{
	cout << "Function not yet implemented.\n" << endl;
};