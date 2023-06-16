
#include<iostream>
#include<string>

#include<cctype>
#include"data_processing.h"
#include"ItemTracker.h"
#include"menu.h"

using namespace std;


/*
    This function prints the menu and navagates the user through the options, loop ends when 4 is entered

*/
void printMenuAndNavigateOptions(string userFile)
{
    ItemTracker it_tracker(userFile);
    string itemToLookUp;
    while (true)// loops the menu until the user enters 4
    {

        int answer = 0;  // declares variable for the user input 

        // Prints the menu to the screen
        cout << "\n";
        cout << string(65, '*') << endl;
        cout << "Welcom to the Corner Grocer's item - tracking System." << endl;
        cout << "Press 1 to look up an item." << endl;
        cout << "Press 2 to see all items purshesed." << endl;
        cout << "Press 3 to see all items purchesd in the form of a histogram." << endl;
        cout << "Press 4 to exit the system." << endl;
        cout << "enter your answer here: ";

        if (cin >> answer)  // takes input from user and checks if user input is valid
        {
             
            cout << string(65, '*') << "\n" << endl;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');


            if (answer == 1)  // calls the saerch item function
            {
                cout << "Enter the item you want to look up here: ";
                cin >> itemToLookUp;
                itemToLookUp[0] = towupper(itemToLookUp[0]);  // Upper casing the first letter of the name entered 

                if (it_tracker.getItemWithCount(itemToLookUp) == 0)
                {
                    cout << "Food item was not found in the file." << endl;
                }
                else
                {
                    cout << itemToLookUp << " " << it_tracker.getItemWithCount(itemToLookUp) << endl;
                }

            }


            else if (answer == 2)  // calls the printItem function
            {
                it_tracker.printFrequencyList();
            }


            else if (answer == 3)  // calls the printItemHistogram
            {
                it_tracker.printHistogram();
            }


            else if (answer == 4) // breaks out of the loop
            {
                break;
            }


            else // if input invalid repeates the menu options
            {
                cout << "That is not a valid answer." << endl;
            }
        }

        else 
        { 
            cin.clear(); 
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please enter an integer." << endl;
        }
        
    }


}