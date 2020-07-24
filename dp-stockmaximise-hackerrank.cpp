#include<iostream>
#include<algorithm>
using namespace std;
void stockmaximize(long long int arr[],long long int N){
    if(N==1){
        cout<<0<<endl;
        return;
    }
    long long int maxval[50007];
    maxval[N-1]=arr[N-1];
    for(int i=N-2;i>=0;i--){
        maxval[i]=max(maxval[i+1],arr[i]);

    }
    long long int profit=0;
    for(int i=0;i<N;i++){
        if(maxval[i]-arr[i]>0){
            profit+=(maxval[i]-arr[i]);
        }
    }
    cout<<profit<<endl;
    return;
}
int main(){
    long long int arr[50007];
    long long int T;
    long long int N;
    cin>>T;
    while(T--){
        cin>>N;
        for(int i=0;i<N;i++){
            cin>>arr[i];
        }
        stockmaximize(arr,N);

    }
}