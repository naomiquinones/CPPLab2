#include <iostream>
using namespace std;

int main() {
    int userInt;
    cout << "Type your favorite integer ";

    cin >> userInt;

    int result = (((userInt * 2) + 10) / 2) - userInt;

    cout << "Your magic number is... " << result << "!" << endl;

    return 0;
}