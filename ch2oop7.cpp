#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d;
     int num,den;
    cout << " Enter the numerator of the first fractional part :- " << endl;
    cin>>a;
    cout << " Enter the denominator of the first fractional part :- " << endl;
    cin>>b;
    cout << " Enter the numerator of the second fractional part :- " << endl;
    cin>>c;
    cout << " Enter the denominator of the second fractional part :- " << endl;
    cin>>d;
    num=(a*d+b*c);
    den=b*d;
    cout << " sum is  :- " <<num<<"/"<<den ;



    return 0;
}
