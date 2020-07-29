#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

struct container{
    char  b;
    int x;
};
container a[1000007];
//int dp[1000007];
int main(){
    int l;
    string S;
    cin>>l;
    cin>>S;
    int len = S.length();
    char prev=' ';
    int j=0;
    int count=0;
    for(int i=0;i<len;i++){
        if(S[i]==prev){
            count++;
        }
        else{
            if(prev!=' '){
                a[j].b=S[i-1];
                a[j].x=count;
                j++;


            }
            prev=S[i];
            count=1;

        }
        

    }
    a[j].b=prev;
    a[j].x=count;

    //for(int i=0;i<j+1;i++){
      //  cout<<a[i].b<<" "<<a[i].x<<" ";
    //}
    //cout<<endl;
    
    //cout<<j<<endl;
    //return 0;
    //here j+1 is 
    
    int total =0;
    int p;
    if(j==0 || j==1){
        for(int i=0;i<=j;i++){
        p=a[i].x;
        total+=((p*(p+1))/2);}
        cout<<total<<endl;
        
        return 0;
    }
    //pass1
    for(int i=0;i<=j;i++){
        p=a[i].x;
        total+=((p*(p+1))/2);
    }
    //pass2
    for(int i=1;i<=j-1;i++){
        if(a[i-1].b==a[i+1].b && a[i].x==1){
            total +=min(a[i-1].x,a[i+1].x);

        }
    }
    cout<<total<<endl;
    return 0;


}
