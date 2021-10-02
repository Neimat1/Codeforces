#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;
int triangleNumber,n;

int main(){
    cin>>triangleNumber;
    n=(int)sqrt(triangleNumber*2);
    if((n*(n+1))==(triangleNumber*2))
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}
