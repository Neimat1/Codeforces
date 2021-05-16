#include <iostream>
using namespace std;
int main() {
    int w,k,n,cost=0;
   cin>>k>>n>>w;
   for(int i=1;i<=w;i++){
       cost+=i*k;
   }
   if(cost>n)
       cout<<cost-n<<endl;
   else
       cout<<0<<endl;
    return 0;
}
