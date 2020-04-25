// https://leetcode.com/problems/lru-cache/

#include <iostream>
#include <bits/stdc++.h>
#define fo(i, n) for(i=0; i<n; i++)

using namespace std;

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
*/

class LRUCache {
public:
    list<pair<int, int>> dq;
    unordered_map<int, list<pair<int, int>>::iterator> umap; 
    int capacity;

    void moveFront(int key, int value){
        dq.erase(umap[key]);
        dq.push_front(make_pair(key,value));
        umap[key] = dq.begin();
    }
    LRUCache(int cap) {
        capacity = cap;
    }
    
    int get(int key) {
        if(umap.find(key)== umap.end()) return -1;

        int value =  (*umap[key]).second;
        moveFront(key,value);

        return (*umap[key]).second;
    }
    
    void put(int key, int value) {
        if(umap.find(key)!= umap.end()){
            moveFront(key,value);
        }
        else
        {
            dq.push_front(make_pair(key,value));
            umap[key] = dq.begin();
            if(umap.size()>capacity){
                umap.erase(dq.back().first);
                dq.pop_back();
            }
        }   
    }
    int main(){
    LRUCache cache(2);

    cache.put(2, 2);
    cache.put(2, 2);
    cache.put(1, 1);
    cout<<cache.get(1);      
    cache.put(3, 3);         
    cout<<cache.get(2);      
    cache.put(4, 4);         
    cout<<cache.get(1);      
    cout<<cache.get(3);      
    cout<<cache.get(4);      
    return 0;
}        

};



