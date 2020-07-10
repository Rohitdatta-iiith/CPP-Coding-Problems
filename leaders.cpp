#include<iostream>
#include<stack>
using namespace std;
//int val[1000007];
void showstack(stack <int> S){ //this call is pass by value unlike in array
    while(!S.empty()){
        cout<<S.top()<<" ";
        S.pop();
    }
    cout<<endl;
}

void leaders(int arr[],int N){
    //int val[1000007];
    stack<int> S;
    int l=0;
    //val[0]=arr[N-1];
    S.push(arr[N-1]);
    int maxfar=arr[N-1];
    for(int i=N-2;i>=0;i--){
        if(maxfar<=arr[i]){
            maxfar = arr[i];
            //l++;
            //val[l]=arr[i];
            S.push(maxfar);

        }

    }
    showstack(S);
    //for(int i=l;i>=0;i--){
      //  cout<<val[l]<<" ";
    //}

   // S.empty();
}
int main(){
    int T;
    int N;
    int arr[1000007];
    cin>>T;
    while(T--){
        cin>>N;
        for(int i=0;i<N;i++){
            cin>>arr[i];
        }
       leaders(arr,N);
       //cout<<endl;
    }
}