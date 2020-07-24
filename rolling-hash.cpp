//I am assuming both string and Query string to be lowercase
//If you want to take Uppercases too You have to take better value tmhan 26 to avoid collisions
#include<iostream>
#include<string>
#include<cmath>
using namespace std;
long long int rollhash(string Q){
    long long int p = 5843;//good large prime to avoid collisions.
    long long int l=Q.length();
    long long int val=0;
    for(int i=l-1;i>=0;i--){
        long long int x = pow(26,l-1-i);
        val = (val+(Q[i]-'a'+1)*x)%p;

    }
    return val;

}
long long int hashcalc(string S,long long int k){
    long long int p=5843;
    long long int val=0;
    for(int i=k-1;i>=0;i--){
        long long int x = pow(26,k-1-i);
        val = (val+(S[i]-'a'+1)*x)%p;

    }
    return val;
}
void patternsearch(string S,string Q,long long int h){
    long long int l=S.length();
    long long int k =Q.length();
    long long int p=5843;
    if(k>l){
        cout<<"Query string is larger If that's not your intention please give another input";
        cout<<endl;
        return;
    }
    if(k==l){
        if(S==Q){
            cout<<"Strings Matched Completely"<<endl;
            return;
        }
        cout<<"No pattern Found"<<endl;
        return;
    }
    long long int j;

    for(int i=0;i<l-k+1;i++){
        if(i==0){
        j=hashcalc(S,k);
        //cout<<j<<endl;
        }
        else{
            long long int x =pow(26,k-1);
           // j = (((j-(x*(S[i-1]-'a'+1)%p)) *26 )+S[i+k])%p;
          // j = j%p - ((x*(S[i-1]-'a'+1))%p)%p;
          j = j - (x*(S[i-1]-'a'+1))%p;
          j = (j*26);
          j = (j+S[i+k-1]-'a'+1)%p; 
          //cout<<j<<endl;
          
                 }
        if(j==h){
            cout<<"Pattern found at position "<<i<<endl;
            return;
        }

    }
    cout<<"Pattern not found"<<endl;

}
int main(){
    string S,Q;
    cin>>S;
    cin>>Q;
    long long int h = rollhash(Q);
    //cout<<h<<endl;
    patternsearch(S,Q,h);


}
