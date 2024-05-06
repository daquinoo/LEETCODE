class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxwealth =0;
        int newwealth =0;
        for (int i=0; i < accounts.size(); i++)
        {
            for (int j=0; j < accounts.at(i).size(); j++)
            {
                newwealth += accounts.at(i).at(j);
            }
            if (newwealth > maxwealth)
            {
                maxwealth = newwealth;
            }
            newwealth = 0;
        }
        return maxwealth;
    }
};
