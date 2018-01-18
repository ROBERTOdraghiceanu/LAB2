#include <iostream>

using namespace std;

int main()
{
    int bani[6]={100,50,20,10,5,1};
    int monede[4]={50,20,5,1};
    int contor;
    int numar_bani;

    float suma;
    int suma_monede;

    cout<<"Introduceti suma de bani:";
    cin>>suma;

    cout<<"Pentru a schimba suma de bani se vor folosi urmatoarele bancnote:";
    cout<<endl;

    numar_bani=0;

    for( contor=0 ; contor<6 ; contor++ ){

        numar_bani=suma/bani[contor];

        cout<<numar_bani<<" bancnote de "<<bani[contor];
        cout<<endl;

        suma=suma-( numar_bani*bani[contor] );

        numar_bani=0;

    }

    cout<<endl;
    cout<<"Si urmatoarele monede:";
    cout<<endl;

    suma_monede=suma*100;

    for( contor=0 ; contor<4 ; contor++ ){

        numar_bani=suma_monede/monede[contor];

        cout<<numar_bani<<" monede de "<<monede[contor];
        cout<<endl;

        suma_monede=suma_monede-( numar_bani*monede[contor] );

        numar_bani=0;

    }

    return 0;
}
