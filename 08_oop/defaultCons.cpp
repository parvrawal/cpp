 #include <iostream>
 #include <vector>

 using namespace std;

 // constructor

 class Chai{
public:
    string teaName;
    int servings;
    vector<string> ingredients;
   
    // default constructor
    Chai(){
        teaName = "Unknow Tea";
        servings = 1;
        ingredients = {"Water", "Tea leaves"};
        cout << "Constructor Called " << endl;
    }

    void displayChaiDetails(){
        cout << "Tea Name: " << teaName << endl;
        cout << "Servings: " << servings << endl;
        cout << "Ingredients: " ;
        for (string ingridient: ingredients){
            cout << ingridient << " ";
        }
        cout << endl;
       
    }
 };


 int main(){
  // whenever you create object the constructor automatically called 
    Chai defaultChai;
// when you don't have any constructor it will automatically created by c++ compilar 
  defaultChai.displayChaiDetails();
   

    return 0;
 }