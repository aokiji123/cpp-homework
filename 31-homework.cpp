#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Movie
{
  string title;
  unsigned int releaseYear;
  unsigned int rating;
  vector<string> directors;
  vector<string> authors;
  vector<string> genres;
  vector<string> comments;

  void setTitle(string title)
  {
    this->title = title;
  }
  void setReleaseYear(int releaseYear)
  {
    this->releaseYear = releaseYear;
  }
  void setRating(int rating)
  {
    this->rating = rating;
  }
  void setDirectors(vector<string> directors)
  {
    this->directors = directors;
  }
  void setAuthors(vector<string> authors)
  {
    this->authors = authors;
  }
  void setGenres(vector<string> genres)
  {
    this->genres = genres;
  }
  void setComments(vector<string> comments)
  {
    this->comments = comments;
  }

  string getTitle()
  {
    return title;
  }
  int getReleaseYear()
  {
    return releaseYear;
  }
  int getRating()
  {
    return rating;
  }
  vector<string> getDirectors()
  {
    return directors;
  }
  vector<string> getAuthors()
  {
    return authors;
  }
  vector<string> getGenres()
  {
    return genres;
  }
  vector<string> getComments()
  {
    return comments;
  }

  Movie creatingNewMovie()
  {
    Movie movieInfo;
    string title;
    int releaseYear, rating, number1, number2, number3, number4;

    cout << "Please, enter title of movie: ";
    cin >> title;
    movieInfo.setTitle(title);

    cout << "Please, enter release year of movie: ";
    cin >> releaseYear;
    movieInfo.setReleaseYear(releaseYear);

    cout << "Please, enter rating (from 0 to 5) of movie: ";
    cin >> rating;
    movieInfo.setRating(rating);

    cout << "Please, enter number of directors: ";
    cin >> number1;
    vector<string> directors(number1);
    for (int i = 0; i < number1; i++)
    {
      cout << "Please, enter " << i + 1 << " director: ";
      cin >> directors[i];
    }
    movieInfo.setDirectors(directors);

    cout << "Please, enter number of authors: ";
    cin >> number2;
    vector<string> authors(number2);
    for (int i = 0; i < number2; i++)
    {
      cout << "Please, enter " << i + 1 << " author: ";
      cin >> authors[i];
    }
    movieInfo.setAuthors(authors);

    cout << "Please, enter number of genres: ";
    cin >> number3;
    vector<string> genres(number3);
    for (int i = 0; i < number3; i++)
    {
      cout << "Please, enter " << i + 1 << " genre: ";
      cin >> genres[i];
    }
    movieInfo.setGenres(genres);

    cout << "Please, enter number of comments: ";
    cin >> number4;
    vector<string> comments(number4);
    for (int i = 0; i < number4; i++)
    {
      cout << "Please, enter " << i + 1 << " comment: ";
      cin >> comments[i];
    }
    cout << "\n";
    movieInfo.setComments(comments);

    return movieInfo;
  }

  void showAllFilms(Movie films[], int size)
  {
    for (int i = 0; i < size; i++)
    {
      cout << "Film: " << i + 1 << "\n";

      cout << "Title: " << films[i].getTitle() << "\n";

      cout << "Release date: " << films[i].getReleaseYear() << "\n";

      cout << "Rating: " << films[i].getRating() << " ⭐"
           << "\n";

      cout << "Directors: ";
      for (int j = 0; j < films[i].getDirectors().size(); j++)
      {
        cout << films[i].getDirectors()[j] << ", ";
      }
      cout << "\n";

      cout << "Authors: ";
      for (int j = 0; j < films[i].getAuthors().size(); j++)
      {
        cout << films[i].getAuthors()[j] << ", ";
      }
      cout << "\n";

      cout << "Genres: ";
      for (int j = 0; j < films[i].getGenres().size(); j++)
      {
        cout << films[i].getGenres()[j] << ", ";
      }
      cout << "\n";

      cout << "Comments: ";
      for (int j = 0; j < films[i].getComments().size(); j++)
      {
        cout << films[i].getComments()[j] << ", ";
      }
      cout << "\n"
           << "\n";
    }
  }
};

int main()
{
  int size;
  cout << "How many movies? ";
  cin >> size;
  Movie *films = new Movie[size];
  for (int i = 0; i < size; i++)
  {
    films[i] = films[i].creatingNewMovie();
  }
  films->showAllFilms(films, size);
  delete[] films;
}