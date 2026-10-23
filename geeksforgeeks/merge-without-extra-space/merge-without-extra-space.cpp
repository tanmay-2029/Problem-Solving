class Solution {
public:
    void mergeArrays(vector<int>& a, vector<int>& b) {
        int n = a.size();
        int m = b.size();

        vector<int> v(n + m);

        int i = 0, j = 0;

        for (int k = 0; k < n + m; k++) {
            if (i >= n) {
                v[k] = b[j++];
            }
            else if (j >= m) {
                v[k] = a[i++];
            }
            else if (a[i] <= b[j]) {
                v[k] = a[i++];
            }
            else {
                v[k] = b[j++];
            }
        }

        for (int k = 0; k < n; k++)
            a[k] = v[k];

        for (int k = 0; k < m; k++)
            b[k] = v[k + n];
    }
};