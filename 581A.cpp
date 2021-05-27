#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a,b;
    cin >>a>>b;
    int maxDifferent=min(a,b);
    int maxSame=abs(a-b)/2;
    cout<<maxDifferent<<" "<<maxSame<<endl;

    return 0;
}
