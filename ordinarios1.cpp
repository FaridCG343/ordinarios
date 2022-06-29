#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int ordinarios(int n,int com=10,int sum=0, string div="1"){
    int x=stoi(div);
    if(n<com){
        return sum + floor(n/x);
    }
    return ordinarios(n, com*10,sum+9,div+"1");
}
int main(int argc, char const *argv[])
{
    int tC,num;
    cin>>tC;
    while(tC--){
        cin>>num;
        cout<<ordinarios(num)<<endl;
    }
    return 0;
}

