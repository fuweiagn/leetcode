int subtractProductAndSum(int n){
int digit;
    int sum = 0;
    int prod = 1;
    while (n != 0)
    {
        digit = n % 10;
        sum += digit;
        prod *= digit;
        n /= 10;
    }
    return prod - sum;
}