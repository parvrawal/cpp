 // parameter constructor
#include <iostream>
#include <vector>

 using namespace std;

 // constructor

 class Chai
 {
 public:
     string teaName;
     int servings;
     vector<string> ingredients;

     // parameter constructor
     Chai(string name, int serve, vector<string> ingr)
     {
         teaName = name;
         servings = serve;
         ingredients = ingr;
         cout << "Param Constructor Called " << endl;
     }

     void displayChaiDetails()
     {
         cout << "Tea Name: " << teaName << endl;
         cout << "Servings: " << servings << endl;
         cout << "Ingredients: ";
         for (string ingridient : ingredients)
         {
             cout << ingridient << " ";
         }
         cout << endl;
     }
 };

 int main()
 {
    
     Chai lemmonTea("Lemon Tea", 2, {"Water", "lemon", "Honey"});

     lemmonTea.displayChaiDetails();

     return 0;
 }