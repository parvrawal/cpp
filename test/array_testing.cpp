 #include <iostream>
#include <string>

 using namespace std;


 int main(){

 string teaType[4] = {
    "Masala Tea", "Oolong Tea", "Orange Tea", "Lemon Tea"
 };

 

 for(string teaLists : teaType){
    cout << teaLists << " " << endl;
 }




    return 0;
 }