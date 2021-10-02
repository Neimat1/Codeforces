#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;
int n;

int main(){
    cin>>n;
    n-=10;
    if(n<=0 )
        cout<<0<<endl;
    else if(n<10 && n>0  )
        cout<<4<<endl;
    else if(n==10)
        cout<<15<<endl;
    else if( n==11)
        cout<<4<<endl;
    else
        cout<<0<<endl;

    return 0;
}
