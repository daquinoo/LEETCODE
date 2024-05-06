// Square each number in the array and return the array in increasing order

class Solution {
    public int[] sortedSquares(int[] nums) {
        int[] squares = new int[nums.length];
        int i=0, j =0;
        int min=0;
        for (i=0; i<nums.length; i++)
        {
            squares[i] = nums[i]*nums[i];
        }
        for (i=0; i<squares.length; i++)
        {
            min = squares[i];
            for (j=i; j<squares.length; j++)
            {
                if (squares[j] < min)
                {
                    min = squares[j];
                    squares[j] = squares[i];
                    squares[i] = min;
                }
                    
            }
        }
        return squares;
    }
}
