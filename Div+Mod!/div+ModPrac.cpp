#include <cstdio>

// Best Solution so far for this problem.
// The intuition here is select the r which is the max possible value for most values of a, then we check for the previous values of r, that is r-1
// If still (r-1) is greater than or equal to l, then tmp = (r/a - 1) + (a - 1).
// If this tmp value is less than our original res then update it.

int main()
{

    long t;
    scanf("%ld", &t);
    while (t--)
    {
        long l, r, a;
        scanf("%ld %ld %ld", &l, &r, &a);
        long d = r / a;
        long m = r % a;
        long res = d + m;
        long prev = (d - 1) * a + (a - 1); // This is same as r-1
        // printf("%ld\n", prev);
        // long prev1 = r - 1;
        // printf("%ld\n", prev1);
        if (prev >= l)
        {
            long tmp = (d - 1) + (a - 1);
            res = (res > tmp) ? res : tmp;
        }

        printf("%ld\n", res);
    }
}