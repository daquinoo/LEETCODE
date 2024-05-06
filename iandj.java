// Given an array arr of integers, check if there exist two indices i and j such that :

// i != j
// 0 <= i, j < arr.length
// arr[i] == 2 * arr[j]

class Solution {
    public boolean checkIfExist(int[] arr) {
        int k = 1, i = 0, j = arr.length - 1;
        while (i <= j) 
        {
            while (k <= j) 
            {
                if ((arr[k]*2 == arr[i]) || (arr[i]*2 == arr[k]))
                {
                    return true;
                } 
                else 
                {
                    k++;
                }
            }
            i++;
            k = i+1;
        }
        return false;
    }
}
