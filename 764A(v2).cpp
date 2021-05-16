#include <iostream>
#include <sstream>
using namespace std;
int main() {
    string nmz;
    getline(cin,nmz);
    stringstream NMZ(nmz);
    int n,m,z;
    NMZ>>n>>m>>z;
    int counter=0;
    if(n==m){
        cout<<z/n<<endl;
    }
    else{
        for(int i=1;i<=z/m;i++){
            if((m*i)%n==0)
                counter++;
        }
        cout<<counter;
    }
    return 0;
}
