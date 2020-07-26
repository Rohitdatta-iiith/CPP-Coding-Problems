//You are given an array containing only 0's and 1's
//You have to find contiguous array having maximum legnth
//Trick change 0's to -1's and again change them after find max contiguous array legnth having sum as zero is sufficient.
//So we use map trick .
//when we found zero we will update max = index(i)+1;
#include<iostream>
#include<algorithm>
#include<map>
using namespace std;
int main(){
    int arr[10007];
    int N;
    cin>>N;
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    for(int i=0;i<N;i++){
        if(arr[i]==0){
            arr[i]=-1;
        }
    }
    map <int,int> p;
    map<int,int>::iterator it;
    int sum=0;
    int maxarray = 0;
    int val;
    for(int i=0;i<N;i++){
        if(i==0){
            sum+=arr[i];
            //val=i;
            p.insert(pair<int, int>(sum,i));
            continue;

        }
        sum+=arr[i];
        if(sum==0){

            //p.insert(pair<int, int>)
            maxarray = max(i+1,maxarray);
          //  cout<<"->"<<maxarray<<endl;
            continue;
        }
        it=p.find(sum);
        if(it==p.end()){
            p.insert(pair<int, int>(sum,i));
        }
        else{
            maxarray = max(maxarray,i-(it->second));
            //cout<<"->"<<maxarray<<endl;
        }

}
    cout<<maxarray<<endl; 

}