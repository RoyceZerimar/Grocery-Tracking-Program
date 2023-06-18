# Grocery-Tracking-Program
The Grocery-Tracking Program is designed to track the frequency of items in a grocery list and provide various options for data analysis and visualization. Here is a description of the code's design and functionality:
1.	File Structure: The program consists of several files organized as follows:
•	data_processing.h and data_processing.cpp: These files contain functions responsible for processing the data and backing up the file.
•	menu_navigation.h and menu_navigation.cpp: These files handle the menu navigation and user interaction.
•	Itemtracker.h and Itemtracker.cpp: These files define the Itemtracker class, which manages the tracking and analysis of item frequencies.
•	main.cpp: This is the main file that integrates the functionality of the other files and serves as the entry point of the program.
2.	Menu Options:
•	Option One (Search): This option prompts the user to input an item or word they wish to search for. The program then returns the frequency of that specific word in the grocery list.
•	Option Two (Print List): This option prints a list showing the frequency of all items purchased. The output includes each item paired with the number of times it appears in the input file.
•	Option Three (Print Histogram): This option displays the frequency information as a histogram. The program prints the item name followed by asterisks representing the numeric amount. The number of asterisks corresponds to the frequency of the item.
•	Option Four (Exit): This option allows the user to exit the program.
3.	Data File Creation:
•	At the beginning of the program, a data file named frequency.dat is created for backing up the accumulated data. The frequency.dat file includes each item (represented by a word) paired with the number of times it appears in the input file.
4.	Thought Process and Use of C++:
•	The program uses C++ to create an efficient and modular solution for grocery item tracking. Object-oriented programming principles are applied through the use of classes and separate files for different functionalities.
•	The program employs C++ features such as classes, functions, file I/O, and user input/output to provide a robust and interactive experience. The code follows best practices, including proper naming conventions, comments, and error handling, to ensure readability, maintainability, and reliability.

