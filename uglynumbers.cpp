//Question:find nth ugly number
#include<iostream>
#include<algorithm>
using namespace std;
int min(int a,int b){
    if(a<b) return a;
    else return b;

}
int ugly(int n){
    int ugly_array[10000];
    if (n==1) return 1;
    int i1=2;
    int i2=3;
    int i3=5;
    //int 
    //int g1=1;
    //int g2=1;
    //int g3=1;
    ugly_array[0]=1;
    for(int i=1;i<n;i++){
        ugly_array[i]=min(i1,min(i2,i3));
        //cout<<ugly_array[i]<<endl;
        if(ugly_array[i]==i1){
            i1 = i1 + 2;

        }
        if (ugly_array[i]==i2)
        {
            i2 = i2 + 3;
        }
        if(ugly_array[i]==i3){
            i3 = i3 + 5;
        }
        
    }
    for(int i=0;i<n;i++){
        cout<<ugly_array[i]<<" ";
    }
    cout<<endl;
return ugly_array[n-1];
}
int main(){
    int n;
    cin>>n;
    //cout<<"Nth Ugly-number is "<<ugly(n)<<endl;
    //cout<<ugly(n)<<endl;
    ugly(n);
}
