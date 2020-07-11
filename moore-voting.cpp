#include<iostream>
#include<algorithm>
using namespace std;
long long int check(long long int arr[],long long int N,long long int candidate){
    long long int count =0;
    for(int i=0;i<N;i++){
        if(arr[i]==candidate){count++;}

    }
    if(count>N/2){
        return candidate;
    }
    return -1;
}
long long int moore(long long int arr[],long long int N){
    long long int candidate;
    long long int count;
    count =1;
    candidate=arr[0];
    for(int i=1;i<N;i++){
        if(arr[i]!=candidate){
            count--;
        }
        else{
            count++;
        }
        if(count == 0){
            candidate=arr[i];
            count++;
        }

    }
   return check(arr,N,candidate);
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
        cout<<moore(arr,N)<<endl;

    }

}