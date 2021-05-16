#include <iostream>
#include <sstream>
using namespace std;
int main() {
    string nmz;
    getline(cin,nmz);
    stringstream NMZ(nmz);
    int n,m,z;
    NMZ>>n>>m>>z;
    int temp_m=m,temp_n=n,counter=0;
    for(int i=1;i<=z;i++){

        if(i==temp_n){
            if(temp_n==temp_m){
                counter++;
            }
            temp_n+=n;
        }
        if(i==temp_m){
            temp_m+=m;
        }


    }
    cout<<counter<<endl;
    return 0;
}
