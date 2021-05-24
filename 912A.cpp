#include <iostream>
using namespace std;
int main() {
   long long a,b,x,y,z;
   cin>>a>>b>>x>>y>>z;
   long long total=min(min((a-(x*2+y)),(b-(3*z+y))),(a-(x*2+y))+(b-(3*z+y)));
   if(total>0)
       cout<<0<<endl;
   else
    cout<<abs(total)<<endl;
    return 0;
}
