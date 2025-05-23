class Solution {
    public:
        int hammingWeight(uint32_t n) {
            int c = 0;

            while (n) {
                c += n & 1;
                n >>= 1;
            }

            return c;
        }

        int hammingWeightOpt(uint32_t n) {
            int c = 0;

            while (n) {
                n &= (n - 1);
                ++c;
            }

            return c;
        }
    };
    