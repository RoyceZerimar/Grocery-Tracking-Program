#include<iostream>
#include<fstream>
#include<map>
#include "ItemTracker.h"

using namespace std;


// Constructor
ItemTracker::ItemTracker(const std::string  fileName) :userFile(fileName)
{
	// Read the data from the input file
	std::ifstream inFile(fileName);
	std::string item;
	while (inFile >> item) {
		// Increment the frequency count for this item
		itemFrequency[item]++;
	}
}



/*
	This function promts the user for an item to look up then, finds the item and prints it along with its number amount.
*/
int ItemTracker::getItemWithCount(std::string item) const
{
	// Check if the item is in the frequency map
	auto it = itemFrequency.find(item);
	if (it != itemFrequency.end()) {
		// If the item is in the map, return its frequency count
		return it->second;
	}
	else {
		// If the item is not in the map, return 0
		return 0;
	}
}




void ItemTracker::printFrequencyList() const {
	// Print the list of items with their frequencies
	for (const auto& itemPair : itemFrequency) {
		std::cout << itemPair.first << " " << itemPair.second << std::endl;
	}
}



void ItemTracker::printHistogram() const {
	// Print a histogram of the frequency data
	for (const auto& itemPair : itemFrequency) {
		std::cout << itemPair.first << " ";
		for (int i = 0; i < itemPair.second; i++) {
			std::cout << "*";
		}
		std::cout << std::endl;
	}
}