#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    long long int N;
    long long int arr[57];
    //using namespace std
    cin>>N;
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    sort(arr,arr+N);
    long long int i = N-3;
    while(i>=0 && arr[i]+arr[i+1]<=arr[i+2]){
        i--;

    }
    if(i>=0){
        cout<<arr[i]<<" "<<arr[i+1]<<" "<<arr[i+2]<<endl;
    }
    else{
        cout<<-1<<endl;
    }
}