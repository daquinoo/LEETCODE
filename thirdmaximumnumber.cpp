// Return the third distinct maximum number in array, if does not exist, return the maximum number.

#include <vector>
#include <set>
using namespace std;

class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> top3;

        for (int num : nums) {
            top3.insert(num);

            if (top3.size() > 3) {
                top3.erase(top3.begin());
            }
        }

        return top3.size() == 3 ? *top3.begin() : *top3.rbegin();
    }
};
