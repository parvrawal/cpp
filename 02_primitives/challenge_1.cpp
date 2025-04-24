#include <iostream>
#include <string>

using namespace std;

/* Challenge 1:
Tea Information Display Write a program that declares variable to store the type of tea, its price per kilogram (float), and ita rating (char). Use data types effectively and price them in  a formatted output using escape sequences

HINT:  use \n for new lines and " to quote the name.
*/

// int main()
// {

//     string teaType;
//     float pricePerKilogram = 124.80;
//     char rating;

//     cout << "Tea Information" << "\n";
//     cout << "Provide which tea would you like to take \n";
//     getline(cin, teaType);
//     cout << "Good choice\n";
//     cout << "The price of \"" << teaType << " per kilogram is " << pricePerKilogram << " \n";
//     cout << "Would you like to give us rating for our service \n";
//     cin >> rating;
//     cout << "Thanks For Givind us " << rating << " rating. Please Vist Again\n";

//     return 0;
// }

/* Challenge 2:
Modify tea price create a program where the user inputs a base price for tea. use type casting to increase the price by 10% and display the rounded  new price using explicit casting.

HINT: Use both float and int types, and demonstrate type casting.

*/

// int main()
// {
//      float userBasedPrice;

//      cout << "Please enter the price \n";
//      cin >> userBasedPrice;

//      float incressePrice = userBasedPrice * 1.10; // the resone behind using 1.10 is it will add 10% extra to 100% value (orginal value)
//      int newPrice = (int)(incressePrice + 0.5);   // 0.5 used becouse of making it round figure

//      cout << "The price after 10% interest is " << newPrice;

//      return 0;
// }

/* Challenge 3:
Favorite tea input write a program that takes the user's favorite tea as input using getline and also asks how many cups of tea they want using cin. Display the result in a fun message.


HINT: Combine cin and getline carefully to avoid input issues.

*/

int main(){

     string userFavTea;
     int quantity;

     cout << "Write  your favourite Tea \n";
     getline(cin, userFavTea);

     cout << "How many cups of tea would you like to \n";
     cin >> quantity;

     cout << "Displaying Information Provided by user \n";
     cout << "Your Favourite Tea is  " << userFavTea  << "\n";
     cout <<"Quantity " << quantity  << "\n"; 



     return 0;
}
