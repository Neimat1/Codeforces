#include <iostream>
using namespace std;
int main() {
   int a,b,totalTiredness=0,distance;
   cin>>a>>b;
   distance=abs(b-a);
   if(distance%2==0){
       distance/=2;
       for(int i=1;i<=distance;i++)
           totalTiredness+=i;
       totalTiredness*=2;

   }
    else{
       distance=(distance/2)+1;
        for(int i=1;i<=distance;i++)
            totalTiredness+=i;
        for(int i=1;i<=distance-1;i++)
            totalTiredness+=i;

    }
    cout<<totalTiredness<<endl;

    return 0;
}
