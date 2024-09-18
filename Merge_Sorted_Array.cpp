class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for(int i=m, j=0; i<m+n; i++)
        {
            nums1[i]=nums2[j];
            j++;
            
        }
        for(int i=0; i<m+n; i++){
            cout << nums1[i] << endl;
        }

        for(int i=0; i<m+n-1; i++)
        {
            for(int j=0; j<m+n-i-1; j++)
            {
                if(nums1[j]>nums1[j+1])
                {
                    int temp = nums1[j];
                    nums1[j] = nums1[j+1];
                    nums1[j+1] = temp;
                }
            }
        }
    }
};