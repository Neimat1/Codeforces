#include <iostream>
using namespace std;
int main() {
      int a1,a2,a3,b1,b2,b3,n;
      cin>>a1>>a2>>a3;
      cin>>b1>>b2>>b3;
      cin>>n;
      int totalCups=a1+a2+a3;
      int totalMedals=b1+b2+b3;
      if(totalCups>=5){
            n-=(totalCups/5);
            totalCups%=5;

      }
      if(totalCups<5&&totalCups!=0){
            n--;
            totalCups=0;
      }
      if(totalMedals>=10){
            n-=(totalMedals/10);
            totalMedals%=10;

      }
      if(totalMedals<10 &&totalMedals!=0){
            n--;
            totalMedals=0;

      }
     if(totalCups==0&&totalMedals==0&&n>=0)
        cout<<"YES"<<endl;
     else
        cout<<"NO"<<endl;
     return 0;
}
