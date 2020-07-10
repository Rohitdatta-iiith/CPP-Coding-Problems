#include<iostream>
#include<algorithm>
using namespace std;
void zigzag(long long int arr[],long long int N){
    long long int flag=1;
    for(int i=0;i<N-1;i++){
        if(flag%2==1){
            if(arr[i]>arr[i+1]){
                swap(arr[i],arr[i+1]);
            }
            flag++;
        }
        else{
            if(arr[i]<arr[i+1]){
                swap(arr[i],arr[i+1]);
            }
            flag++;
        }

    }
}
int main(){
    long long int T;
    long long int N;
    long long int arr[107];
    cin>>T;
    while(T--){
        cin>>N;
        for(int i=0;i<N;i++){
            cin>>arr[i];
        }
        zigzag(arr,N);
        for(int i=0;i<N;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
}