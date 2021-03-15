#include <iostream>
using namespace std;
int main() {
    int k_dollersForFirstBanana,n_hisDollers,w_NumberOfBananas,Borrow,sum=0;
    cin>>k_dollersForFirstBanana>>n_hisDollers>>w_NumberOfBananas;
    for(int i=1;i<=w_NumberOfBananas;i++)
        sum=sum+i*k_dollersForFirstBanana;
    Borrow=sum-n_hisDollers;
    if(Borrow<=0)
        cout << 0 << endl;
    else
    cout << Borrow << endl;
    return 0;
}
