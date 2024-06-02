class Solution {
public:
    bool closeStrings(string word1, string word2) {
        // passed 108/167
        // if(word1.length()!=word2.length())
        // return false;

        // sort(word1.begin(),word1.end());
        // sort(word2.begin(),word2.end());
        // int i=0;
        // while(i<word1.length() && i<word2.length()){
        //     if(word1[i]!=word2[i]){
        //         word2[i]=word1[i];
        //     }
        //     i++;
        // }
        // return true;
        if (word1.length() != word2.length())
            return false;

        unordered_map<char, int> freq1, freq2;
        unordered_set<char> set1, set2;

        for (char c : word1) {
            freq1[c]++;
            set1.insert(c);
        }

        for (char c : word2) {
            freq2[c]++;
            set2.insert(c);
        }

        if (set1 != set2)
            return false;

        vector<int> freqCount1, freqCount2;
        for (auto it : freq1)
            freqCount1.push_back(it.second);
        for (auto it : freq2)
            freqCount2.push_back(it.second);

        sort(freqCount1.begin(), freqCount1.end());
        sort(freqCount2.begin(), freqCount2.end());

        return freqCount1 == freqCount2;
    

        
    }
};
