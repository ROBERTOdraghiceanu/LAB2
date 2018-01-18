#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a,b,c;
    int x1,x2,delta,preal,pimag,fct1;

    cout<<"Introduceti coeficientii functiei de gradul al doilea:";
    cout<<endl;

    cout<<"Introduceti coeficientul a:";
    cin>>a;

    cout<<endl;

    cout<<"Introduceti coeficitentul b:";
    cin>>b;

    cout<<endl;

    cout<<"Introduceti coeficientul c:";
    cin>>c;

    cout<<endl;

    if(a==0){

        cout<<"Ecuatia este de gradul intai!";
        fct1=(-c)/b;
        cout<<"x="<<fct1;

    }

    else{

        delta=(b*b) - (4*a*c);

        if(delta >= 0 ){

            cout<<"Radacini reale: ";
            cout<<endl;
            cout<<endl;

            x1=((-b) + sqrt(delta))/(2*a);
            x2=((-b) - sqrt(delta))/(2*a);

            cout<<"x1="<<x1;
            cout<<endl;
            cout<<"x2="<<x2;
            cout<<endl;

        }

        else{

            cout<<"Radacini complexe:";
            cout<<endl;
            cout<<endl;

            delta=-delta;

            preal=(-b)/(2*a);
            pimag=sqrt(delta)/(2*a);

            cout<<"x1="<<preal<<"+i*"<<pimag;
            cout<<endl;
            cout<<"x2="<<preal<<"-i*"<<pimag;
            cout<<endl;
        }

    }

    return 0;
}
