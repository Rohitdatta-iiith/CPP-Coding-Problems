#include<iostream>
#include<algorithm>
using namespace std;
//void spiral(long long int *arr,long long int N,long long int M){
  //  long long int top,down,left,right;


//}
int main(){
    long long int T;
    long long int N;
    long long int M;
    long long int arr[11][11];
    long long int left,right,top,down;
    long long int dir;
    cin>>T;
    while(T--){
        cin>>N;
        cin>>M;
        for(int i=0;i<N;i++){
            for(int j=0;j<M;j++){
                cin>>arr[i][j];
            }
        }
        dir=0;
        top=0;
        down=N-1;
        left=0;
        right=M-1;
        while(top<=down&&left<=right){
            if(dir==0){
                for(int i=left;i<=right;i++){
                    cout<<arr[top][i]<<" ";
                }
                top=top+1;
            }
            if(dir==1){
                for(int i=top;i<=down;i++){
                    cout<<arr[i][right]<<" ";
                }
                right = right-1;
            }
            if(dir  == 2){
                for(int i=right;i>=left;i--){
                    cout<<arr[down][i]<<" ";
                }
                down = down - 1;
            }
            if(dir == 3){
                for(int i=down;i>=top;i--){
                    cout<<arr[i][left]<<" ";
                }
                left = left+1;

            }
            dir = (dir+1)%4;
        }

        //spiral(arr[][17],N,M);
        cout<<endl;
    }
}