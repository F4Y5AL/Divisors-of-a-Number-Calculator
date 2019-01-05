//------------By:Ighit Faysal-------------
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int sd,i,h,t;
    cout << "------------By:F4Y5AL-------------\n";
    while(1){
    cout << "Entrer un nombre:";
    cin>> sd;
    t=0;
    cout << "les diviseurs de "<<sd<<" sont:\n";
    cout << "--------------------------\n";
    for (i=1;i<sd+1;i++)
    {
    h=sd%i;
    if (h==0){cout <<i<< endl;
    t++;}
    }
    cout << "--------------------------\n\n\n";
    if (t==2){cout<<"*"<<sd<<"*:est premier.\n\n\n"<< endl;}
}

    return 0;
}
