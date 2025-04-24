 #include <iostream>

 using namespace std;   
 ///pointers

 // for declaring pointer use * and 

 // in memmory the reference present in int type thats why we have write int
 int* prepareChaiOrders(int cups){
     //  for locating in dynamic memory use "new" keyword
    int* orders = new int(cups);
    for (int i = 0; i < cups; i++)
    {
        orders[i] = (i + 1) * 10;
    }
    return orders;
    // pointer can not store whole array location  so what it do its point on the starting of the array where it is started
 }
 
 int main(){
     int cups = 5;
    int* chaiOrder =  prepareChaiOrders(cups);

    for (int i = 0; i < cups; i++)
    {
        cout << "Cops: " << i + 1 << " has " << chaiOrder[i] << " ml" << endl;
    }
    
    // for deleting in memory - dynamic / heep
    delete[] chaiOrder;

    return 0;
 }