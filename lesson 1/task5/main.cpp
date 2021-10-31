#include <iostream>

using namespace std;

int main()
{
    int a;
    cout << "Enter starship weight: ";
    cin >> a;
    a=((a/3)-2)*300;
    cout << "THis amount of fuel " << a << " You need to travel for 300 years";
    return 0;
}
