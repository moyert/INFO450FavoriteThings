#include <iostream>
#include <string>
#include "Beer.hpp"
using namespace std;
//default constructor
Beer::Beer()
{
    name = " ";
    brewery = " ";
    type = " ";
    abv = 0;
    rating = 0;
}
// All the getters and setters for our 5 variables
string Beer::getName()
{
    return name;
}

string Beer::getBrewery()
{
    return brewery;
}
string Beer::getType()
{
    return type;
}
double Beer::getAbv()
{
    return abv;
}
int Beer::getRating()
{
    return rating;
}
void Beer::setName(string n)
{
    name = n;
}
void Beer::setBrewery(string b)
{
    brewery = b;
}
void Beer::setType(string t)
{
    type = t;
}
void Beer::setAbv(double a)
{
    abv =a;
}
void Beer::setRating(int r)
{
    rating = r;
}
//This is how we collect the data for anew entry
void Beer::getBeer()
{
    cin.clear();
    cin.ignore();

    cout << "\n\Enter beer name: ";
    getline(cin, name);

    cout << "\n\nEnter brewery: ";
    getline(cin, brewery);

    cout << "\n\nEnter type: ";
    getline(cin, type);

    cout << "\n\nEnter abv : ";
    cin >> abv;

    cout << "\n\nEnter your favorite beer rating: ";
    cin >> rating;


    cout << "\t\t    ----------------------------------------------------------" << endl;
    cout << "\t\t    |---- YOUR DATA HAS BEEN STORED INTO THE APPLICATION ----|" << endl;
    cout << "\t\t    ----------------------------------------------------------" << endl;
}
//This is our display for the
ostream& operator<< (ostream&o, const Beer& beer)
{
    o << "\t\t    -------------------------------------------------" << endl;
    o << "\t\t    |--------------- YOUR FAVORITE BEERS:  ---------|" << endl;
    o << "\t\t    |                   **************              |" << endl;
    o << "\t\t    |                     ********                  |" << endl;
    o << "\t\t    |                       ****                    |" << endl;
    o << "\t\t    |      Brand: " << beer.name <<     "\t\t       |" << endl;
    o << "\t\t    |      Brewery: " << beer.brewery <<     "\t\t    |" << endl;
    o << "\t\t    |      Type: " << beer.type << "\t\t         |" << endl;
    o << "\t\t    |      ABV: " << beer.abv <<     "\t\t        |" << endl;
    o << "\t\t    |      Rating: " << beer.rating <<   "\t\t      |" << endl;
    o << "\t\t    |                       ****                    |" << endl;
    o << "\t\t    |                     ********                  |" << endl;
    o << "\t\t    |                   **************              |" << endl;
    o << "\t\t    -------------------------------------------------" << endl;

    return o;
}
