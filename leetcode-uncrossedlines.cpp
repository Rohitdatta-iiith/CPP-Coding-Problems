#include<iostream>
#include<algorithm>
using namespace std;
void uncrossedlines(long long int A[],long long int B[],long long int M,long long int N){
    long long int dp[M+1][N+1];
    for(int i=0;i<=N;i++){
        dp[0][i]=0;
    }
    for(int i=0;i<=M;i++){
        dp[i][0]=0;
    }
    for(int i=1;i<=M;i++){
        for(int j=1;j<=N;j++){
            if(A[i-1]==B[j-1]){
                dp[i][j]=1+dp[i-1][j-1];
            }
            else{
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    cout<<dp[M][N]<<endl;
    return;


}
int main(){
    long long int A[1007];
    long long int B[1007];
    long long int M;
    long long int N;
    cin>>M;
    cin>>N;
    for(int i=0;i<M;i++){
        cin>>A[i];
    }
    for(int i=0;i<N;i++){
        cin>>B[i];
    }
    uncrossedlines(A,B,M,N);
    return 0;
}