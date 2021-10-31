#include <iostream>
#include <cmath>

using namespace std;

int main()
{
   double a,b,c,D,x1,x2;
   cout << "Write down the value of the number a:  ";
   cin >> a;
   cout << "Write down the value of the number b:  ";
   cin >> b;
   cout << "Write down the value of the number c:  ";
   cin >> c;
   D=b*b-4*a*c;
        if (D==0){
            cout << D;
        }
        if (D<0){
            cout << "There is no roots.....";
        }
        if (D>0){
                x1=( -1*b + sqrt(D) ) / (2 * a);
                x2=( -1*b - sqrt(D) ) / (2 * a);
                cout << "First root: " ;
                cout << x1 << endl;
                cout << "Second root: ";
                cout << x2;
   }
    return 0;
}
