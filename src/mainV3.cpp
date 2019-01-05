//------------By:Ighit Faysal-------------
#include <iostream>
#include <fstream>
#include <math.h>

using namespace std;

int main()
{
    //int_fast64_t
    unsigned long long sd,er,ed;
    int cv[2048],i,h,t;
    ofstream file;
    file.open ("Log.txt", ios::out | ios::app );
    cout << "------------By:Ighit F4YSAL------V2.5-----[MAX:2^64]\n";
    file << "------------By:Ighit F4YSAL------V2.5-----[MAX:2^64]\n";
    while(1){
    cout << "Entrer un nombre:";
    file << "Entrer un nombre:";
    cin>> sd;
    file <<sd<<endl;
    t=0;
    cout << "les diviseurs de "<<sd<<" sont:\n";
    file << "les diviseurs de "<<sd<<" sont:\n";
    cout << "--------------------------\n";
    file << "--------------------------\n";
    er=round(sd/2)+1;
    for (i=1;i<er;i++)
    {
    h=sd%i;
    if(ed==sd/i){break;}
    ed=sd/i;
    if (h==0){cout<<i<<endl;cv[t]=i;file<<i<<endl;
    t++;}
    }
    for (i=t-1;i>=0;i--){cout<<sd/cv[i]<<endl;file<<sd/cv[i]<<endl;}
    //cout <<sd<< endl;
    cout << "--------------------------\n\n\n";
    file << "--------------------------\n\n\n";
    if (t==1){cout<<"*"<<sd<<"*:est premier.\n\n\n"<< endl;file <<"*"<<sd<<"*:est premier.\n\n\n"<< endl;}
}

    return 0;
}
