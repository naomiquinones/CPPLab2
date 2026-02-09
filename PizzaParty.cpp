#include <iostream>

using namespace std;

int main() {
    int numPeople;
    int slicesPerPizza;
    int slicesPerPerson;

    cout << "How many people are coming to the party? ";
    cin >> numPeople;

    cout << "How many slices are there per pizza? ";
    cin >> slicesPerPizza;

    cout << "How many slices do we expect each person to eat? ";
    cin >> slicesPerPerson;

    int slicesNeeded = numPeople * slicesPerPerson;
    int wholePizzas = slicesNeeded / slicesPerPizza;
    int additionalSlicesNeeded = slicesNeeded % slicesPerPizza;
    
    int totalPizzas = additionalSlicesNeeded ? wholePizzas + 1 : wholePizzas;
    int leftoverSlices = totalPizzas * slicesPerPizza - slicesNeeded;

    cout << endl;
    cout << "We'll need " << totalPizzas << " pizza" << (totalPizzas == 1 ? "" : "s") << " and " << additionalSlicesNeeded << " additional slice" << (additionalSlicesNeeded == 1 ? "" : "s") << "." << endl;
    cout << "There should be " << leftoverSlices << " slice" << (leftoverSlices == 1 ? "" : "s" ) << " left." << endl;
}