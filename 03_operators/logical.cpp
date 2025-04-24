#include <iostream>

using namespace std;

int main()
{

    bool isStudent;
    int cups;

    cout << "Are you a student (1 for yes and 0 for No) ? " << endl;
    cin >> isStudent;
    cout << "How many cups of tea have you purchased ?" << endl;
    cin >> cups;

    if (
        isStudent || cups > 15)
    {
        cout << "You are elegible for a discount" << endl;
    }
    else
    {
        cout << "You are NOT elegible for a discount " << endl;
    }

    return 0;
}