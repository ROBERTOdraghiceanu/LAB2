#include <iostream>

using namespace std;

int main()
{
    int elevi[100],contor,nr_elevi,trecut,elevi_sub_8,procent;

    cout<<"Introduceti numarul de elevi:";
    cin>>nr_elevi;
    cout<<endl;

    trecut=1;

    cout<<"Introduceti notele elevilor:";
    cout<<endl;

    for( contor=1 ; contor<=nr_elevi ; contor++){

        cout<<"Elevul "<<contor<<" a obtinut nota: ";
        cin>>elevi[contor];

    }

    for( contor=1 ; contor<=nr_elevi ; contor++){

        if( elevi[contor]<5 ){

            trecut=0;

        }

        if( elevi[contor]<8 ){

            elevi_sub_8++;

        }

    }

    if(trecut){

        cout<<"Toti elevii au trecut";

    }

    else{

        cout<<"Nu toti eleveii au trecut";

    }

    procent=(elevi_sub_8*100)/nr_elevi;

    cout<<endl;

    cout<<"Procentul de elevi care au obtinut nota sub 8 este:";
    cout<<procent;

    return 0;
}
