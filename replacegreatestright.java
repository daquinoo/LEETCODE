// Replace every element in that array with the greatest element among the elements to its right, and replace the last element with -1

class Solution {
    public int[] replaceElements(int[] arr) {
        int n = arr.length;
        int maxSoFar = -1;
        for (int i = n - 1; i >= 0; i--) {
            int temp = arr[i];
            arr[i] = maxSoFar;
            maxSoFar = Math.max(maxSoFar, temp);
        }
        return arr;
    }
}
