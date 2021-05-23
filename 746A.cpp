#include <iostream>
using namespace std;
int main() {
    int a,b,c,TotalCompote=0,counter=0;
    cin>>a>>b>>c;
    int flag=1;
    while (flag){
        if(a>=1&&b>=2&&c>=4){
            a--;
            b=b-2;
            c=c-4;
            counter++;
        }
        else
            flag=0;
        if(a<=0||b<=0||c<=0)
            flag=0;
    }
    TotalCompote=7*counter;
    cout<<TotalCompote<<endl;


    return 0;
}
