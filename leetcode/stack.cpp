// https://leetcode.com/problems/min-stack/

#include <bits/stdc++.h>

using namespace std;
class MinStack {
    stack<pair<int,int>> sp;
public:
    /** initialize your data structure here. */
    MinStack() {

    }
    
    void push(int x) {
        if(sp.empty())
        sp.push({x,x});
        else
            sp.push({x,min(sp.top().second,x)});
    }
    
    void pop() {
        sp.pop();
    }
    
    int top() {
        return sp.top().first;
    }
    
    int getMin() {
        return sp.top().second;
    }
};

int main(){
    MinStack minStack;
    minStack.push(-2);
    minStack.push(0);
    minStack.push(-3);
    cout<<minStack.getMin()<<endl;   
    minStack.pop();
    cout<<minStack.top()<<endl;    
    cout<<minStack.getMin();   
    return 0;
}