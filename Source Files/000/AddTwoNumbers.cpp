#include <iostream>
#include <cmath>

using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

class AddTwoNumbers {

public:

    void solve()
    {
        // ListNode l3(3), l2(4, &l3), l1(2, &l2);
        // ListNode r3(4), r2(6, &r3), r1(5, &r2);
        ListNode l3(5), l2(2, &l3), l1(7, &l2);
        ListNode r3(5), r2(6, &r3), r1(3, &r2);
        ListNode* sum = addTwoNumbers(&l1, &r1);
        for (ListNode* i = sum; i != nullptr; i = i->next) {
            cout << i->val << "->";
        }
    }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
    {
        int cnt_l1 = 0, cnt_l2 = 0;
        for (ListNode* i = l1; i != nullptr; i = i->next, ++cnt_l1) continue;
        for (ListNode* i = l2; i != nullptr; i = i->next, ++cnt_l2) continue;

        ListNode* l_sum = nullptr;
        ListNode* head = nullptr;
        int carry = 0;
        for (int i = 0; i < max(cnt_l1, cnt_l2); ++i) {
            int l1_val = (l1 != nullptr ? l1->val : 0);
            int l2_val = (l2 != nullptr ? l2->val : 0);
            int sum = l1_val + l2_val + carry;
            if (sum > 9) {
                sum %= 10;
                carry = 1;
            } else {
                carry = 0;
            }
            if (l_sum == nullptr) {
                l_sum = new ListNode(sum);
                head = l_sum;
            } else {
                l_sum->next = new ListNode(sum);
                l_sum = l_sum->next;
            }
            l1 = l1 != nullptr ? l1->next : nullptr;
            l2 = l2 != nullptr ? l2->next : nullptr;
        }
        if (carry == 1) {
            l_sum->next = new ListNode(carry);
        }

        return head;
    }

};

// int main(int argc, char* argv[])
// {
//     AddTwoNumbers p;
//     p.solve();
//     return 0;
// }
