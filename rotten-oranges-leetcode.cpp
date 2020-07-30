#include<iostream>
#include<queue>
#include<algorithm>
using namespace std;
struct Node{
    int time_stamp;
    int x;
    int y;

};
int arr[1007][1007];
int M;
int N;
bool isvalid(int sr,int sc){
    if(sr>=0 && sr<M && sc>=0 && sc<N){
        return true;
    }
    return false;

}
int main(){
    queue<Node> q;
    int time;
    int M;
    int N;
    cin>>M;
    cin>>N;
    for(int i=0;i<M;i++){
        for(int j=0;j<N;j++){
            cin>>arr[i][j];
        }
    }
    int a;
    int b;
    Node p;
    for(int i=0;i<M;i++){
        for(int j=0;j<N;j++){
            if(arr[i][j]==2){
                //Node p ;
                p.time_stamp=0;
                p.x=i;
                p.y=j;
                q.push(p);
            }
        }
    }
    //cout<<q.size()<<endl;
    //cout<<isvalid(1,2)<<endl;
    Node m;
    Node k;
    while(!q.empty()){
        k = q.front();
        //Node m;
        time = k.time_stamp;
        a=k.x;
        b=k.y;
        //if(isvalid((k.x)-1),k.y){

        //}
        if(!isvalid(a+1,b)){
            if(arr[a+1][b]==1){
                arr[a+1][b]=2;
                m.time_stamp=(time+1);
                m.x=a+1;
                m.y=b;
                q.push(m);

            }
        }
        if(!isvalid(a-1,b)){
            if(arr[a-1][b]==1){
                arr[a-1][b]=2;
                m.time_stamp=(time+1);
                m.x=a-1;
                m.y=b;
                q.push(m);

            }
        }
        if(!isvalid(a,b-1)){
            if(arr[a][b-1]==1){
                arr[a][b-1]=2;
                m.time_stamp=(time+1);
                m.x=a;
                m.y=b-1;
                q.push(m);

            }
        }
        if(!isvalid(a,b+1)){
            if(arr[a][b+1]==1){
                arr[a][b+1]=2;
                m.time_stamp=(time+1);
                m.x=a;
                m.y=b+1;
                q.push(m);

            }
        }
        q.pop();




    }
    int count=0;
    for(int i=0;i<M;i++){
        for(int j=0;j<N;j++){
            //cout<<arr[i][j]<<" ";
            if(arr[i][j]==1){
                count++;
            }

        }
        //cout<<endl;
    }
    if(count==0){
        cout<<time<<endl;
    }
    else{
        cout<<-1<<endl;
    }
    return 0;





}