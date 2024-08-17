//binary search
class Solution {
public:
    int time(vector<int>& v, int hour) {
        int totalhour = 0;
        for (int i = 0; i < v.size(); i++) {
            totalhour += ceil ((v[i] + hour - 1) / hour);
        }
        return totalhour;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int high = *max_element(piles.begin(), piles.end());
        int low=1;
        int ans=high;
        while(low<=high){
           int  mid=(low+high)/2;
           int totalhour=time(piles,mid);
            if(totalhour<=h){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};
//brute.force
class Solution {
public:
    int time(vector<int>& v, int hour) {
        int totalhour = 0;
        for (int i = 0; i < v.size(); i++) {
            totalhour += (v[i] + hour - 1) / hour;
        }
        return totalhour;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxi = *max_element(piles.begin(), piles.end());
        for (int i = 1; i <= maxi; i++) {
            int requiretime = time(piles, i);
            if (requiretime <= h) {
                return i;
            }
        }
        return 0;
    }
};
