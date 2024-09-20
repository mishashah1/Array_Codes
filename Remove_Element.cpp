#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0;  
        for (int i = 0; i < nums.size(); i++) {

            if (nums[i] != val) {
                nums[k] = nums[i];  
                k++;
            }
        }
        return k;  
    }
};

int main() {
    Solution sol;
    vector<int> nums = {3, 2, 2, 3};  
    int val = 3;  

    
    int newLength = sol.removeElement(nums, val);

    
    cout << "Array after removing " << val << ":" << endl;
    for (int i = 0; i < newLength; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    
    cout << "New length: " << newLength << endl;

    return 0;
}
