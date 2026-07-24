
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> product;
        int prod_store = 1;

        for (size_t i = 0; i < nums.size(); i++) {
            for (size_t j = 0; j < nums.size(); j++) {
                // Skip multiplying the element at index i
                if (i != j) {
                    prod_store *= nums[j];
                } 
            }
            product.push_back(prod_store);
            prod_store = 1;
        }

        return product;
    }
};