// Grocery-Tracking Program.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Author: Justin Ramirez
// Date: 6/14/2023

#include"menu.h"
#include"data_processing.h"

using namespace std;
// here is the test file just copy and enter the file name at the start of the program: CS_Input_File.txt


int main()
{
    string userFile = checkFileExists();

    if(userFile != "none")
    {
        backUpUserFile(userFile);
        printMenuAndNavigateOptions(userFile);
    }
   
    return 0;
}


