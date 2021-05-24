#include <iostream>
#include <algorithm>
using namespace std;
int gcd(int num1,int num2) {
    int gcd;
    for (int i = 1; i <= num1 + num2; i++) {
        if ((num1 % i == 0)
            && (num2 % i == 0))
            gcd = i;
    }
    return gcd;
}
int main() {
    int y,w;
    cin>>y>>w;
       int reminder=(6-max(y,w)+1)%6;
       if(reminder==0)
           cout<<1<<"/"<<1<<endl;
       else
           cout<<reminder/ gcd(reminder,6)<<"/"<<6/ gcd(reminder,6)<<endl;


    return 0;
}
