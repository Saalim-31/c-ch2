#include <iostream>


using namespace std;

int main()
{ float dol,yen,pnd,frnc,deu;
cout<<"Enter the amount in dollar :- $";
cin>>dol;
cout<<"Amount in japanese Yen  = ¥ "<<dol/0.00955<<endl;
cout<<"Amount in British pound = £ "<<dol/1.487<<endl;
cout<<"Amount in French franc  = FF "<<dol/0.172<<endl;
cout<<"Amount in German deutschemark = € "<<dol/0.584<<endl;
    return 0;
}
