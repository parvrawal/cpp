#include <iostream>

using namespace std;

/*
Challenge 1: Arithmetic Operators

Write a program that calculates the price of tea packs. A user enters the number of tea packs they want, and the price per pack. Apply a 10% tax to the total price and display the final cost.
*/

// int main()
// {
//     int teaPacks;
//     int perPackPrice;

//     cout << "Enter the number of tea pack do you want " << endl;
//     cin >> teaPacks;

//     cout << "Enter the price for per pack " << endl;
//     cin >> perPackPrice;

//     int totallyPrice = teaPacks * perPackPrice;
//     int finalPrice = totallyPrice * 1.10;

//     cout << "After applaying \"10% tax\" your final cost is " << totallyPrice << endl;

//     return 0;
// }

/*
Challenge 2: Assignment Operators

Create a program where the user inputs the number of tea bags they have. If the number is less than 20, give them 10 extra bags using the += assignment operator. Display the updated total.
*/

// int main()
// {

//     int teaBags;

//     cout << "Enter the number of Tea Bags you have " << endl;
//     cin >> teaBags;

//     if (teaBags < 20)
//     {
//         teaBags += 10;
//         cout << "Updated value of your Tea Bags: " << teaBags << endl;
//     }
//     else
//     {
//         cout << "Total number of your Tea Bags: " << teaBags << endl;
//     }
// }

/*
Challenge 3: Relational and Logical Operators

A tea subscription service offers a discount if the user buys more than 12 cups or if they are a member for more than a year. Write a program that checks if the user qualifies for a discount based on their input.
*/

// int main()
// {

//     int cups;
//     int userMemberOf;

//     cout << "How many cups would you like to buy " << endl;
//     cin >> cups;

//     cout << "How many months are you member of Tea Subscription Service ? " << endl;
//     cin >> userMemberOf;

//     if (cups > 12 || userMemberOf > 12)
//     {
//         cout << "You are eligible for discount" << endl;
//     }
//     else
//     {
//         cout << "You are not eligible for discount " << endl;
//     }

//     return 0;
// }

/*
Challenge 4: Bitwise Operators
Write a program that uses bitwise AND (&) to check which tea types are in stock. The stock is encoded in an integer (1 for Green, 2 for Black, 4 for Oolong). Allow the user to check availability by inputting the tea type (1, 2, or 4), and display a message saying whether that tea is in stock or not.
*/



// Define constants for tea types
const int GREEN_TEA = 1;  // 0001
const int BLACK_TEA = 2;  // 0010
const int OOLONG_TEA = 4; // 0100

int main()
{
    int stock = 5; // Example stock (e.g., Green and Oolong: 0101)
    int teaType;

    cout << "Tea Types:\n";
    cout << "1 - Green Tea\n";
    cout << "2 - Black Tea\n";
    cout << "4 - Oolong Tea\n";
    cout << "Enter the number for the tea type you want to check: ";
    cin >> teaType;

    if (teaType != GREEN_TEA && teaType != BLACK_TEA && teaType != OOLONG_TEA)
    {
        cout << "Invalid tea type selected.\n";
        return 1;
    }

    if (stock & teaType)
    {
        cout << "That tea is in stock.\n";
    }
    else
    {
        cout << "Sorry, that tea is not in stock.\n";
    }

    return 0;
}
