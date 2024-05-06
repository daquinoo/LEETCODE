class Solution {
    public int maximumWealth(int[][] accounts) {
        int maxwealth =0;
        int newwealth =0;
        for (int i=0; i < accounts.length; i++)
        {
            for (int j=0; j < accounts[i].length; j++)
            {
                newwealth += accounts[i][j];
            }
            if (newwealth > maxwealth)
            {
                maxwealth = newwealth;
            }
            newwealth = 0;
        }
        return maxwealth;
    }
}
