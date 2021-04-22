#include <iostream>
#include<math.h>
#include<stdlib.h>
#include<vector>
#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long int
//stl c++

//pair
void explainPair(){
	pair<int,int>p={1,3};
	
	cout<<p.first<<" "<<p.second<<endl;
	//prints 1 3
	
	pair<int<pair<int,int>> p={1,{3,4}}; //nested pair
	cout<<p.first<<" "<<p.second.second<<" "<<p.second.first;
	//prints 1 4 3
	
	pair<int,int>arr[]={{1,2},{3,4},{5,6}};
	
	cout<<arr[1].second; //prints 4
	
}

//vector

void explainvector(){
	vector<int>v;
	v.push_back(1);
	v.emplace_back(2); //both are same
	v.push_back(3); 
	
	vector<pair<int,int>>vec;
	
	vec.push_back({1,2});
	
	vector<int>v(5,100);  //{100 100 100 100 100}
	vector<int> v(5);  //{0 0 0 0 0 }
	vector<int> v1(5,20); //{20 20 20 20 20}
	vector<int>v2(v1);  //{20 20 20 20 20}
	
	
	vector<int>::iterator it=v.begin();
	it++;
	cour<<*(it)<<" ";  //prints 2
	
	
	for(vector<int>:: iterator it=v.begin();it!=v.end());it++){
		cout<<*(it)<<" ";
	}
	
	for(auto it=v.begin();it!=v.end();it++){
		cout<<*(it)<<" ";
	}
	for(auto it:v){
		cout<<it<<" ";
	}
	v.erase(v.begin());
	
	v.erase(v.begin()+2,v.begin()+4); //v.begin()+4 not included
	
//	insert function

vector<int>v(2,100);  //{100 100}
v.insert(v.begin(),300);  //{300 100 100}
v.insert(v.begin()+1,2,10);  //{300 10 10 100 100}

vector<int>copy(2,50);   //{50 50}
v.insert(v.begin(),copy.begin(),copy.end()); //{50 50 300 10 10 100 100 

cout<<v.size();  //2

v.pop_back();  //erase last element ans new size is n-1

//v1-> {10,20}
//v2-> {30,40}
v1.swap(v2); //v1={30,30} v2={10,20}

v.clear(); //erases entire vector

cout<<v.empty();  //gives true or false

}

void explainList(){
	list<int>ls;
	
	ls.push_back(2);
	ls.push_front(4);  //{4 2}
	
	//pop_front
//	all functions used in vector are in list also
//prefer vector more
	//begin,end,rbegin,rend,clear,insert,size,swap
	
	
}


void dequeue(){
	//its a dynamic container//all functuonality in vector can also be used in dequeue
	dequeue<int> dq;
	dq.push_back(1);
	dq.push_front(5);
//	pop_back pop_front used
	dq.back();
	dq.front();
	//begin,end,rbegin,rend,clear,insert,size,swap

}

void stack(){
	stack<int>s;
	//lifo used
	st.push(1);  //{1}
	st.push(2); //{2 1}
	st.push(3); //{3 2 1}
	cout<<st.top(); // 3
	st.pop(); //3
	cout<<st.size();
	cout<<st.empty();
	stack<int>s1,s2;
	s1.swap(s2);
	//no such iterator used in stack
}

void queue(){
	//fifo
	queue<int>q;
	q.push(1);
	q.push(2);
	q.back()+=5;
//	access last element of queue  >> q.back()
	cout<<q.back();//prints 7
	//{1,7}
	q.pop(); //1
	cout<<q.front(); //7
	
	
}

void priority_queue(){
	priority_queue<int>pq;
	//priority_queue stores elements in sorted fashion
	//descending order//greater the value/priority it comes on top
	pq.push(5);  //{5}
	
	pq.push(2); //{5 2}
	pq.push(8); //{8 5 2}
	cout<<pq.top(); //8
	pq.pop(); //8
	pq.top(); //5
	
	//stores in ascending fashion
	priority_queue<int, vector<int>,greater<int>>pq;
	pq.push(5);  ///{5}
	
	pq.push(2); //{2,5}
	pq.push(6); //{2,5,6}
	cout<<p.top(); //2
	
}


void set(){  //takes O(logn) time very useful
	//sorts in ascending order but takes only uniqueue elements
	set<int>st;
	st.insert(1); //{1}
	st.insert(4);//{1,4}
	st.insert(3);//{1,3,4}
	st.insert(1); //{1,3,4}
	auto it=st.find(3);  //returns iterator
	auto it=st.find(6);  //not found retrurns iterator pointing at the last elekemnt
	st.erase(4);  //erases 4
	
	int cnt=st.count(3); // >>1 if exist or 0 if not exists
	auto it=st.find(3);
	st.erase(it);  //deletes 3
	
	//(1 2 3 4 5}
//	delete elements from 2 to 3
	auto it1=st.find(2);
	auto it2=st.find(4);
	st.erase(it1,it2); //after erase{ 1 4 5}
	
	auto it=st.lower_bound(2);
	auto it=st.upper_bound(3);
}


void multiset(){
	//everything is same as set
	//only stores duplicate elements also but in sorted order
	
	multiset<int>ms;
	ms.insert(1); //{1}
	ms.insert(1); //{1,1}
	ms.erase(1);  //all 1s are erased
	
	int cnt=ms.count(1); 
	ms.erase(ms.find(1));  //only single 1 is erased
}

void unorderedset(){
	//stores all unique elements but not in sorted fashion
}
	int main(){
		explainvector();
		explainPair();
		return 0;
	}
