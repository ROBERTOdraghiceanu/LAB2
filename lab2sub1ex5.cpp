#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int cerinta;

    cout<<"Introduceti cerinta:";
    cin>>cerinta;

    switch(cerinta){

        case 1:{

            cout<<"Conversia numarului citit din baza 10 in baza 2";
            cout<<endl;

            int n10,n2,p10,aux;

            cout<<"Introduceti numarul in baza 10:";

            cin>>n10;
            aux=n10;

            n2=0;
            p10=1;

            while( n10!=0 ){

                n2=n2+p10*(n10%2);
                p10=p10*10;
                n10=n10/2;

            }

            cout<<"Numarul "<<aux<<" in baza 2 este: ";
            cout<<n2;

            break;

        }

        case 2:{

            cout<<"Conversia numarului citit din baza 2 in baza 10:";
            cout<<endl;

            int n2,n10,p2,aux;

            cout<<"Introduceti numarul in baza 2:";

            cin>>n2;
            aux=n2;

            n10=0;
            p2=1;

            do{

                n10=n10+(n2%10)*p2;
                p2=p2*2;
                n2=n2/10;

            }while(n2!=0);

            cout<<"Numarul "<<aux<<" in baza 10 este: ";
            cout<<n10;

            break;
        }

        case 3:{

            cout<<"Determinati numerele prime mai mici decat un numar introdus";
            cout<<endl;

            int n,contor,div,este_prim;

            cout<<"Introduceti numarul:";
            cin>>n;

            for( contor=1 ; contor<n ; contor++ ){

                este_prim=1;

                for( div=2 ; div<=sqrt(contor) ; div++){

                    if( contor%div==0 ){

                        este_prim=0;

                    }

                }

                if( este_prim==1 ){

                    cout<<contor<<" ";

                }

            }

            break;

        }

        default:{

            cout<<"Ati introdus gresit!";

        }

    }
    return 0;
}
