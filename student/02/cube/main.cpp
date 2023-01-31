#include <iostream>

using namespace std;

int main()
{
    cout << "Enter a number: ";
    int num = 0;
    cin >> num;

    int cube = num * num * num;

    if (cube < num or cube < 0)
    {
        cout << "Error! The cube of " << num << " is not " << cube << "." << endl;
    }
    else
    {
     cout << "The cube of " << num << " is " << cube << "." << endl;
    }
    return 0;
}
