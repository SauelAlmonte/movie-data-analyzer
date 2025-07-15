/*
    Author     : Sauel Almonte
    Date       : July 14th, 2025
    Due Date   : July 15th, 2025
    Course     : CSC 237
    Lab        : 11a – Structures
    Program    : MovieData Analyzer

    Description:
        This program dynamically allocates an array of MovieData structures,
        fills each element with user input, displays each movie's details
        along with its memory address, and identifies the movie with the
        longest running time. It demonstrates structures, pointers,
        pointer arithmetic via subscripts, and dynamic memory management.
*/

#include <iostream>
#include <limits>
#include <iomanip>
#include <memory>  // For unique_ptr
#include "MovieData.h"

using namespace std;

// Displays a formatted welcome banner when the program starts.
void displayWelcomeBanner();

/*
    Function    : main
    Purpose     : Orchestrates the overall program execution — dynamically allocates
                  a MovieData array, collects user input, displays movie details,
                  identifies the longest movie, and manages memory deallocation.
    Return      : int - returns 0 for successful completion or 1 for invalid input.
*/

int main() {

    displayWelcomeBanner();

    int arraySize; // Stores the number of movies to process as specified by the user

    // Prompt the user to enter the desired number of movies to process
    cout << "Enter desired array size: ";
    cin >> arraySize;
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear leftover newline

    // Defensive check to ensure the entered array size is positive
    // If invalid, notify the user and terminate the program with error code 1
    if (arraySize <= 0) {
        cout << "Invalid array size. Program will terminate." << endl;
        return 1;
    }

    // Allocate dynamic memory for the MovieData array using unique_ptr
    // unique_ptr automatically handles memory deallocation when it goes out of scope
    unique_ptr<MovieData[]> arrayPtr(new MovieData[arraySize]);

    // Output the memory address of the dynamically allocated array
    cout << "arrayPtr = " << dec << arrayPtr.get() << endl;

    // Populate the MovieData array with user input
    // Pass the raw pointer obtained from unique_ptr and the size of the array
    populateMovieDataArray(arrayPtr.get(), arraySize);

    // Display each movie's data along with its corresponding memory address
    displayMovieDataArray(arrayPtr.get(), arraySize);

    // Identify and retrieve the MovieData struct with the longest running time
    MovieData* longest_ptr = findLongestMovie(arrayPtr.get(), arraySize);

    // Display the full details of the longest movie in the array
    cout << "\nLongest Movie in list:" << endl;
    displayMovie(longest_ptr);

    // Display the running time of the longest movie using the Structure Pointer Operator (->)
    cout << "\nLongest Movie is: " << longest_ptr->running_time << " minutes long" << endl;

    // Notify that the dynamic array memory is being deallocated
    cout << "\nDELETING array at arrayPtr = " << arrayPtr.get() << endl;

    // Explicitly reset the unique_ptr to deallocate memory immediately
    // This is optional since unique_ptr would automatically release memory when main() ends
    arrayPtr.reset();

    // Indicate successful program termination
    cout << "Exit the program." << endl;
    return 0;
}

/*
    Displays a formatted welcome banner at the start of the program.
    The banner uses '=' characters for visual emphasis.
*/
void displayWelcomeBanner() {
    cout << setfill('=') << setw(42) << "" << endl;
    cout << setfill(' ')
         << "\tWelcome to the Movie Data Analyzer" << endl;
    cout << setfill('=') << setw(42) << "" << endl;
}
