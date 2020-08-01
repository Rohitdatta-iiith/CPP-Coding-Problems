#include<iostream>
#include<algorithm>
#include<limits>
using namespace std;
void kadane(int arr[],int N){
    int meh=0;
    int msf=INT16_MIN;
    int left,right;
    for(int i=0;i<N;i++){
        meh+=arr[i];
        if(i==0){
            left=i;
        }
        if(meh<arr[i]){
            meh=arr[i];
            left=i;
        }
        if(msf<meh){
            right=i;
            msf=meh;
        }
    }
    cout<<left<<" "<<right<<endl;
    cout<<msf<<endl;
}
int main(){
    int arr[10007];
    int N;
    cin>>N;
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    kadane(arr,N);
}