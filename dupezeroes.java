// Duplicate each zero instance in the array, shifting pre-existing elements one unit to the right. 

// Note that elements shifted past the original array length are not written.

class Solution {
    public void duplicateZeros(int[] arr) {
        for (int i=0; i<arr.length-1; i++)
        {
            if (arr[i] == 0)
            {
                for (int j=arr.length-1; j>i; j--)
                {
                    arr[j] = arr[j-1];
                }
                i++;
            }
        }
    }
}
