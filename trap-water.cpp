#include<iostream>
#include<algorithm>
using namespace std;
long long int trapwater(long long int arr[],long long int N){
    long long int left[N];
    long  long int right[N];
    long long int water=0;
    left[0]=arr[0];
    for(int i=1;i<N;i++){
        left[i]=max(left[i-1],arr[i]);
    }
    right[N-1]=arr[N-1];
    for(int i=N-2;i>=0;i--){
        right[i]=max(right[i+1],arr[i]);
    }
    for(int i=0;i<N;i++){
        water = water + (min(right[i],left[i])-arr[i]);
    }
    return water;

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
        cout<<trapwater(arr,N)<<endl;
    }
}
