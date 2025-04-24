#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <iterator>
#include <string>

using namespace std;

struct Employee
{
    int id;
    string name;
    double salary;
};

// &first give us address and &end give us reference
/*
“In C++, &call means you're taking the address of call, like when assigning it to a pointer.
On the other hand, call& is used in declarations, like function parameters, to mean call is a reference — not a copy.”

🧾 Example:

int* ptr = &call; → address of call

void func(int& call) → call is a reference parameter


*/
void displayEmployee(const Employee &emp)
{
    cout << "ID: " << emp.id << " , Name: " << emp.name << " , Salary: $" << emp.salary << endl;
}

int main(){

    vector<Employee> employees = {
        {101, "luffy", 100000},
        {102, "zoro", 30000},
        {103, "sanji", 50000},
        {104, "nami", 60000},
        {105, "usoop", 700000},

    };


    sort(employees.begin(), employees.end(), [](const Employee& e1, const Employee& e2 ){
 
        return  e1.salary > e2.salary;
    } );

    cout << "Employees sorted by salary -> Highest to lowest \n";

    for_each(employees.begin(), employees.end(), displayEmployee );

    vector<Employee> highEarners;

    copy_if(
        employees.begin(),
         employees.end(), 
         back_inserter(highEarners),
          [](const Employee& e){
        return e.salary > 50000;
    });

    cout << "Employees who are high earners \n";
    for_each(highEarners.begin(), highEarners.end(), displayEmployee);

  double totalSalary =   accumulate(employees.begin(), employees.end(), 0.0, [](double sum, const Employee& e){
        return sum + e.salary;
    });

    //average salary

    double averageSalary = totalSalary / employees.size();

 auto heighestPaid =  max_element(employees.begin(), employees.end(), [](const Employee& e1, const Employee& e2){
            return e1.salary < e2.salary;
    });

    return 0;
}
