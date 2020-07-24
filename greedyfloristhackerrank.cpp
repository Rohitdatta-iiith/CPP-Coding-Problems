#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    long long int N;
    long long int arr[107];
    long long int K;
    cin>>N;
    cin>>K;
    long long int sum=0;
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    if(K>=N){
        for(int i=0;i<N;i++){
            sum+=arr[i];
        }
        cout<<sum<<endl;
        return 0;
    }
    sort(arr,arr+N,greater<long long int>());
    long long int a=N/K;
    if(N%K!=0){
     //   i+i+1;
     a++;
    }
    long long int j=0;
    sum=0;
    long long int x;
    for(int i=0;i<N;i++){
        if((i+1)%K==0){
            x=(i+1)/K;
        }
        else{
            x=((i+1)/K)+1;
        }



        sum=sum+arr[i]*x;
    }
    cout<<sum<<endl;
    return 0;


    

}
