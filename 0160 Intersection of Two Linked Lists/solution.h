/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        //method 1 hashmap
//         unordered_map <ListNode*, int> hashmap;
//         while(headA){
//             hashmap[headA] ++;
//             headA = headA->next ; 
//         }
        
//         while(headB){
//             if(hashmap.count(headB)){
//                 return headB;
//             }
//             headB = headB->next;
//         }
//         return nullptr ;
        
        //method 2 O(1) space 
        ListNode* A = headA, *B = headB;
        while(headA != headB){
            if(headA == nullptr){
                headA = B;
            }
            else{
                headA = headA->next;
            }
            if(headB == nullptr){
                headB = A;
            }
            else{
                headB = headB->next; 
            }
        }
        return headA;

        
    }
};
