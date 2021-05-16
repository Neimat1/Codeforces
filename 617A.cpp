#include <iostream>
using namespace std;
int main() {
    int x,counter=0;
    cin>>x;

    while (x>=5){
        x-=5;
        counter++;
    }
    if(x>0)
        counter++;
    cout<<counter<<endl;
    return 0;
}
