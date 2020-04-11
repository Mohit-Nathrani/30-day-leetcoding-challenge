class MinStack {
    stack<int> st;
    stack<int> mn;
public:
    /** initialize your data structure here. */
    MinStack() {
        
    }
    
    void push(int x) {
        st.push(x);
        if(mn.empty() || x<=mn.top()) mn.push(x);
    }
    
    void pop() {
        if(st.empty()) return;
        if(mn.top()==st.top()) mn.pop();
        st.pop();
    }
    
    int top() {
        if(st.empty()) return -1;
        return st.top();
    }
    
    int getMin() {
        if(mn.empty()) return -1;
        return mn.top();
    }
};