#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[100007];

    int N;
    int K;
    cin>>N;
    cin>>K;
    int i;
    for(i=0;i<N;i++){
        cin>>arr[i];
    }
    if(N==1){
        if(arr[0]==1){
            cout<<1<<endl;
            return 0;
        }
        cout<<-1<<endl;
        return 0;


    }
    int j;
    int result;
    //bool found=false;
    i=0;
    while(i <N){
        bool found = false;
        for(j=i+K-1;j>=i-K+1 && j>=0;j--){
            if(j<N){
            if(arr[j]==1){
                result++;
                found=true;
                i=j+K;
                break;


            }

            }

        }
        if(found == false){
            cout<<-1<<endl;
            return 0;
        }


    }
 //   if(found==true){
        cout<<result<<endl;
   // }
    //else{
      //  cout<<-1<<endl;
    //}
    return 0;



}