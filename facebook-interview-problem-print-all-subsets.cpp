#include<iostream>
#include<algorithm>
using namespace std;
//At every step we see that for every element does we have any sort of confirming that whether we can take this element or not so we have pow(2,n) posiibilities
void print(int sub[],int N){
for(int i=0;i<N;i++){
    if(sub[i]!=-1007){
        cout<<sub[i]<<",";

    }
}
cout<<endl;
}
void helper(int arr[],int sub[],int N,int i){
    if(i==N){
        print(sub,N);
    }
    else{
        sub[i]=-1007;
        helper(arr,sub,N,i+1);
        sub[i]=arr[i];
        helper(arr,sub,N,i+1);
    }

}
int main(){
    int N;
    cin>>N;
    int arr[107];
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    //Assuming -10007 wont be part of any input set
    //we assume this value as null for our set
    int sub[107];
    //int i=0;
    helper(arr,sub,N,0);


}
