class NumArray {
public:
    vector<int> prefixSum , nums; 
    NumArray(vector<int>& nums) {
        this->nums = nums; 
    
        int size = this->nums.size(); 
        prefixSum.resize(size); 
        prefixSum[0] = this->nums[0]; 
        for(int i = 1; i < size; i++){
            prefixSum[i] = this->nums[i]+prefixSum[i-1]; 
        }
        // for(int i : prefixSum){
        //     cout<<i;
        // }
    }
    
    int sumRange(int left, int right) {
        if(left == 0){
            return prefixSum[right]; 
        }
        else{ 
            return prefixSum[right]-prefixSum[left-1]; 
        }
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */