//longestcommonsubstring
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int lcs(string s1,string s2){
    int dp[7][7];
    for(int i=0;i<7;i++){
        dp[0][i]=0;
        dp[i][0]=0;
    }
    int ans = 0;
    for(int i=1;i<=6;i++){
        for(int j=1;j<=6;j++){
            if(s1[i-1]==s2[j-1]){
                dp[i][j]=1+dp[i-1][j-1];
                ans = max(dp[i][j],ans);

            }
            else
            {
            dp[i][j]=0;
            ans = max(dp[i][j],ans);
            }
            
        }

    }
return ans;
}
int main(){
    string s1="ABCDGH";
    string s2="ACDGHR";
    //cout<<LCSubstring(s1,s2);
    cout<<lcs(s1,s2)<<endl;
}