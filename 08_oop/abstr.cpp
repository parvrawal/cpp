#include <iostream>
#include <string>

using namespace std;

// abstract class - in here there will not be any implitatiob instead it will have template / blueprint
class Tea
{
public:
    // if you see virtual keyword thats mean it is abstract class
    virtual void prepareIngredients() = 0; // pure virtual function
    virtual void brew() = 0;               // pure virtual function
    virtual void serve() = 0;              // pure virtual function

    void makeTea()
    {
        prepareIngredients();
        brew();
        serve();
    }
};

// derived class - override

class GreenTea : public Tea
{
public:
    void prepareIngredients() override
    {
        cout << "green leaves and water is ready" << endl;
    }

    void brew() override
    {
        cout << "Green Tea brewed" << endl;
    }

    void serve() override
    {
        cout << "Green Tea served" << endl;
    }
};

class MasalaTea : public Tea
{
public:
    void prepareIngredients() override
    {
        cout << "green leaves and water is ready along with masala" << endl;
    }

    void brew() override
    {
        cout << "Masala Tea brewed" << endl;
    }

    void serve() override
    {
        cout << "Masala Tea served" << endl;
    }
};

int main()
{

    GreenTea greenTea;
    MasalaTea masalaTea;

    greenTea.makeTea();
    masalaTea.makeTea();
}

//abstraction means somethings hidden from you any only shows which needed