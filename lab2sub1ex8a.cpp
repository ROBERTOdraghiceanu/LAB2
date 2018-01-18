#include <iostream>

using namespace std;

int main()
{
    int age,MovieLength;

    cout<<"Please type the age of the customer:";
    cin>>age;

    cout<<"Please type the length of the movie";
    cin>>MovieLength;

    if( ( age<17 ) && ( MovieLength<90 )){

        cout<<"DISCOUNT APPLIES";

    }

    else{

        cout<<"NO DISCOUNT";

    }
    return 0;
}
