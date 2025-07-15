#ifndef MOVIEDATA_H
#define MOVIEDATA_H
/*
    Specification File for the MovieData Analyzer program (Lab 11a - Structures).

    Defines:
    - The MovieData struct: encapsulates movie-related metadata.
    - Function prototypes for operations on MovieData, including:
        * displayMovie
        * populateMovieDataArray
        * displayMovieDataArray
        * findLongestMovie
*/
#include <string>
using namespace std;

/*
    Data Structure Declaration:
    ---------------------------
    The MovieData struct is a user-defined data structure that groups
    metadata attributes / member variables for a single movie record.

    It qualifies as a Plain Old Data (POD) type — optimized for efficient
    memory storage and simple data handling, with no embedded behavior.

    Fields include textual (title, director) and numerical (year_released, running_time)
    data, explicitly typed for safety and clarity.

    -- Simpler Explanation:
    This struct stores all details about a movie — title, director,
    release year, and running time — as one data package.
*/
struct MovieData {
    string title;            // Movie title descriptor (e.g., "Inception")
    string director;         // Director's full name (e.g., "Christopher Nolan")
    int year_released;       // Year the movie was released (e.g., 2010)
    double running_time;     // Duration of the film in minutes (e.g., 148.0)
};

/*
    Function Prototypes:
    ---------------------
    These are function prototypes that declare operations
    on the MovieData structure. Each function follows the single-responsibility
    principle and uses pointers for efficient memory access.

    -- Simpler Explanation:
    These functions handle tasks like showing movie details,
    collecting user input, listing all movies, and identifying the longest movie.
*/

/*
    Displays the details of a single MovieData record.
    Parameters:
    - moviePtr: Pointer to the MovieData struct to display.

    -- Simpler Explanation:
    This function prints all the information about one movie.
*/
void displayMovie(const MovieData *moviePtr);

/*
    Populates an array of MovieData structs with user input.
    Parameters:
    - arrayPtr: Pointer to the start of the MovieData array.
    - arraySize: Number of movies to populate.

    -- Simpler Explanation:
    This function asks the user for details to fill each movie in the list.
*/
void populateMovieDataArray(MovieData *arrayPtr, int arraySize);

/*
    Displays each movie in the MovieData array along with its memory address.
    Parameters:
    - arrayPtr: Pointer to the start of the MovieData array.
    - arraySize: Number of movies in the array.

    -- Simpler Explanation:
    This function lists each movie, shows its memory address, and prints its details.
*/
void displayMovieDataArray(const MovieData *arrayPtr, int arraySize);

/*
    Identifies and returns a pointer to the MovieData struct
    with the longest running time in the array.
    Parameters:
    - arrayPtr: Pointer to the start of the MovieData array.
    - arraySize: Number of movies in the array.

    Return:
    - Pointer to the MovieData with the longest running time.

    -- Simpler Explanation:
    This function finds the longest movie and returns its memory address
    so we can display its details later.
*/
MovieData* findLongestMovie(MovieData *arrayPtr, int arraySize);

#endif
