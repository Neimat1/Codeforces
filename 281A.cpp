#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    string word;
    cin>>word;
    if((int)(word[0])>=97)
       word[0] =int(word[0])-32;
    cout<<word<<endl;
    return 0;
}
