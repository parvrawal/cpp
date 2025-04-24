#include <iostream>
#include <vector>

using namespace std;

class Chai
{
   // access modifiers
public:
   // data memebrs (attributes)
   string teaName;             // name of tea
   int servings;               // Number of servings
   vector<string> ingredients; // list of ingredients for the tea

   // Member function

   void displayChaiDetails()
   {
      cout << "Tea Name: " << teaName << endl;
      cout << "Servings: " << servings << endl;
      cout << "Ingredients: " ;
      for (string ingredient : ingredients)
      {
         cout  << ingredient << " " ;
      }

      cout << endl;
   }


};

int main()
{

   Chai chaiOne;

   chaiOne.teaName = "lemon tea";
   chaiOne.servings = 2;
   chaiOne.ingredients = {"Water", "lemon", "Honey", "tea"};

   chaiOne.displayChaiDetails();


   Chai chaiTwo;

   chaiTwo.teaName = "Masala Chai";
   chaiTwo.servings = 5;
   chaiTwo.ingredients = {"Water", "Milk", "Tea", "Ginger", "Masala"};

   chaiTwo.displayChaiDetails();

   return 0;
}