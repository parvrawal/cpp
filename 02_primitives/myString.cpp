 #include <iostream>
 #include <string>

 using namespace std;

 int main(){
    string favoriteTea = "Lemon Tea \t";


    //   \n means new line 
    // \t gives tab 
    string description = "known as \"best\" tea";
// / escape operator to ignore
    cout << favoriteTea << description << endl;
// escape sequence 
    return 0;
 }