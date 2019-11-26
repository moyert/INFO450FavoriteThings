#include <iostream>
#include "BeerList.hpp"
using namespace std;

int main()
{

    cout << "\t\t    ------------------------------------" << endl;
    cout << "\t\t    |---- ADD YOUR FAVORITE BEERS  ----|" << endl;
    cout << "\t\t    ------------------------------------" << endl;

    BeerList myBeerList;
    bool addBeer = true;

    do
    {
        char option;
        myBeerList.addBeer();
        if (myBeerList.getCollectionSize() >= 100)
        {
            addBeer = false;
            break;
        }
        cout << "\t\t    ---------------------------------------------------" << endl;
        cout << "\t\t    |---- Would you like to add another beer? (Y/N)  --|" << endl;
        cout << "\t\t    ---------------------------------------------------" << endl;

        cin >> option;
        cout << endl;
        
        if (option == 'Y' || option == 'y')
        {
            cout << endl;
            cout << "\t\t    -------------------------------------------" << endl;
            cout << "\t\t    |--------- ADDING BEER TO THE LIST  -------|" << endl;
            cout << "\t\t    -------------------------------------------" << endl;
            addBeer = true;
        }
        else
        {
            addBeer = false;
        }
    } while (addBeer == true);

    myBeerList.printList();
    system("pause");
    return 0;
}
