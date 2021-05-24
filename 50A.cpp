#include <iostream>
using namespace std;
int main() {
    int m,n;
    cin>>m>>n;
    if(m==2)
        cout<<n<<endl;
    else if(m>2){
        cout<<(n*m)/2<<endl;
    }

    else
        cout<<n/2<<endl;

    return 0;
}
