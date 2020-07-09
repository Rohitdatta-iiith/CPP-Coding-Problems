//kadane's algo for maximum sub array sum
#include<iostream>
#include<algorithm>
#include<limits>
using namespace std;
long long int kadane(long long int arr[],long long int N){
    long long int max_so_far=INT64_MIN;
    long long int max_ending_here =0;
    long long int j;
    long long int min;
    for(long long int i=0;i<N;i++){
        j++;

    }
    if(j==N){
        min=arr[0];
        for(long long int i=0;i<N;i++){
            if(arr[i]<min){
                min = arr[i];
            }

        }
        return min;
    }
    for(long long int i=0;i<N;i++){
        max_ending_here+=arr[i];
        if(max_so_far<max_ending_here){
            max_so_far=max_ending_here;
        }
        if(max_ending_here<0){
            max_ending_here=0;
        }

    }
    return max_so_far;
}
int main(){
    int T;
    long long int N;
    long long int arr[1000006];
    cin>>T;
    while(T--){
        cin>>N;
        for(int i=0;i<N;i++){
            cin>>arr[i];
        }
        cout<<kadane(arr,N)<<endl;
    }
}