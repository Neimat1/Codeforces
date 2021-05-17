#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int d1,d2,d3,distance1,distance2,distance3;
    cin>>d1>>d2>>d3;
    distance1=d1+d2+d3;
    distance3=d2*2+d1*2;
    distance2=( min(d1,d2)+d3)*2;
    cout<<min(distance1,min(distance3,distance2))<<endl;
     return 0;
}
