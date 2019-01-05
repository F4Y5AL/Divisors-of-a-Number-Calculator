//------------By:Ighit Faysal-------------
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int sd,i,h,t,er,ed;
    cout << "------------By:Ighit Faysal------V2-----\n";
    while(1){
    cout << "Entrer un nombre:";
    cin>> sd;
    t=0;
    cout << "les diviseurs de "<<sd<<" sont:\n";
    cout << "--------------------------\n";
    er=round(sd/2)+1;
    for (i=1;i<er;i++)
    {
    h=sd%i;
    if(ed==sd/i){break;}
    ed=sd/i;
    if (h==0){cout <<i<< endl<<ed<<endl;
    t++;}
    }
    //cout <<sd<< endl;
    cout << "--------------------------\n\n\n";
    if (t==1){cout<<"*"<<sd<<"*:est premier.\n\n\n"<< endl;}
}

    return 0;
}
