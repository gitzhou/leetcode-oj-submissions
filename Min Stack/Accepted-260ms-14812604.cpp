// 
// Generated by FetchLeetcodeSubmission Project on GitCafe.
// Visit https://gitcafe.com/aaronzhou/FetchLeetcodeSubmission for more information.
// Contact Me: aaron67[AT]aaron67.cc
// 
// Min Stack
// https://leetcode.com/problems/min-stack/
// 

class MinStack {
public:
    void push(int x) {
        m_st.push(x);
        if (m_minst.empty() || x <= m_minst.top()) {
            m_minst.push(x);
        }
    }
    
    void pop() {
        if (!m_st.empty()) {
            int e = m_st.top();
            m_st.pop();
            if (e == m_minst.top()) {
                m_minst.pop();
            }
        }
    }
    
    int top() {
        return m_st.top();
    }
    
    int getMin() {
        return m_minst.top();
    }
    
private:
    stack<int> m_st, m_minst;
};

// 
// Design a stack that supports push, pop, top, and retrieving the minimum element in constant time. push(x) -- Push element x onto stack. pop() -- Removes the element on top of the stack. top() -- Get the top element. getMin() -- Retrieve the minimum element in the stack. Show Tags Stack Design Show Similar Problems (H) Sliding Window Maximum
// 
