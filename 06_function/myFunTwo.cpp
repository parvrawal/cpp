#include <iostream>
#include <string>

using namespace std;

// Pass by value and Pass by Refrence  - pass by value which changed on you're side and does not affect orignal but pass by refrence also affect to the orignal

void pourChai(int cups)
{
    cups = cups + 5;
  cout << "Poured cups:  " << cups << endl;
}

int main()
{

    int chaiCups = 2;
    pourChai(chaiCups);  // copy of the orignal value

    cout << "Total cups are " << chaiCups << endl;

    return 0;
}