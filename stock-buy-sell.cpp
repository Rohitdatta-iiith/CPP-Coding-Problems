#include<iostream>
#include<algorithm>
using namespace std;
void stock(long long int arr[],long long int N){
    long long int start;
    long long int end;
    long long int j;
    j=0;
    long long int k;
    k=0;
    for(int i=0;i<N-1;i++){
        if(arr[i]>=arr[i+1]){
            k++;
        }
    }
    if(k==N-1){
        cout<<"No profit"<<endl;
        return;
    }
    for(int i=0;i<N;i++){
        if(arr[i+1]>arr[i] && i<N-1){
            if(j==0){
            start=i;}
            j++;
        }
        if(j!=0){
            end = start +j;
        }
        if(arr[i+1]<arr[i] && j!=0 && i<N-1){
            cout<<"("<<start<<" "<<end<<")"<<" ";
            j=0;
        }
        if(end == N-1 && i<N-1){
          cout<<"("<<start<<" "<<end<<")"<<" ";

        }
        
    }
    cout<<endl;
}
int main(){
    long long int T;
    long long int N;
    long long int arr[1005];
    cin>>T;
    while(T--){
        cin>>N;
        for(int i=0;i<N;i++){
            cin>>arr[i];
        }
        stock(arr,N);
    }
}