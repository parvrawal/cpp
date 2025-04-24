 #include <iostream>

 using namespace std;

 int main(){

    int cups;

    cout << "Enter the number of cups you have \n";
    cin >> cups;

    if (cups > 20){
        cout << "You will get a GOLD badge" << endl;
    } else if (cups >= 10 && cups <= 20)
    {
       cout << "You will get a Silver budge" << endl;
    }else {
        cout << "No BADGE for you" << endl;
    }
    


    return 0;
 }