int mySqrt(int x) {
    long beg =0,end =x,mid;
    while (beg <= end) {
        mid = beg+(end-beg) / 2;
        if (mid*mid == x)
            return mid;
        else if (mid*mid<x)
            beg =mid + 1;
        else
            end =mid - 1;
    }
    return end;
}
