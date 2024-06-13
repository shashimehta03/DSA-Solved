class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        sort(seats.begin(), seats.end());
        sort(students.begin(), students.end());
        int ans = 0;
        for (int i = 0; i < seats.size(); i++) {
            if (students[i] < seats[i]) {
               ans += seats[i] - students[i];

            } else {
                
                 ans += students[i] - seats[i];
            }
        }

        return ans;
    }
};
