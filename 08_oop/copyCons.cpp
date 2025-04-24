 //Copy constructor - if you want to copy the value which in constructor

#include <iostream>
#include <vector>

 using namespace std;

 

 class Chai
 {
 public:
     string* teaName;
     int servings;
     vector<string> ingredients;

     // parameter constructor
     Chai(string name, int serve, vector<string> ingr)
     {
         teaName = new string(name);
         servings = serve;
         ingredients = ingr;
         cout << "Param Constructor Called " << endl;
     }
        // deepcopy
        // used const becouse we want to copy the first constructor and want to restrict that no one able to modify any value in copy constructor
        Chai( const Chai& other){
            teaName = new string(*other.teaName);
            servings = other.servings;
            ingredients = other.ingredients; 
            cout << "Copy constructor called" << endl;
        }


     // destructor
     ~Chai(){
        delete teaName;
        cout << "Destructor called" << endl;
     }

     void displayChaiDetails()
     {
         cout << "Tea Name: " << *teaName << endl;
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

    //  lemmonTea.displayChaiDetails();

     // copy the object
    Chai copiedChai = lemmonTea;
    // copiedChai.displayChaiDetails();

    *lemmonTea.teaName = "Modified Lemon tea";

    cout << "Lemon Tea--------" << endl;
    lemmonTea.displayChaiDetails();
    cout << "Copied Tea------" << endl;
    copiedChai.displayChaiDetails();

     return 0;
 }