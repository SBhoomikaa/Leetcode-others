
int divide(int dividend, int divisor) {
    // Handle the special case where dividing INT_MIN by -1 would overflow
    if (dividend == INT_MIN && divisor == -1) {
        return INT_MAX;
    }

    // Determine the sign of the result
    int isNegative = !((dividend ^ divisor) >= 0); // True if the signs are different

    // Use long to handle potential overflows
    long absDividend = labs((long)dividend);
    long absDivisor = labs((long)divisor);
    long quotient = 0;

    // Perform the division using bitwise shifts
    while (absDividend >= absDivisor) {
        long tempDivisor = absDivisor, multiple = 1;
        while (absDividend >= (tempDivisor << 1)) {
            tempDivisor <<= 1;
            multiple <<= 1;
        }
        absDividend -= tempDivisor;
        quotient += multiple;
    }

    if (isNegative) {
        quotient = -quotient;
    }

    // Clamp result to the range of int
    if (quotient > INT_MAX) {
        return INT_MAX;
    }
    if (quotient < INT_MIN) {
        return INT_MIN;
    }

    return (int)quotient;
}
