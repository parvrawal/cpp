 #include <iostream>
 #include <vector>

 using namespace std;

 class Chai{
    private:
        string teaName;
        int servings;
        vector<string> ingredients;
        
        
    public:
        Chai(){
            teaName = "Unknow tea";
            servings = 1;
            ingredients = {"Water", "tea leaves" };
        }

        Chai(string name, int serve, vector<string> ingr){
            teaName = name;
            servings = serve;
            ingredients = ingr;
        }


        // getter
        string getTeaName(){
            return teaName;
        }

        // setter
        void setTeaName(string name){
            //logic
            teaName = name;
        }

        // getter for serving

        int getServings(){
            return servings ;
        }

        // setter for servings
        void setServings(int serve){
            servings = serve;
        }


        //getter for ingre
        vector<string> getIngredients(){
            return ingredients;
        }

        // setter for ingre
        void setIngredients(vector<string> ingre){
            ingredients = ingre;
        }

        void displayChaiDetails(){
            cout << "Tea Name: " << teaName << endl;
            cout << "Servings: " << servings << endl;
            cout << "Ingredientss: ";
            for(string ingridient : ingredients) {
                cout << ingridient << " ";
            }

            cout << endl;
        }
 };


 int main(){
    Chai chai;
    chai.setTeaName("Ginger tea");
   
 }