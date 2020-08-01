//One of the best algorithms i have seen
#include<iostream>
#include<unordered_map>
using namespace std;
int SSEK(int arr[],int N,int K){
    unordered_map<int,int> umap;
    int count=0;
    int sum=0;
    for(int i=0;i<N;i++){
        sum+=arr[i];
        if(umap.find(sum)==umap.end()){
            umap[sum]=1;
        }
        else{
            umap[sum]+=1;
        }
        if(sum==K){
            count++;
        }
        if(umap.find(sum-K)!=umap.end()){
            count = count + umap[sum-K];

        }

    }
    return count;
}
int main(){
    int arr[100007];
    int N;
    int K;
    cin>>N;
    cin>>K;
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    cout<<SSEK(arr,N,K)<<endl;
}