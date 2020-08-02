#include<iostream>
#include<algorithm>
using namespace std;
void subarraycirc(int arr[],int N){
     int meh=0;
    int msf=INT16_MIN;
    
    for(int i=0;i<N;i++){
        meh+=arr[i];
       
        if(meh<arr[i]){
            meh=arr[i];
         
        }
        if(msf<meh){
         
            msf=meh;
        }
    }
    int M = msf;
    //cout<<M<<endl;
    int count=0;
    for(int i=0;i<N;i++){
        count+=arr[i];
    }
    //inversion
    for(int i=0;i<N;i++){
        arr[i]=(-1 * arr[i]);
    }
     meh=0;
     msf=INT16_MIN;
    
    for(int i=0;i<N;i++){
        meh+=arr[i];
       
        if(meh<arr[i]){
            meh=arr[i];
         
        }
        if(msf<meh){
         
            msf=meh;
        }
    }
    int K = (-1 * msf);
    //cout<<K<<endl;
    if(count==K){
        cout<<M<<endl;
    }
    else{
    cout<<max(M,(count-K))<<endl;}


    
}
int main(){
    int N;
    int arr[10007];
    cin>>N;
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    subarraycirc(arr,N);
}