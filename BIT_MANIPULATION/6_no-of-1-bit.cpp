https://www.interviewbit.com/problems/number-of-1-bits/

int Solution::numSetBits(unsigned int A) {
    int count = 0;
    
    while (A)
        count += A & 1;
        
        A = A >> 1;
    
    return count;
}
