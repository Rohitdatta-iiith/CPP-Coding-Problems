//Hacker rank problem
#include<iostream>
#include<algorithm>
using namespace std;
void alice(int arr[],int N){
    if(N==1){
        cout<<1<<endl;
        return;
    }
    int l2r[N];
    int r2l[N];
    for(int i=0;i<N;i++){
        l2r[i]=1;
        r2l[i]=1;
    }
    //l to r
    for(int i=1;i<N;i++){
        if(arr[i]>arr[i-1]){
            l2r[i]=1+l2r[i-1];
        }
        
    }
    for(int i=N-2;i>=0;i--){
        if(arr[i]>arr[i+1]){
            r2l[i]=1+r2l[i+1];
        }
    }
    long long int sum=0;
    for(int i=0;i<N;i++){
        sum+=(max(l2r[i],r2l[i]));
    }
    cout<<sum<<endl;
    return;

}
int main(){
    int N;
    cin>>N;
    int arr[100007];
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    alice(arr,N);

}
