#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;
void nge(int arr[],int N){
    stack<int> S;
    int NGE[N];
    int curr;
    for(int i=0;i<N;i++){
        if(i==0){
            S.push(i);
            continue;
        }
        curr=arr[i];
        if(S.empty() || curr<arr[S.top()]){
            S.push(i);
        }
        else{
            while(!S.empty() && curr>arr[S.top()]){
                NGE[S.top()]=curr;
                S.pop();

            }
            S.push(i);
        }
        }
        while(!S.empty()){
            NGE[S.top()]=-1;
            S.pop();

        }
        for(int i=0;i<N;i++){
            cout<<NGE[i]<<" ";
        }
        cout<<endl;
        return;

}
int main(){
    int arr[1007];
    int N;
    cin>>N;
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    nge(arr,N);
}