#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    long long int N;
    long long int arr[100007];
    cin>>N;
    long long int container=1;
    long long int minval;
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    sort(arr,arr+N);
    if(N==1){
        cout<<1<<endl;
        return 0;
    }
 //   for(int i=1;i<N;i++){
   //     min = arr[i-1]min = arr[0];
     //   if(arr[i]<)
        

    //}
    minval = arr[0];
    
    for(int i=1;i<N;i++){
        if(arr[i]<=minval+4){
            minval = minval;
        }
        else{
            minval = arr[i];
            container++;
        }
    }
    cout<<container<<endl;
    
}