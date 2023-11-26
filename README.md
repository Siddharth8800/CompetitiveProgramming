# CompetitiveProgramming

## K-Periodic (Time Complexity O(n + k x 26) = O(n)) (Space: O(k x 26))
(Every group of all K characters should be equal: abcabcabc, heer k = 3)
Given a string s, we've to find the minimum number of swaps required to convert the string s into a K Periodic string. A character can only be swapped if it's present in arr. The code takes the following inputs:
  - N: size of string
  - M: size of available to swap chars (can use infinite times)
  - K: no. of chars
  - string s
  - available chars

## Weighted Job Scheduling (Time: O(nlogn)) (Space: O(n))
The time complexity of this code is optimized using Binary search to find the non-conflicting job `nc`. It can now fit under constraints 1 <= N <= 10<sup>6</sup>.
Takes the following inputs:
  - N: number of jobs
  - In a loop: start time, end time and profit

## Minimum Platforms (Greedy) (Time: O(nlogn)) (Space: O(1))
Finds a minimum number of platforms required to accommodate all the trains. This is a greedy approach where we sort arrival and departure time arrays, and compare them to increment or decrement the platforms required.
Takes the following input:
  - N: Number of trains
  - In a loop: arrival time and departure time of current train.

## Ninja Pay (Greedy) (Time O(nlogn)) (Space(O(n)))
This problem is very similar to greedy Knapsack, here we have two parameters just like Knapsack, Time and Loss, we have to minimize loss so just sorting the array on the basis of loss and picking jobs that has most loss first will not help, so we find the ratio of Time/Loss of a job, and sort by this ratio in ascending order and that our answer, the sequence to minimize loss.

