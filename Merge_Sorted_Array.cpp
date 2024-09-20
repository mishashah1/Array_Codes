#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // Copy elements from nums2 into nums1, starting from index m
        for (int i = m, j = 0; i < m + n; i++) {
            nums1[i] = nums2[j];
            j++;
        }
        
        // Print the merged array before sorting (optional, for debugging)
        for (int i = 0; i < m + n; i++) {
            cout << nums1[i] << endl;
        }
        
        // Sort the merged array using bubble sort
        for (int i = 0; i < m + n - 1; i++) {
            for (int j = 0; j < m + n - i - 1; j++) {
                if (nums1[j] > nums1[j + 1]) {
                    // Swap elements if they are in the wrong order
                    int temp = nums1[j];
                    nums1[j] = nums1[j + 1];
                    nums1[j + 1] = temp;
                }
            }
        }
    }
};

int main() {
    Solution sol;
    vector<int> nums1 = {1, 2, 3, 0, 0, 0};  // nums1 has extra space for nums2
    vector<int> nums2 = {2, 5, 6};           // nums2
    int m = 3;  // Number of elements initialized in nums1
    int n = 3;  // Number of elements in nums2

    // Merge nums2 into nums1
    sol.merge(nums1, m, nums2, n);

    // Print the final sorted array
    cout << "Sorted merged array:" << endl;
    for (int i = 0; i < m + n; i++) {
        cout << nums1[i] << " ";
    }
    cout << endl;

    return 0;
}
