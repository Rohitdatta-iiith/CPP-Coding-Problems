// we have given a die roll consiting of 6 dies and we have to find #ways that a particular sum can occur
//sum value here is 28
//reccurence relation is f(n,m)=f(n-1,m-1)+f(n-1,m-2)+f(n-1,m-3)+f(n-1,m-4)+f(n-1,m-5)+f(n-1,m-6)
#include<iostream>
using namespace std;
int possibleways(int n,int m){
    int dp[6][28]={0};
    for(int i=0;i<=27;i++){
        if(i>=6){
            dp[0][i]=0;

        }
        else{
            dp[0][i]=1;
        }

    }
    for(int i=1;i<=5;i++){
        for(int j=0;j<28;j++){
            if(j==0){
                dp[i][j]=0;
            }
            else if(j==1){
                dp[i][j]=dp[i-1][j-1];

            }
            else if(j==2){
                dp[i][j]=dp[i-1][j-1]+dp[i-1][j-2];

            }
            else if(j==3){
                dp[i][j]=dp[i-1][j-1]+dp[i-1][j-2]+dp[i-1][j-3];

            }
            else if(j==4){
                dp[i][j]=dp[i-1][j-1]+dp[i-1][j-2]+dp[i-1][j-3]+dp[i-1][j-4];

            }
            else if(j==5){
                dp[i][j]=dp[i-1][j-1]+dp[i-1][j-2]+dp[i-1][j-3]+dp[i-1][j-4]+dp[i-1][j-5];

            }
            else {
                dp[i][j]=dp[i-1][j-1]+dp[i-1][j-2]+dp[i-1][j-3]+dp[i-1][j-4]+dp[i-1][j-5]+dp[i-1][j-6];

            }
            


        }
    }
    return dp[5][27];

}
int main(){
    int n=6;//no.of dies participating in the random experiment
    int m = 28;//sum to be 28
    int answer = possibleways(n,m);//answer stores number of possible ways in which we can store 
    cout<<answer<<endl;
    }