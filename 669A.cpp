#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
  int n ;
  cin>>n;
if(n%3==0)
    cout<<(n/3)*2<<endl;
else
    cout<<(n/3)*2+1<<endl;
    return 0;
}
