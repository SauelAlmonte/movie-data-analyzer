/*
    Implementation File for the MovieData Analyzer program (Lab 11a - Structures).

    This file contains the definitions of all functions declared in the MovieData.h specification file:
    - displayMovie
    - populateMovieDataArray
    - displayMovieDataArray
    - findLongestMovie

    Each function is responsible for handling specific operations related to
    the MovieData structure, including input, output, display formatting,
    and finding the longest movie.
*/

#include <iostream>
#include <limits>
#include "MovieData.h"

using namespace std;

/*
    Displays the details of a single MovieData record.
    Parameters:
    - movie_ptr: Pointer to the MovieData struct to display.

    -- Simpler Explanation:
    This function prints all the information about one movie.
*/
void displayMovie(const MovieData *movie_ptr) {
    cout << "\tTitle       : " << movie_ptr->title << endl;
    cout << "\tDirector    : " << movie_ptr->director << endl;
    cout << "\tReleased    : " << movie_ptr->year_released << endl;
    cout << "\tRunning Time: " << movie_ptr->running_time << " minutes" << endl;
}

/*
    Populates the MovieData array with user input.
    Parameters:
    - arrayPtr: Pointer to the start of the MovieData array.
    - arraySize: Total number of movies to input data for.

    -- Simpler Explanation:
    This function loops through each movie slot in the array, prompting the user
    to enter the movie's title, director, year released, and running time.
*/
void populateMovieDataArray(MovieData *arrayPtr, int arraySize) {
    // Loop through the array indices from 0 to arraySize - 1
    for (int i = 0; i < arraySize; i++) {

        // Prompt the user to enter the movie title for the current movie at index i of the MovieData array
        cout << "\nEnter Title " << i << ": ";

        // Reads a full line of text from the user and assigns it to the 'title' member
        // of the MovieData struct located at the pointer subscript arrayPtr[i]
        getline(cin, arrayPtr[i].title);

        // Prompt the user to enter the director's name for the current movie at index i
        cout << "Enter Director " << i << ": ";

        // Reads a full line of text from the user and assigns it to the 'director' member
        // of the MovieData struct located at the pointer subscript arrayPtr[i]
        getline(cin, arrayPtr[i].director);

        // Prompt the user to input the year the movie was released for the current movie at index i
        cout << "Enter Year Released " << i << ": ";

        // Reads an integer from the user and assigns it to the 'year_released' member
        // of the MovieData struct located at the pointer subscript arrayPtr[i]
        cin >> arrayPtr[i].year_released;

        // Prompt the user to input the running time of the movie in minutes for index i
        cout << "Enter running time (minutes) " << i << ": ";

        // Reads a double value from the user and assigns it to the 'running_time' member
        // of the MovieData struct located at the pointer subscript arrayPtr[i]
        cin >> arrayPtr[i].running_time;

        // Clear any remaining newline character in the input buffer
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
}

/*
    Displays each movie in the MovieData array along with its memory address.
    Parameters:
    - arrayPtr: Pointer to the start of the MovieData array.
    - arraySize: Number of movies in the array.

    -- Simpler Explanation:
    This function loops through the array and for each movie,
    it shows the memory address of the struct in hexadecimal format,
    then displays the movie details.
*/
void displayMovieDataArray(const MovieData *arrayPtr, int arraySize) {
    // Loop through each index of the MovieData array using subscript i
    for (int i = 0; i < arraySize; i++) {

        // Display the memory address of the current MovieData element
        // followed by its index in the array
        cout << dec << &arrayPtr[i] << ":  arrayPtr[" << i << "] =" << endl;
        // Call the displayMovie function, passing the address of the MovieData struct at array_ptr[i]
        // This outputs the details of the movie stored at the current subscript of the pointer
        displayMovie(&arrayPtr[i]);

        // Output a blank line for readability between movie entries
        cout << endl;
    }
}

/*
    Identifies and returns a pointer to the MovieData struct with the longest running time.
    Parameters:
    - arrayPtr: Pointer to the start of the MovieData array.
    - arraySize: Number of movies in the array.

    Return:
    - A pointer to the MovieData struct within the array that has the longest running time.

    -- Simpler Explanation:
    This function searches through the array to find the movie with the longest running time
    and returns its memory address so it can be used elsewhere.
*/
MovieData* findLongestMovie(MovieData *arrayPtr, const int arraySize) {

    // If the array size is zero, there are no movies to process,
    // so return nullptr to indicate no valid MovieData was found
    if (arraySize == 0) {
        return nullptr;
    }

    // Initialize longest_ptr to point to the first MovieData struct in the array
    // This is our starting assumption for the longest running time
    MovieData* longest_ptr = &arrayPtr[0];

    // Loop through the array starting from index 1 (since index 0 is already the initial longest)
    for (int i = 1; i < arraySize; i++) {

        // Compare the running_time of the MovieData struct at arrayPtr[i]
        // with the running_time of the current longest_ptr.
        // arrayPtr[i] uses subscript on a pointer, longest_ptr uses the Structure Pointer Operator (->)
        if (arrayPtr[i].running_time > longest_ptr->running_time) {

            // If the current movie's running_time is greater, update longest_ptr
            // to point to the MovieData struct at arrayPtr[i]
            longest_ptr = &arrayPtr[i];
        }
    }

    // Return the pointer to the MovieData struct with the longest running time
    return longest_ptr;
}
