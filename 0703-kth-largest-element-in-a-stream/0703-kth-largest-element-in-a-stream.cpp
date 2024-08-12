class KthLargest {
public:
    priority_queue<int, vector<int>, greater<int>> pq; // Min-heap
    int k;
    
    KthLargest(int k, vector<int>& nums) {
        this->k = k;
        for(int num : nums) {
            add(num);
        }
    }
    
    int add(int val) {
        if(pq.size() < k) {
            pq.push(val);
        } else if(val > pq.top()) {
            pq.push(val);
            pq.pop();
        }
        return pq.top();
    }
};

