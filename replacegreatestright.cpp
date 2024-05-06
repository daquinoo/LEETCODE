// Replace every element in that array with the greatest element among the elements to its right, and replace the last element with -1

class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        int maxSoFar = -1;
        for (int i = n - 1; i >= 0; i--) {
            int temp = arr[i];
            arr[i] = maxSoFar;
            maxSoFar = max(maxSoFar, temp);
        }
        return arr;
    }
};
