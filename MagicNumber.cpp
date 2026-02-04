#include <iostream>
using namespace std;

int main() {
    int user_int;
    cout << "Type your favorite integer ";

    cin >> user_int;

    int result = (((user_int * 2) + 10) / 2) - user_int;

    cout << "Your magic number is... " << result << "!" << endl;
}