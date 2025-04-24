#include <iostream>

using namespace std;

// lambda function

int helloChai()
{
}

int main()
{

    // lamda - nameless function , needed to end its entity becouse its treated like a own variable
    auto preparedChai = [](int cups)
    {
        cout << "Preparing " << cups << " cups of tea" << endl;
    };

    preparedChai(4);

    return 0;
}