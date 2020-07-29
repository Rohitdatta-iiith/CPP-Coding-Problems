//Here we have been given a boolean matrix where 1 has land 0 has water
//we will use 2 to represent that we have a already processed vertex 
#include<iostream>
#include<algorithm>
using namespace std;
int arr[1007][1007];
void dfs(int i,int j,int M,int N){
    if(i<0 || i>=M || j<0 || j>=N || arr[i][j]!=1){
        return;
    }
    arr[i][j]=2;
    dfs(i+1,j,M,N);//Right
    dfs(i-1,j,M,N);//Left
    dfs(i,j-1,M,N);//Bottom
    dfs(i,j+1,M,N);//Up

}

int main(){
    int M;
    int N;
    cin>>M;
    cin>>N;
    for(int i=0;i<M;i++){
        for(int j=0;j<N;j++){
            cin>>arr[i][j];
            }
    }
    //islandscount(&arr[0][0],M,N);
    int islands=0;
    for(int i=0;i<M;i++){
        for(int j=0;j<N;j++){
            if(arr[i][j]==1){
                dfs(i,j,M,N);
                islands++;
            }
        }
    }
    cout<<islands<<endl;






}
