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
    int pairSum(ListNode* head) {
        vector<int> temp;
        ListNode* t=head;
        while(t){
            temp.push_back(t->val);
            t=t->next;
        }
        int max=INT_MIN;
        int i=0;
        int n= temp.size()-1;
        while(i<n){
            int sum = temp[i]+temp[n];
            if(sum>max){
                max=sum;
            }
            i++;
            n--;
        }
        return max;

    }
};