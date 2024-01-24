class Solution {
public:
    double findMedianSortedArrays(std::vector<int>& nums1, std::vector<int>& nums2) {
        double ans;
        int m = nums2.size();
        for (int i = 0; i < m; i++)
            nums1.push_back(nums2[i]);
        std::sort(nums1.begin(), nums1.end());
        int size = nums1.size();
        if (size % 2 == 0) {
            return (nums1[size / 2 - 1] + nums1[size / 2]) / 2.0;
        } else {
            return nums1[size / 2];
        }
    }
};
