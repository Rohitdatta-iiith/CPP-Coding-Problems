#include<iostream>
#include<algorithm>
using namespace std;
long long int Equilibrium(long long int arr[],long long int N){
    if(N==1){
        return 1;
    }
    long long int sum =0;
    for(int i=0;i<N;i++){
        sum = sum + arr[i];
    }
    long long int leftsum =0;
    //long long int rightsum=0;
    //cout<<sum<<endl;
    for(int i=0;i<N;i++){
        
        sum=sum-arr[i];
        //cout<<sum<<endl;;
        //cout<<leftsum<<endl;
        if(sum == leftsum){
            return i+1;
        }
        leftsum = leftsum+arr[i];
    }
    return -1;
}
int main(){
    long long int T;
    long long int N;
    long long int arr[1000007];
    cin>>T;
    while(T--){
        cin>>N;
        for(int i=0;i<N;i++){
            cin>>arr[i];
        }
        cout<<Equilibrium(arr,N)<<endl;
    }
}