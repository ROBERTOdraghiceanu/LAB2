#include <iostream>

using namespace std;

int main()
{
    int contor,n,maxim,minim,vct[100];

    cout<<"Introduceti numarul de numere din vector:" ;
    cin>>n;

    cout<<endl;

    cout<<"Introduceti elementele vectorului:";
    cout<<endl;
    for( contor=1 ; contor<+n ; contor++){

        cout<<"vct["<<contor<<"]=";
        cin>>vct[contor];

    }

    maxim=vct[1];
    minim=vct[1];

    for( contor=2 ; contor<=n ; contor++ ){

        if( vct[contor] > maxim ){

            maxim=vct[contor];

        }

        if( vct[contor] < minim ){

            minim=vct[contor];

        }
    }

    cout<<endl;

    cout<<"Maximul este:";
    cout<<maxim;
    cout<<endl;
    cout<<"Minimul este:";
    cout<<minim;

    return 0;
}
