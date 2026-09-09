class Solution {
public:
    long long countCommas(long long n) {
        long long comma = 0;
        long long b = 1000;
        while (n >= b) {
            comma += (n - b + 1);
            b *= 1000;
        }
        return comma;
    }
};