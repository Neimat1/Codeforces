#include <iostream>
using namespace std;
int main() {
    int k,n,s,p;
    cin>>k>>n>>s>>p;
    int totalSheetsPerPerson=1,totalPacks=1;
    if(n>s){
        if((n%s==0))
        totalSheetsPerPerson=(n/s);
        else
            totalSheetsPerPerson=(n/s)+1;
    }
    int totalSheets=totalSheetsPerPerson*k;
    if(totalSheets>p){
        if((totalSheets%p==0))
            totalPacks=(totalSheets/p);
        else
            totalPacks=(totalSheets/p)+1;
    }
    cout<<totalPacks<<endl;

    return 0;
}
