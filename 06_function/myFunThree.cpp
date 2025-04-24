 #include <iostream>
 #include <string>

 using namespace  std;

 int globalChaiStock = 100;
 // pass by refreance
   

 //to make it change orignal value - meant converting into pass by reference you just need to add & thats all 
 void pourChai(int &cups){
    cups = cups + 5;
    cout << "Poured cups: " << cups << endl;
 }

//  {

//  } in here scoop spilling does not happens

 int main(){

    int cups = 2;
    pourChai(cups);
    cout << "Total cups are " << cups << endl;

    return 0;
    
 }