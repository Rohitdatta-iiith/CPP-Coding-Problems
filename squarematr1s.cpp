//Find no.of square matrices containing only one 
//given matrix consists of only ones and zeros
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main(){
    int arr[107][107];
    int dp[107][107];
//    int M=3;
  //  int N=3;
  int M;
  int N;
    cin>>M;
    cin>>N;
    for(int i=0;i<M;i++){
        for(int j=0;j<N;j++){
            cin>>arr[i][j];
        }
    }
    int count = 0;
    for(int i=0;i<N;i++){
        if(arr[0][i]==1){
        dp[0][i]=1;}
        else 
        {
            dp[0][i]=0;
        }
    }
    for(int i=0;i<M;i++){
        if(arr[i][0]==1){
        dp[i][0]=1;}
        else 
        {
            dp[i][0]=0;
        }
    }
    for(int i=1;i<M;i++){
        for(int j=1;j<N;j++){
            if(arr[i][j]==1){
            dp[i][j]=1+(min(min(dp[i-1][j],dp[i][j-1]),dp[i-1][j-1]));}
            else{ 
            dp[i][j]=0;}
        }
    }
    for(int i=0;i<M;i++){
        for(int j=0;j<N;j++){
            count+=dp[i][j];
        }

    }
    cout<<count<<endl;
    return 0;

    
}


