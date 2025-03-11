/*
Michael has a beautiful house. There is only one staircase to reach his bedroom. He used to climb either 1 stair or 2 stairs at a time. If we consider all possible combinations of climbing, in how many ways can Michael reach to the top?

Input Format

An Integer P denotes the number of stairs in the staircase.
If the number of stairs beyond 20, the output should print "Wrong Infrastructure".

Constraints

1<=P<=20

Output Format

The number of ways Michael can climb the staircase to reach to the top

Sample Input 0

5

Sample Output 0

8

Explanation 0

Sample 1: P=5 is the number of stairs in the staircase, the possible way to reach on top would be 8. i.e. 1,1,1,1,1 and 2,2,1. Hence, output will print "8" Sample 2: P=22 is the number of stairs in the staircase But the range of stairs would be 1 to 20. 22 is out of range entry. Hence, it should print Wrong Infrastructure"

Sample Input 1

22

Sample Output 1

Wrong Infrastructure

*/

#include<stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    if (num >= 20) {
        printf("Wrong Infra\n");
    } else {
        printf("%d", ( num + (num / 2) + (num % 2) ) ); 
    }
}
