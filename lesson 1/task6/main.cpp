#include <iostream>

using namespace std;

int main()
{
    int subnet;
    cout << "Enter subnet: 255.255.255.";
    cin >> subnet;
    switch(subnet){
        case 255: cout << "1"; break;
        case 254: cout << "2"; break;
        case 252: cout << "4"; break;
        case 248: cout << "8"; break;
        case 240: cout << "16"; break;
        case 224: cout << "32"; break;
        case 192: cout << "64"; break;
        case 128: cout << "128"; break;
        case 000: cout << "256"; break;
        default: cout << "***"; break;
    }

    return 0;
}
