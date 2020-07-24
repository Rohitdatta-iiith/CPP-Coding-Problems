#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
void samantha(string S){
    long long int mod = 1000000007;
    long long int dp[200007];
    long long int l;
    l = S.length();
    long long int val=0;
    dp[0]=int(S[0])-48;
    if(l==1){
        cout<<dp[0]<<endl;
        return;
    }
    for(int i=1;i<l;i++){
        dp[i]=(((dp[i-1]*10)%mod)+((i+1)*(int(S[i])-48))%mod)%mod;
    }
    for(int i=0;i<l;i++){
        val=((val%mod)+(dp[i]%mod))%mod;
    }
    cout<<val<<endl;
    return;
}
int main(){
    string S;
    cin>>S;
    samantha(S);
    return 0;
}