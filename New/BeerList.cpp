#include <iostream>
#include <fstream>
#include <string>
#include "BeerList.hpp"

BeerList::BeerList()
{
    beerCollection = 0;
}
//This ensures that there is no dulpicate entries
bool BeerList::findBeer(Beer beer)
{
    for (int i = 0; i < beerCollection; i++)
    {
        if (beer.getName() == beerList[i].getName())
        {
            cout << "Beer " << beerList[i].getName() << " already exist in the application!" << endl;
            cout << "Please enter a different name" << endl;
            cout << endl;
            return false;
        }
    }
    return true;
}
//explains how to add another items to the array for our list
int BeerList::addBeer()
{
    Beer addNewBeer;
    addNewBeer.getBeer();
    if (findBeer(addNewBeer))
    {
        beerList[beerCollection] = addNewBeer;
        beerCollection++;
            return 0;
            }
            else
            {
                return MAXBEER;
            }
        }


int BeerList::getCollectionSize()
{
    return beerCollection;
}
//displays the list that we are forming
void BeerList::printList()
{
    for (int i = 0; i < beerCollection; i++)
    {
        cout << beerList[i];
    }
}
