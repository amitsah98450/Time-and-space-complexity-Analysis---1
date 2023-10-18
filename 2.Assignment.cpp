 // 1. Calculate the time complexity for the following code snippet.

for(int i = 0; i < n; i++) {
  for(int j = 0; j * j < n; j++) {
        cout << “PhysicsWallah ”;
    }
}

initialization of i =0 and j < n^(1/2)
i = 0; j = 0, 1, 2, 3, 4, 5,......., n^(1/2): 1 + n^(1/2)(1+n^(1/2))/2 --> (2+ n^(1/2) + n)/2 ( we have made an assumption that n^(1/2) is some natural number)
i = 1; j = 0, 1, 2, 3, 4, 5,......., n^(1/2):1 + n^(1/2)(1+n^(1/2))/2 --> (2+ n^(1/2) + n)/2
i = 2; j = 0, 1, 2, 3, 4, 5,......., n^(1/2):1 + n^(1/2)(1+n^(1/2))/2 --> (2+ n^(1/2) + n)/2
i = 3; j = 0, 1, 2, 3, 4, 5,......., n^(1/2):1 + n^(1/2)(1+n^(1/2))/2 --> (2+ n^(1/2) + n)/2
i = n; j = 0, 1, 2, 3, 4, 5,......., n^(1/2): 1 + n^(1/2)(1+n^(1/2))/2 --> (2+ n^(1/2) + n)/2

total no of iteration = n * (2 + n^(1/2) + n)/2
= (2n + n^3/2 + n^2)/2
ignoring the lowest order term and coefficient of highest order term
= n^(3/2)

time compexity: O(n^(3/2)

//2. Calculate the time complexity for the following code snippet.

int c = 0;
for(int i = 0; i < n; i++) {
    for(int j = 1; j < n; j *= 2) {
    c++;
    }
}

intialization i = 0 & j = 1 
i = 0; j = 1 , 2, 4, 8, 16, 32,....n
i = 1; j = 1 , 2, 4, 8, 16, 32,....n
i = 2; j = 1 , 2, 4, 8, 16, 32,....n
i = 3; j = 1 , 2, 4, 8, 16, 32,....n
i = n; j = 1 , 2, 4, 8, 16, 32,....n

calculating the no of iteration for j loop 
we can write j = 2^0,  2^1, 2^2, 2^3,......2^(k+1) ( k+1 is no of iterations )
2^(k+1) = n 
appying the log on both sides with base 2
k+1 = logn

the outer loop i runs for n times approximately
total iterations for both loops = iterations of i * iterations of j
 = n(k+1)
 = nlogn
Time complexity: O(n(k+1)) = O(nlogn)

// 3.Calculate the time complexity for the following code snippet.

int c = 0;
for(int i = 0; i < n; i++) {
    for(int j = 1; j * j < n; j *= 2) {
    c++;
    }
}

intialization i = 0 & j =1 & j = n^(1/2)
i = 0; j = 1, 2, 4, 8, 16, 32,.....n^(1/2)
i = 1; j = 1, 2, 4, 8, 16, 32,.....n^(1/2)
i = 2; j = 1, 2, 4, 8, 16, 32,.....n^(1/2)
i = n; j = 1, 2, 4, 8, 16, 32,.....n^(1/2) ( suppose both loop terminates at n and n^(1/2) respectively)

j= 2^0,  2^1, 2^2, 2^3,......2^(k+1) ( k+1 is no of iterations )
2^(k+1) = n^(1/2)
applying log on both the side
k+1 = log(n^1/2)
k+1 = 1/2 logn
k+1 =logn 

total no of iterations = loop j runs for n times = n * log(n)
Time Complexity: O(nlogn)

// 4.Calculate the time complexity for the following code snippet.

int c = 0;
for(int i = n; i > 0; i /= 2) {
    for(int j = 0; j < i; j ++) {
    c++;
    }
}

i = n; j runs for n times
i = n/2; j runs for n/2 times
i = n/4; j runs for n/4 times
i = n/8; j runs for n/8 times
i = 1; j runs for 1 times

adding all iterations 
 = n + n/2 + n/4 + n/8+ ....1
 = n[ 1 - (1/2)^logn]/(1 - 1/2) where logn is no of iterations of outer loop
 = 2[ n - n(1/2)^logn]
 = 2[ n - n * 1^logn / 2^logn]
 = 2[n - n*1/n]
 = 2n -2
 
 time Complexity: O(2n-2) = O(n)

// 5. Calculate the time complexity for the following code snippet.
int c = 0;
for(int i = 1; i < n; i*=2) {
    for(int j = n; j > i; j--) {
    c++;
    }
}

i = 1; j = n,n-1, n-2, n-3,.....1: n
i = 2; j = n,n-1, n-2, n-3,.....2: n- 2
i = 4; j = n,n-1, n-2, n-3,.....4: n- 4
i = 8; j = n,n-1, n-2, n-3,.....8: n -8
i = n ; j = n: 1

no of iteration = n +  n- 2 + n- 4 + n -8 +........1
= nlogn  -(2 + 4 + 8 + ........1)
= nlogn - [2( 1- 2^logn)/ 1 - 2]
= nlogn + [ 2 - 2n]
= nlogn + 2 - 2n
= nlogn

time complexity: O(logn)



