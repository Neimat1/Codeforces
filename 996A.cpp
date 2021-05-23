#include <iostream>
using namespace std;
int main() {
          int flag=1,minBills=0;
          long n;
          //1, 5, 10, 20, 100
        cin>>n;
        if(n>=100){
            minBills+=n/100;
            n%=100;
        }
        if(n<100 && n>=20){
            minBills+=n/20;
            n%=20;
        }
        if(n<20 && n>=10){
            minBills+=n/10;
            n%=10;
        }
        if(n<10 && n>=5){
            minBills+=n/5;
            n%=5;
        }
        if(n<5 && n>=1){
            minBills+=n/1;
        }

        cout<<minBills<<endl;

    return 0;
}
