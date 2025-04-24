// returnType functionName(parameters){
//     function body
// }

// void - in c++ means empty nothing going to return

#include <iostream>
#include <string>

using namespace std;

int checkTemperature(int temperature)
{
    return temperature;
}

// declaration and defination
void makeChai()
{
    cout << "Boiling water, adding tea leaves, straining...";
}

// declaration of function
void serveChai(int cups );

// function overlaoding... in function name can be same and how it chosse which function to use... through the parameter if the parameter is int it will use int parameter function.

void serveChai(string teaType = "Masala Tea") // default paramter which you made here
{
    int cups = 4; // its called Formal Parameter which you declared under the function 
    cout << "Serving " << teaType << endl;
}

void serveChai(int cup, int tealeaves){}

int main()
{
    int temp = checkTemperature(50);
    // cout << temp;
    // makeChai(); // calling a function
    // serveChai(3); // actual paramter which you are passing here
    serveChai(); // default paramter when you did not provides any parameter it will assume that the function where you have define and gave paramter will take as a default
    return 0;
}

// defination of functiom
void serveChai(int cups)
{
    cout << "Serving " << cups << " of chai";
}
