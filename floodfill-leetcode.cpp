#include<iostream>
#include<algorithm>
using namespace std;
int image[1007][1007];//globally declaring without taking them as arguments in functions
int source;//same applies here
void dfs(int sr,int sc,int M,int N,int floodval){
    if(sr<0 || sr>=M || sc<0 || sc>=N){
        return;
    }
    else if(image[sr][sc]!=source){
        return;
    }
    image[sr][sc]=floodval;
    dfs(sr+1,sc,M,N,floodval);//Top
    dfs(sr-1,sc,M,N,floodval);//Down
    dfs(sr,sc+1,M,N,floodval);//Right
    dfs(sr,sc-1,M,N,floodval);//Left


}
int main(){
    int M;
    int N;
    int sr;
    int sc;
    cin>>M;
    cin>>N;
    int floodval;
    for(int i=0;i<M;i++){
        for(int j=0;j<N;j++){
            cin>>image[i][j];
        }
    }
    cin>>sr;
    cin>>sc;
    cin>>floodval;
    source=image[sr][sc];
    dfs(sr,sc,M,N,floodval);
    for(int i=0;i<M;i++){
        for(int j=0;j<N;j++){
            cout<<image[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;



}