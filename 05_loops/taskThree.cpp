 #include <iostream>
#include <string>

using namespace std;

int main(){

    int teaCups;
    cout << "How many cup of tea would you like to make: ";
    cin >> teaCups;

    for (int  i = 1; i <= teaCups; i++)
    {
        cout << "Brewing cup " << i << " of tea..." << endl;
    }

    cout << "Outside of loop";
    

    return 0;
}