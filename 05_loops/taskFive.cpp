#include <iostream>
#include <string>

using namespace std;

// continous memory location
int main()
{
    string teaTypes[5] = { "Oolong Tea", "Orange Tea" ,
        "Green Tea", "Black Tea", "Lemon Tea"};

    for (int i = 0; i < 5; i++)
    {
        if (teaTypes[i] == "Green Tea")     
        {
            cout << "Skipping the " << teaTypes[i] << endl;
            continue;
        }
        
        cout << "Brewing " << teaTypes[i] << "..." << endl;
    }

    return 0;
}