#include <iostream>
#include <algorithm>
using namespace std;
int main() {

    int QAQTotal=0, QAQBefore=0,QAQ=0,QAQAfter;
    string word;
    cin >>word;
    for(int i=0;i<word.length();i++)
        if(word[i]=='Q')
            QAQTotal++;

    for(int i=0;i<word.length();i++){
        if(word[i]=='A'){
            for(int j=0;j<i;j++){
                if(word[j]=='Q')
                    QAQBefore++;
            }
           QAQAfter=QAQTotal-QAQBefore;
            QAQ+=QAQBefore*QAQAfter;
            QAQBefore=0;

        }
    }
    cout << QAQ <<endl;
    return 0;
}
