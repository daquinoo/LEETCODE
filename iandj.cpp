// Given an array arr of integers, check if there exist two indices i and j such that :

// i != j
// 0 <= i, j < arr.length
// arr[i] == 2 * arr[j]

class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        int k = 1, i = 0, j = arr.size() - 1;
        while (i <= j) 
        {
            while (k <= j) 
            {
                if ((arr.at(k)*2 == arr.at(i)) || (arr.at(i)*2 == arr.at(k)))
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
};
