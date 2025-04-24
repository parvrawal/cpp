 #include <iostream>

 using namespace std;

 // array means - continuous memory alocation 
 int main(){

   int chaiTemperature[5] = {85, 90, 88, 92, 89};

   cout << "Chai temperature: \n";
   for (int i = 0; i < 5; i++)
   {
      cout << chaiTemperature[i] << " degree C \n";
   }
   

    return 0;
 }