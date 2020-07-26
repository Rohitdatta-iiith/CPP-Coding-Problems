//we have a collection of stones each stone has positive integer weight at each turn we choose two heaviest stones and smash them together
//suppose stones have weight X and Y
//X<=Y
//the result of smash is if X==Y both stones are destroyed totally
//If X!=Y then stone of weight  X is destroyed completely and stone of weight Y has new weight Y-X
//At the end there is atmost one stone left
//Athe end return weight of stone or 0 if no stones are left. 
#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;
int main(){
    long long int stones[1000];
    priority_queue<long long int> max_heap;
    long long int N;
    long long int a;
    long long int b;
    cin>>N;
    for(int i=0;i<N;i++){
        cin>>stones[i];
    
    }
    for(int i=0;i<N;i++){
        max_heap.push(stones[i]);
    }
    while(N>1){
        a = max_heap.top();
        max_heap.pop();
        b=max_heap.top();
        max_heap.pop();
        if(a==b){
            N=N-2;
        }
        else{
            max_heap.push(a-b);
            N=N-1;
        }

    }
    if(!max_heap.empty()){
        cout<<max_heap.top()<<endl;
    }
    else{
        cout<<0<<endl;
    }
    return 0;
}
//From this i came to know that the Maxheap i.e priority queue is Built in....
//Leet code June challenge