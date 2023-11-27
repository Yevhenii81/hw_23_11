#include <iostream>
#include <cctype>
#include <string>
using namespace std;

struct Film
{
    string title;
    string direction;
    string genres;
    float popularityRatting;
};

void searchByTitle(Film films[], int size, const string& title)
{
    bool found = false;
    for (int i = 0; i < size; i++)
    {
        if (films[i].title == title)
        {
            cout << "Title: " << films[i].title << "\n";
            cout << "Director: " << films[i].direction << "\n";
            cout << "Genres: " << films[i].genres << "\n";
            cout << "Popularity raiting: " << films[i].popularityRatting << "\n";
            found = true;
            break;
        }
    }
    if (!found)
    {
        cout << "Film with title " << title << " not found\n";
    }
}

void searchByGenre(Film films[], int size, const string& genre)
{
    bool found = false;
    for (int i = 0; i < size; i++)
    {
        if (films[i].genres == genre)
        {
            cout << "Title: " << films[i].title << "\n";
            cout << "Director: " << films[i].direction << "\n";
            cout << "Genres: " << films[i].genres << "\n";
            cout << "Popularity raiting: " << films[i].popularityRatting << "\n";
            found = true;
            //break;
        }
    }
    if (!found)
    {
        cout << "Film with genres " << genre << " not found\n";
    }
}

int main()
{
    //setlocale(0, "");
    const int SIZE = 3;
    Film films[SIZE] = {
        {"Остров проклятых", "Мартин Скорсезе", "Драма, Триллер, Мистика", 9},
    };

    string userTitle;
    string userGenres;

    cout << "Input title: ";
    getline(cin, userTitle);

    cout << "Input genre: ";
    getline(cin, userGenres);

    searchByTitle(films, SIZE, userTitle);
    searchByGenre(films, SIZE, userGenres);

}
