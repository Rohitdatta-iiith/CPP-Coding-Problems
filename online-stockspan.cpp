#include<iostream>
#include<algorithm>
#include<stack>
using namespace std;
struct Node{
    int index;
    int Value;

};
void onlinestockspan(int arr[],int os[],int N){
    //stack<int
    stack<Node> S;
    int ind=-1;
    Node p;
    for(int i=0;i<N;i++){
        ind++;
        if(S.empty()){
            os[i]=ind+1;
            p.index=ind;
            p.Value=arr[i];
            //S.push(p);
            S.push(p);
            continue;

        }
        //if(arr[i]<=S.top().Value){
          //  os[i]=ind-(S.top().index);
            // p.index=ind;
            //p.Value=arr[i];
            //S.push(p);
            //continue;

        //}
        while(!S.empty() && arr[i]>S.top().Value){
            S.pop();

        }
        if(S.empty()){
            os[i]=ind+1;
            p.index=ind;
            p.Value=arr[i];
            S.push(p);
        }
        else{
            os[i]=ind-(S.top().index);
            p.index=ind;
            p.Value=arr[i];
            S.push(p);

        }



    }
    return ;
}
int main(){
    int arr[100007];
    int N;
    cin>>N;
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    int os[100007];
    onlinestockspan(arr,os,N);
    for(int i=0;i<N;i++){
        cout<<os[i]<<" ";
    }
    cout<<endl;
}