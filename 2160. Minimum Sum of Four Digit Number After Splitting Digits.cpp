class Solution {
public:
    int minimumSum(int num) {
        vector<int> v;
        while(num!=NULL){
            v.push_back(num%10);
            num=num/10;
        }
        ranges::sort(v);
        return (v[0]*10 + v[2])+(v[1]*10 +v[3]);

    }
};
