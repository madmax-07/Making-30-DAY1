# CONSTRUCTIVE ALGORITHMS
 * In a constructive algorithm there are a lot of possible solutions, and usually any example which satisfies the conditions is accepted.
 * Since there are multiple solutions, you have to find a pattern that can be generated programmatically, and implement it. 
 * These problems are usually ad-hoc, with little knowledge of data structures and algorithms needed. 
 * **the normal strategy for these problems is to manually solve a few example inputs, and try to generalize your thinking process**.

 Lets see an example now:
---
 #### Let 1≤N≤105 and 1≤K≤log2(N) be fixed. Imagine performing a binary search on the values 1...N. Find a value X, 1≤X≤N which would be found in exactly K steps using binary search.

> So our Aim is to  generate an example number which satisfies the above condition (i.e can be found in exactly K steps of a binary search).

---

Let's say we're testing N=16,1≤K≤4 in the problem above
### **INTUTION aka APPROACH**
---
* Basically we have to find a number at the Kth (Lets say 3rd iteration) iteration of binary search 

Lets see the steps 
N=16,K=1: only Mid=8 works.

N=16,K=2: both Mid=4 (0-7) and Mid=12 (9-15) work.

N=16,K=3: Mid=2, Mid=6, Mid=10, Mid=14 work.

N=16,K=4: Mid=1, Mid=3, ...

----
Focus on the very first input we get for each K: it's 8, 4, 2, 1! It seems like there’s a pattern that we can use: we start with N and divide by 2 (rounding down) K times.

Now that we have a pattern, we ought to prove it… In case you are time constrained or have difficulty proving it in the first place, you can just go ahead and use the script i.e write out your proposed solution, and test as many parameter values as you can with your two solutions. You are probably going to miss most parameter values, but that’s okay: patterns rarely break for N >= 4030, and it’s worth the penalty to see if you’re right.

<mark>**Notice that the conditions in this problem can be tested with a simple script(code). You shouldn’t worry about complexity on your script, since we’ll only care about small values of N, as larger answers will be difficult to inspect manually.**</mark>

Now that we have an algorithm which checks if an answer is correct, we can create another function which generates all possible answers, and use both functions to generate a (slow!) solution.

This is very valuable -- instead of having to solve examples yourself, you can just use this solution to see what correct answers look like for different parameter values. So time to put on your detective hat, and try to find a pattern in the outputs you see!

A drawback of this approach is that you might spend time writing scripts without getting any further insight. So consider the risk before attempting this approach -- try the other problems first perhaps?
 Notice that the conditions in this problem can be tested with a simple script. You shouldn’t worry about complexity on your script, since we’ll only care about small values of N, as larger answers will be difficult to inspect manually.
