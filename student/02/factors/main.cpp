#include <iostream>

using namespace std;

void Findfactors(int n)
{
    int smallest_factor = 0;
    for (int i = 1; i*i <= n; i++)
    {
        if (n%i == 0)
        {
            smallest_factor = i;
        }
    }
    cout << n << " " << "=" << " " << smallest_factor << " " << "*" << " " << n/smallest_factor << endl;
}

int main()
{
    cout << "Enter a positive number: ";
    int num = 0;
    cin >> num;

    if (num <= 0)
    {
        cout << "Only positive numbers accepted" << endl;
    }
    else
    {
        Findfactors(num);
    }

    return 0;
}
