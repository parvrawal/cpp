 #include <iostream>

 using namespace std;

//  two dimensional array

 int main(){
 // first bracket for how many raws [left to right] and second bracket for how many colume
    int chaiSales[3][7] = {
        {50, 60, 55, 70, 65, 80, 75}, // Shop 1 sales for 7 days
        {40, 55, 60, 65, 70, 80, 90}, // Shop 2 sales for 7 days
        {45, 50, 55, 60, 65, 70, 75} // Shop 3 sales for 7 days
    };


    for (int i = 0; i < 3; i++)
    {
        cout << "I am at shop: " << i+1 << endl;

        for (int j = 0;j < 7; j++)
        {
            cout << chaiSales[i][j] << " cups" << endl;
        }
        
    }
    
    return 0;
 }