class Solution {
   public:
    double findMedianSortedArrays(vector<int>& nu1, vector<int>& nu2) {
        int n1 = nu1.size();
        int n2 = nu2.size();
        int a[n1 + n2];
        int i = 0, j = 0, k = 0;

        while (i < n1 && j < n2) {
            if (nu1[i] < nu2[j]) {
                a[k] = nu1[i];
                i++;
            } else {
                a[k] = nu2[j];
                j++;
            }
            k++;
        }
        while (i < n1) {
            a[k] = nu1[i];
            i++;
            k++;
        }
        while (j < n2) {
            a[k] = nu2[j];
            j++;
            k++;
        }
        if ((n1 + n2) & 1) {
            return a[(n1 + n2) / 2];
        } else {
            double x = 1.0 * (a[(n1 + n2) / 2] + a[(n1 + n2) / 2 - 1]) / 2;
            return x;
        }
    }
};