#include <iostream>
using namespace std;
int main() {
    int x;
    cin>>x;
    int counter=0;
    int flag= 5;
    while (true){
        if (flag==0)
            break;
        if(x/flag){
            counter+=x/flag;
            x=x%flag;
            continue;
        }
        else{
            flag--;
            continue;
        }
    }
    cout << counter << endl;
    return 0;
}
