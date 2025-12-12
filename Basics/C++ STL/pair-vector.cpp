#include<bits/stdc++.h>
using namespace std;

void pairs(){
    pair<int,int> p;
    p={1,3};
    cout<<"Pairs:";
    cout<<p.first<<" "<<p.second<<endl; 

    pair<int,pair<int,float>> nestedpair;
    nestedpair={4,{5,8.9}};
    cout<<"Nested Pairs:";
    cout<<nestedpair.first<<" "<<nestedpair.second.first<<endl;
    
    pair<int,int>arr[]={{1,2},{2,2},{2,3},{4,5}};
    cout<<"Array of pairs:";
    cout<<arr[2].first<<" "<<arr[1].second<<endl;
}


void vectors(){
    vector<int>v;

    v.push_back(1);
    v.emplace_back(2);
    v.push_back(3);
    v.push_back(4);

    vector<pair<int,int>> vect;
    vect.push_back({4,5});
    vect.emplace_back(8,5);

    vector<int>v1(3,5);
    vector<int>v2(v1);

    vector<int>::iterator ite=v.begin();
    ite++;
    cout<<"vectors:";
    cout<<*(ite)<<" "<<endl;
    cout<<v.back()<<endl;

   for(auto it=v.begin()+1;it!=v.end();it++){
      cout<<*(it)<<" ";
   }

   for(auto it:v){
    cout<<it<<" ";
   }
   cout<<endl;
   
   v.erase(v.begin());
   v.erase(v.begin()+1,v.begin()+2);

   vector<int>vi(2,100);
   vi.insert(vi.begin(),300);

   vi.insert(vi.begin()+1,2,10);
   for(auto it:vi){
    cout<<it<<" ";
   }

}

int main(){
    pairs();
    vectors();
    return 0;
}