// https://leetcode.com/problems/middle-of-the-linked-list/

#include <iostream>
#include <bits/stdc++.h>
#define fo(i, n) for(i=0; i<n; i++)

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode* middleNode(ListNode* head) {
    ListNode* fast = head;
    if (head!=NULL){
        while(fast != NULL && fast->next != NULL){
            fast = fast -> next -> next;
            head = head -> next;   
        }
    }  
    return head;
}

int main(){
    
    return 0;
}