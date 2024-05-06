// Return true if given array is mountain array

class Solution {
    public boolean validMountainArray(int[] arr) {
        int n = arr.length;
        if (n < 3) {
            return false;
        }
        
        int i = 0;
        
        // Increasing phase
        while (i < n - 1 && arr[i] < arr[i + 1]) {
            i++;
        }
        
        // Peak cannot be the first or last element
        if (i == 0 || i == n - 1) {
            return false;
        }
        
        // Decreasing phase
        while (i < n - 1 && arr[i] > arr[i + 1]) {
            i++;
        }
        
        // Check if the array reached the end
        return i == n - 1; // returns false if either while loop (lines 10 and 20) is broken
    }
}
