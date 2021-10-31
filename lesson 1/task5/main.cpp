#include <iostream>

using namespace std;

int main()
{
    int a=0;
    int b=0;
    cout << "Enter starship weight: ";
    cin >> a;
    cout << "Enter number of years you are going to travel: ";
    cin >> b;
    a=((a/3)-2)*b;
    cout << "THis amount of fuel " << a << " You need to travel for " << b << " years";
    return 0;
}
