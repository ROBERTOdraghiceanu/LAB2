#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int num,div,este_prim;

    cout<<"Introduceti numarul:";
    cin>>num;

    este_prim=1;

    for( div=2 ; div<=sqrt(num) ; div++){

        if( num%div==0 ){

            este_prim=0;
            break;

        }

    }

    if( este_prim ){

        cout<<"Numarul introdus este prim";

    }

    else{

        cout<<"Numarul introdus nu este prim";

    }
    return 0;
}
