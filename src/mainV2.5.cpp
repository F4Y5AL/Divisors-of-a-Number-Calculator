//------------By:Ighit Faysal-------------
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    unsigned long long sd,er,ed;
    int cv[2048],i,h,t;
    cout << "------------By:Ighit F4YSAL------V2.5-----[MAX:2^64]\n";
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
    if (h==0){cout<<i<<endl;cv[t]=i;
    t++;}
    }
    for (i=t-1;i>=0;i--){cout<<sd/cv[i]<<endl;}
    //cout <<sd<< endl;
    cout << "--------------------------\n\n\n";
    if (t==1){cout<<"*"<<sd<<"*:est premier.\n\n\n"<< endl;}
}

    return 0;
}
