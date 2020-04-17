#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct MovieRecords {
    string MovieTitle;
    int MovieYear;
    string MovieRating;
};


int main() {
    string movietitle;
    int movieyear;
    string movierating;

    vector <MovieRecords> MovieList;

    MovieRecords movie;

    cout << "Hello! Please store your movie record! \n";

    char choice = 'y';
    while (tolower(choice == 'y')) {
        cout << "Enter a movie title: ";
        getline(cin, movietitle);
        cout << "Please enter the year the movie was released: ";
        cin >> movieyear;
        cout << "Enter the Leonard Maltin rating of the movie: ";
        cin >> movierating;

        movie.MovieTitle = movietitle;
        movie.MovieYear = movieyear;
        movie.MovieRating = movierating;

        MovieList.push_back(movie);

        cout << "Would you like to run the program again? Enter (y/n): ";
        cin >> choice;
        cin.ignore();
    }

    for (int i = 0; i < MovieList.size(); i++) {
        cout << "The name of the movie is " <<
             MovieList[i].MovieTitle << endl;
        cout << "The year of the movie is  " <<
             MovieList[i].MovieYear << endl;
        cout << "The Leonard Maltin rating is " <<
        MovieList[i].MovieRating << endl;
    }
    return 0;
}