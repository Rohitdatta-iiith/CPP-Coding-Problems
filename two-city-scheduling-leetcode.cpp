#include<iostream>
#include<algorithm>
using namespace std;
struct flight{
    int city_a;
    int city_b;


};
bool activities(flight A,flight B){
    return (B.city_b - B.city_a)<(A.city_b - A.city_a);
}//sort activities according to going to minimality of city B rather than to city A
int main(){
    flight arr[1000];
    int N;
    cin>>N;
    //N=2*N;
    long long int price = 0;
    for(int i=0;i<N;i++){
        cin>>arr[i].city_a;
        cin>>arr[i].city_b;

    }
    sort(arr,arr+N,activities);
    for(int i=0;i<N/2;i++){
        price+=arr[i].city_a;

    }
    for(int i=N/2;i<N;i++){
        price+=arr[i].city_b;
    }
    cout<<price<<endl;


}