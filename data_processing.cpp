#include<iostream>
#include<fstream>
#include<map>
#include"data_processing.h"
using namespace std;


/*
	This function checks to see if the user provided file exist
*/
string checkFileExists()
{
	string userFile = "none";
	cout << "In order to proceed, enter the name of the grocery file." << endl;
	cin >> userFile;
	ifstream file(userFile);
	if (!file.is_open())
	{
		cout << "File could not be found." << endl;
		cout << "Exiting system...." << endl;
		return "none";
	}

	return userFile;
}



/*
	This function processe the user file information to the frequency data file,
	at the start of the program and creates the frequency data file if it does not exist.
*/
void backUpUserFile(string userFile)
{

	ifstream inputFile(userFile); // Open the user file as inputFile

	map<string, int> foodCounts;  // Create a map to store the counts for each food

	string foodItemName;

	// Read the input file line by line
	while (getline(inputFile, foodItemName))
	{
		// Increment the count for the current food
		foodCounts[foodItemName]++;

	}

	inputFile.close();  // Close the input file



	ofstream outputFile("frequency.dat"); // Open the output file

	// Write the counts in to the output file
	for (const auto& foodCount : foodCounts)
	{
		outputFile << foodCount.first << " " << foodCount.second << "\n";
	}
	outputFile.close(); // close the output file
}
