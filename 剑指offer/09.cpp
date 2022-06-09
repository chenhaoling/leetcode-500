class CQueue {
public:
    stack<int> stack1;
    stack<int> stack2;

    CQueue() {
        
    }
    
    void appendTail(int value) {
        stack1.push(value);
    }
    
    int deleteHead() {
        if(stack1.empty()) return -1;
        int item = 0;
        while(!stack1.empty()){
            item = stack1.top();
            stack1.pop();
            stack2.push(item);
        }
        stack2.pop();
        while(!stack2.empty()){
            stack1.push(stack2.top());
            stack2.pop();
        }
        return item;
    }
};

/**
 * Your CQueue object will be instantiated and called as such:
 * CQueue* obj = new CQueue();
 * obj->appendTail(value);
 * int param_2 = obj->deleteHead();
 */
