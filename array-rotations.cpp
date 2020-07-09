//given n rotations in an 1d array of n elements given d to rotate array by
//using juggling gcd algorithm 
#include<iostream>
#include<algorithm>
using namespace std;
int gcd(int d,int n){
    if(n==0) return d;
    else return gcd(n,n%d);
}
void rotate(int arr[],int d,int n){
    d=d%n;
    int k=gcd(n,d);
    int temp;
    int j;
    cout<<k<<endl;
    for(int i=0;i<k;i++){
        temp=arr[i];
        j=i;
        while(1){
            //if(j<=n-1-d)
            arr[j]=arr[j+d];
            //j=j+d;
            if(j>n-1-d){
                break;
            }
            j=j+d;


        }
        arr[j]=temp;
        //cout<<temp<<endl;
        //cout<<j-d<<endl;

    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    //return ;

}
int main(){
    int N;
    int d;
    int arr[1000];
    cin>>N;
    cin>>d;
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    rotate(arr,d,N);
    //for(int i=0;i<N;i++){
    //    cout<<arr[i]<<" ";
    //}
    cout<<endl;
}