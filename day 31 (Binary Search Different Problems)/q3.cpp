/***
    Sqrt(x) : Using Binary search

    Link : https://leetcode.com/problems/sqrtx/description/?source=submission-noac

***/

int mySqrt(int x)
{

    if (x < 2)
        return x;

    // sqrt(x) using binary search

    int start = 0, end = x, ans, mid;

    while (start <= end)
    {

        mid = start + (end - start) / 2;

        if (mid == x / mid)
        {
            ans = mid;
            break;
        }

        else if (mid < x / mid)
        {
            ans = mid;       // potential ans
            start = mid + 1; // check square in the right side
        }

        else
            // mid*mid>x
            end = mid - 1; // check square in the left side
    }

    return ans;
}
