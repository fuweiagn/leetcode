// simple DP implementation
int tribonacci(int n)
{
    if (n < 1) return 0;
    else if (n < 3) return 1;
    int f = 0, g = 1, h = 1;
    while (2 < n--) {
        int hcpy = h;
        int gcpy = g;
        h = f + g + h;
        g = hcpy;
        f = gcpy;
    }
    return h;
}