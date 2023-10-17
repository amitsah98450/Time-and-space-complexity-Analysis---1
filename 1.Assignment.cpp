// 1.Calculate the time complexity for the following code snippet.

int c = 0;
for(int i = n; i > 0; i /= 2) {
c++;
}

/*

i = n
i = n, n/2, n/4, n/8, n/16, ......1 ( we know the loop terminates when i > 0 and let the loop terminates when i =1)
i = n/2^0, n/2^1, n/2^2, n/2^3, n/2^4,.......n/2^(x+1),n/2^(x+1) ( where x+1 represents the total no of operations)
now
time complexity: O(x+1) = O(x)
n/2^(x+1) = 1
n = 2^(x+1)
applying log on both the side and remember the base of log is 2
logn = x+1
logn = x
time Complexity: O(x) = O(logn)

*/

//2. Calculate the time complexity for the following code snippet.

int c = 0;
for(int i = n; i > 1; i /= i) {
c++;
}

/*
i = n and i /= i --> i = i/i --> i = 1
the loop runs for only 1 time and is not affected by the value of n
time Complexity: O(1) --> constant time Complexity

*/

//3. Calculate the time complexity for the following code snippet where k is some constant (k<<n).

int c = 0;
for(int i = 0; i < n; i += k) {
c++;
}

/*
i = 0, i += k --> i = i + k
i = 0 , k, 2k, 3k, 4k, 5k,.......n
i = 0, 1k, 2k, 3k, 4k, 5k,.......xk+ (x+1)k ( where x+1 =  total no of iterations & time Complexity: O(x+1) = O(x))
(x+1)k = n
(x+1) = n / k
O(x+1) = O(n/k)
ignoring k as it is small and constant 
Time Complexity: O(n)
*/

//4.Calculate the time complexity for the following code snippet.

int c = 0;
for(int i = 1; i < n; i *= 2) {
c++;
}

/*
i = 1 && i *= 2
i = 1, 2, 4, 8, 16, 32, 64,......n ( suppose loop terminates at n)
i = 2^0, 2^1, 2^2, 2^3, 2^4, 2^5, 2^6,.......2^(k)
no of iterations = k+1
Time Complexity: O(k+1) = O(k)

now 
n = 2^k
applying log on both the side with base 2
logn = k
Time Complexity: O(k) = O(logn)

*/


// 5.Calculate the time complexity for the following code snippet.

int c = 0;
for(int i = 0; i < n; i++) {
c +=i;
}

/*
i = 0, 1, 2, 3, 4, 5,.......n-1 
no of iterations = n-1+1 = n
Time Complexity: O(n)

*/


// 6.Calculate the time complexity for the following code snippet.

int c = 0;
for(int i = 0; i < n; i++) {
for(int j = 0; j < i; j++){
c++;
}
}

/*
i = 0, j loop will not run : 0 iterations
i = 1, j = 0 : 1 iterations
i= 2, j = 0,1 : 2 iterations
i = 3, j = 0,1,2 : 3 iterations
i = 4, j = 0,1,2,3 : 4 iterations
i = 5; j = 0,1,2,3,4 : 5 iterations
i = n, j = 0,1,2,3,4,5,.....n-1: n iterations ( suppose i terminates at n)

we can clearly see that we can find total no of iterations by summing all values of i
no of iterations = 0 + 1 + 2 + 3 + 4+ 5 + 6 ......+n
= n*(n+1)/2 ( sum of n natural numbers)
=  (n^2 + n)/2
= n^2 ( ignoring the lowest order terms and coffecient of highest order term)

Time Complexity: O(n^2)

*/