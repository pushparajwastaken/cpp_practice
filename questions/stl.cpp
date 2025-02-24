#include<iostream>
#include <bits/stdc++.h>
using namespace std;
//pairs
void explainpair(){
    pair<int,int> p={1,3};
    cout <<p.first<<" "<<p.second<<endl;;
    pair<int, pair<int,int>> p1={1,{2,3}};
    cout<<p1.first<<" "<<p1.second.second<<" "<<p1.second.first<<endl;;
    pair<int,int>arr[]={{1,2},{1,3},{4,3}};
    cout<<arr[1].second<<endl;;
    }
    void explainvector(){
         vector<int>v;
         v.push_back(2);
         v.emplace_back(3);
         v.push_back(34);
         v.emplace_back(341);
         v.emplace_back(342);
         
         vector<pair<int,int>>vec;
         vec.push_back({4,5});
         vec.emplace_back(2,3);
         vector<int>v2(5,100);//this means 5 instances of 100 are stored in a vector named v2
         vector<int>v1(5);
         vector<int>v2(v1);/*this will make a copy of v1 in v2(v2 will 
         be altogether a different vector )*/
         /*to print we can use v[] or v.at()*/ 
         //iterator
         vector<int>::iterator it=v.end();
         //looping in vector
         for (vector<int>::iterator it=v.begin(); it !=v.end();it++){
            cout<<*(it)<<" ";
         }
         //auto -it automatically defines the data type of variable can be used for int or other also
         for (auto it=v.begin();it!=v.end();it++){
            cout<<*(it)<<" ";
            for(auto it:v){
                cout<<it<<" ";
            }
            
         }
    //erasing in vector
    /*to erase an element in vector we have to give the
    start and end */
    v.erase(v.begin()+1);//this will delete the last element in vector 
    v.erase(v.begin()+2,v.begin()+4);//the start point is also deleted but not the end part
    
    vector<int>vw(2, 100);
    vw.insert(vw.begin(),300);//this will insert 300 at the v.begin position
    vw.insert(vw.begin()+1,2,10);
    //insert at v.begin()+1,2 instances of 10
    }
    void explainlist(){
        list<int>ps;
        ps.push_back(2);//{2}
        ps.emplace_back(4);//{2,4}
        ps.push_front(5);//{5,2,4}
        ps.emplace_front();//{2,4}; 
        //rest functions are same as vector
        //begin,end,rbegin,rend,clear,insert,size,swap
    }
    //deque-same as list
    void explainstack(){
        stack<int>st;
        st.push(1);//{1}
        st.push(2);//{2,1}
        st.push(3);//{3,2,1}
        st.push(3);//{3,3,2,1}
        st.emplace(5);//{5,3,3,2,1}
        cout<<st.top();//prints 5 "** st[2]is invalid **"
        st.pop();//st looks like{3,3,2,1}
        cout<<st.top();//3
        st.size();//4
        st.empty();//checks if stack is empty
        stack<int>st1,st2;
        st1.swap(st2);
    }
void explainqueue(){
    queue<int>q;
    q.push(1);//{1}
    q.push(2);//{1,2}
    q.emplace(4);//{1,2,4}
    q.back()+=5;
    cout<<q.back();//prints 9;
    cout<<q.front();//prints 1
    q.pop();//{2,9}
    cout<<q.front();//prints 2
    //size swap empty same as stack
}
void explainpq(){
    priority_queue<int>pq;
    pq.push(5);//{5}
    pq.push(2);//{5,2}
    pq.push(8);//{8,5,2}
    pq.emplace(10);//{10,8,5,2}
    cout<<pq.top();//print 10
    pq.pop();//{8,5,2}
    cout<<pq.top();//prints 8
    //size swap emoty function same as others
    
    //Mimnimum Heap
    priority_queue<int,vector<int>,greater<int>>pq;
    pq.push(5);//{5}
    pq.push(2);//{2,5}
    pq.push(8);//{2,5,8}
    pq.emplace(10);//{2,5,8,10}
    cout<<pq.top();//prints 2
}
void explainset(){
    set<int> s;
s.insert(1);
s.insert(2);
s.begin();//return an iterator pointing to the first element in the set.
s.end();//returns an iterator to the theoretical element after the last element.
//count() – returns true or false based on whether the element is present in the set or not.

/*clear() – deletes all the elements in the set.
find() – to search an element in the set.
erase() – to delete a single element or elements between a particular range.
cbegin() – it refers to the first element of the set.
cend() – it refers to the theoretical element after the last element of the set.
rbegin() – it points to the last element of the set.
rend() – it points to the theoretical element before the first element of the set.
bucket_size() – gives the total number of elements present in a specific bucket in a set.
emplace() – to insert an element in the set.
max_size() – the maximum elements a set can hold.
max_bucket_count() – to check the maximum number of buckets a set can hold.*/
}
//mutliset will follow rule of sorted as set but not of unique nature
//unordered set-random order storing time complexity is 0(1),worst case is 0(n)
//map-

    int main(){
        explainpair();
        return 0;
    }