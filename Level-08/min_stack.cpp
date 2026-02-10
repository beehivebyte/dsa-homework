//problem link:https://leetcode.com/problems/min-stack/description/
#include <stack>
using namespace std;
class MinStack {
private:
    stack<int> st;      // main stack
    stack<int> minSt;   // stack to track minimums

public:
    // Constructor
    MinStack() {
        // stacks are initialized automatically
    }
    
    // Push value onto stack
    void push(int val) {
        st.push(val);

        // Push to min stack if it's empty or val <= current min
        if (minSt.empty() || val <= minSt.top()) {
            minSt.push(val);
        }
    }
    
    // Remove top element
    void pop() {
        // If the top element is the current minimum, pop from min stack too
        if (st.top() == minSt.top()) {
            minSt.pop();
        }
        st.pop();
    }
    
    // Get top element
    int top() {
        return st.top();
    }
    
    // Get minimum element
    int getMin() {
        return minSt.top();
    }
};


//Time Complexity:
//Best: O(1)
//Average: O(1)
//Worst: O(1)
//Space Complexity:O(n)