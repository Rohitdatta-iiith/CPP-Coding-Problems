//Find minimum number of perfect squares required to sum them to get a number N
//Using Dynamic Programming
//leet code june challenge
#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
int minimumsumperfectsquares(int N){
    int arr[15000]; 
    arr[0]=0;
    arr[1]=1;
    arr[2]=2;
    arr[3]=3;
    int minval;
    
    if(N<=3){
        return N;
    }
    for(int i=4;i<=N;i++){
        minval = 9999;//setting min value to infinity
        int a=sqrt(i);
        //if(i==12){
          //  cout<<a<<endl;
        //}
        if(a*a==i){
            arr[i]=1;
        }
        else
        {
            for(int j=1;j<=a;j++){
                //if(i==8){
                //cout<<minval<<endl;}
                minval=min(minval,1+arr[i-(j*j)]);
                //if(i==8){
                    //cout<<i-(j*j)<<endl;
                  //  cout<<arr[i-(j*j)]<<endl;
                //cout<<minval<<endl;}

                
                //if(i==12){
                    //cout<<minval<<endl;
                  //  cout<<j<<endl;
                //}

                
            }
            arr[i]=minval;
            
        }
        
    }
    
return arr[N];
}
int main(){
    int N;
    cin>>N;
    cout<<minimumsumperfectsquares(N)<<endl;
}
