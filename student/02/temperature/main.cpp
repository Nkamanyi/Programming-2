#include <iostream>

using namespace std;

int main()
{
    cout << "Enter a temperature: ";
    int temperature = 0;
    cin >> temperature;
    cout << temperature <<" degrees Celsius is " << (temperature*1.8)+32 <<" degrees Fahrenheit" << endl;
    cout << temperature <<" degrees Fahrenheit is " << (temperature-32)/1.8 <<" degrees Celsius" << endl;
    // Write your code here

    return 0;
}
