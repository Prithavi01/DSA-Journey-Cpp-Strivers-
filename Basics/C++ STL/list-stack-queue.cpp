#include<bits/stdc++.h>
using namespace std;

void listcontainer(){
    list<int>ls;
    ls.push_back(3);
    ls.push_back(8);
    ls.emplace_back(6);
    ls.push_front(7);
    ls.push_back(0);
    cout<<"List values:"<<endl;
    for(auto it:ls) cout<<it<<" ";
}

void queuecontainer(){
    //FIFO
    queue<int> q;
    q.push(3);
    q.push(4);
    q.push(9);
    q.emplace(1);

    queue<int>temp=q;

    cout<<endl<<"Queue values:"<<endl;
    while(!temp.empty()){
        cout<<temp.front()<<" ";
        temp.pop();
    }

    //Cant iterate queue using this type of looping
    //  for(auto it:q) cout<<it<<" ";
}

void dequeuecontainer(){
    deque<int>dq;
    //Both LIFO and FIFO

    dq.push_front(3);
    dq.push_back(4);
    dq.push_front(9);
    dq.emplace_back(1);

    deque<int>temp=dq;

    cout<<endl<<"Deque values:"<<endl;
    while(!temp.empty()){
        cout<<temp.front()<<" ";
        temp.pop_front();
    }

}

void stackcontainer(){
    stack<int>st;
    // LIFO

    st.push(3);
    st.push(4);
    st.push(9);
    st.emplace(1);
    st.push(2);

    stack<int>temp=st;

    cout<<endl<<"Stack values:"<<endl;
    while(!temp.empty()){
        cout<<temp.top()<<" ";
        temp.pop();
    }



}

void priorquecontainer(){
    priority_queue<int>pq;

    pq.push(3);
    pq.push(4);
    pq.push(9);
    pq.emplace(1);

    priority_queue<int>temp=pq;

    cout<<endl<<"PQ values:"<<endl;
    while(!temp.empty()){
        cout<<temp.top()<<" ";
        temp.pop();
    }

}


int main(){
    listcontainer();
    queuecontainer();
    dequeuecontainer();
    stackcontainer();
    priorquecontainer();
}