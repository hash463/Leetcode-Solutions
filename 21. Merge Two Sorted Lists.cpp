/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        if(list1==NULL) return list2;
        if(list2==NULL) return list1;
        struct ListNode* head;
        struct ListNode* tail;
        // struct ListNode data;
        if(list1 -> val <= list2 -> val){
            head=tail=list1;
            list1=list1 -> next;
        }
        else{
            head=tail=list2;
            list2 = list2 -> next;
        }
        while(list1!=0 && list2!=0){
            if(list1 -> val <= list2 -> val){
                tail -> next=list1;
                tail=tail -> next;
                list1=list1 -> next;
            }
            else{
                tail -> next=list2;
                tail=tail -> next;
                list2=list2 -> next;
            }
        }
        if(list2==NULL) tail -> next=list1;
        else tail -> next=list2;
        return head;
    }
};
