#include<iostream>
#include <sstream>
using namespace std;
int main(){
    int rank,currant_rank,final_rank;
    cin>>rank;
    int years_rank[rank];
    for(int i=1;i<rank;i++){
        cin>>years_rank[i];
    }
    cin>>currant_rank>>final_rank;
    int number_yaers=0;
    for(int i=currant_rank;i<final_rank;i++){
        number_yaers+=years_rank[i];

    }
    cout<<number_yaers<< endl;


    return 0;

}
