#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;
struct comparator{
bool operator()(vector<int>const &p ,vector<int>const &q){
	return q[1]>p[1];

}
};
int main(){
	vector<vector<int>> s;
	int n;
	cin>>n;
	if(n==1){cout<<1<<endl;
	return 0;}
	int a;
	int b;
	vector<int> temp(2);
	for(int i=0;i<n;i++){
		cin>>temp[0];
		cin>>temp[1];
		s.push_back(temp);
	}
	sort(s.begin(),s.end());
	priority_queue<vector<int>,vector<vector<int>>,comparator> Q;
	Q.push(s[0]);
	for(int i=1;i<n;i++){
		if(s[i][0]>=Q.top()[1]){
			Q.pop();
			//Q.push(S[i]);

		}
		Q.push(s[i]);

	}
	cout<<Q.size()<<endl;

	return 0;
	

}
