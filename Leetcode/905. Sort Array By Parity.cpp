class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        int left = 0, right = A.size() - 1;

        while (left < right) {
            while (left < right && A[left] % 2 == 0) ++left;
            while (left < right && A[right] % 2 == 1) --right;
            swap(A[left], A[right]);
            left++;
            right--;
        }

        return A;
    }
};
