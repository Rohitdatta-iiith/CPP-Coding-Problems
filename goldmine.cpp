//Problem statment is you are given a 2dimensional array a glodminer can start at any row only he can go right up right bottom or just rigt
//Dynamic programming is best solution for this..
//Bottum up fashion.Going each column once
#include<iostream>
using namespace std;
int Goldminer(int mat[4][4],int m,int n){
    int dp[m][n]={0};
    for(int i=0;i<=m-1;i++){
        dp[i][0]=mat[i][0];

    }
    for(int i=1;i<=n-1;i++){
        for(int j=0;j<m;j++){
            if(j==0){
                dp[j][i]=max(dp[j][i-1],dp[j+1][i-1]) + mat[j][i]; 
            }
            else if (
                j==m-1
            )
            {
                dp[j][i]=max(dp[j][i-1],dp[j-1][i-1])+mat[j][i];
            }
            else {
                dp[j][i] = max(dp[j][i-1],max(dp[j+1][i-1],dp[j-1][i-1]))+mat[j][i];
            }
            
        }
    }
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++)
        {
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }

    int max=dp[0][n-1];
    for(int i=0;i<m;i++){
        if(dp[i][n-1]>max)
        {
            max = dp[i][n-1];
        }
    

    }
    return max;
}
int main(){
    int mat[4][4]={
        {10,33,13,15},
        {22,21,4,1},
        {5,0,2,3},
        {0,6,14,2}
    };
    cout<<Goldminer(mat,4,4)<<endl;
}