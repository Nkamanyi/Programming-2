#include <iostream>

using namespace std;

int main()
{
    cout << "How many numbers would you like to have? ";
    int num = 0;
    cin >> num;

    int i;
    for (i = 1; i <= num; ++i)
    {
        if ((i%7 == 0) && (i%3 == 0))
        {
            cout << "zip boing" << endl;
        }
        else if (i%3 == 0)
        {
            cout << "zip" << endl;
        }
        else if (i%7 == 0)
        {
            cout << "boing" << endl;
        }
        else
        {
            cout << i << endl;
        }
    }

    // Write your code here

    return 0;
}
