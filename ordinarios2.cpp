#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main(int argc, char const *argv[])
{
    int tC,div=0,numO;
    string num;
    cin>>tC;
    while(tC--){
        div=0;
        cin>>num;
        for (int i = 0; i<num.length();i++){
            div=div*10+1;
        }
        numO=9*(num.length()-1)+floor(stoi(num)/div);
        cout<<numO<<endl;
    }
    return 0;
}

