<h2><a href="https://leetcode.com/problems/minimum-rounds-to-complete-all-tasks/">2244. Minimum Rounds to Complete All Tasks</a></h2><h3>Medium</h3><hr><div><p>You are given a <strong>0-indexed</strong> integer array <code>tasks</code>, where <code>tasks[i]</code> represents the difficulty level of a task. In each round, you can complete either 2 or 3 tasks of the <strong>same difficulty level</strong>.</p>

<p>Return <em>the <strong>minimum</strong> rounds required to complete all the tasks, or </em><code>-1</code><em> if it is not possible to complete all the tasks.</em></p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> tasks = [2,2,3,3,2,4,4,4,4,4]
<strong>Output:</strong> 4
<strong>Explanation:</strong> To complete all the tasks, a possible plan is:
- In the first round, you complete 3 tasks of difficulty level 2. 
- In the second round, you complete 2 tasks of difficulty level 3. 
- In the third round, you complete 3 tasks of difficulty level 4. 
- In the fourth round, you complete 2 tasks of difficulty level 4.  
It can be shown that all the tasks cannot be completed in fewer than 4 rounds, so the answer is 4.
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> tasks = [2,3,3]
<strong>Output:</strong> -1
<strong>Explanation:</strong> There is only 1 task of difficulty level 2, but in each round, you can only complete either 2 or 3 tasks of the same difficulty level. Hence, you cannot complete all the tasks, and the answer is -1.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= tasks.length &lt;= 10<sup>5</sup></code></li>
	<li><code>1 &lt;= tasks[i] &lt;= 10<sup>9</sup></code></li>
</ul>
</div>

# Algorithm for this problem
step 1: First, calculate the frequency of each element.

step 2: If any element frequency is 1 then return -1 otherwise calculate the minimum rounds required to complete all the tasks.

step 3: If number of frequency a number which divisible by 3 that means minimum rounds required is (number of frequency/3) .

step 4: We know that number of frequency a number always is not divisible by 3. Always remainder is 2 or 1. If remainder is 2 that means we can complete 2 tasks of the same difficulty level and minimum required round is (number of frequency/3) +1 . For example a number which frequency is 20 . where (20%3)=2 , to complete first 18 task required minimum round is (20/3)=6 and remainder 2 complete 1 round. so total round is = 6+1 =7 .

step 5: if the remainder is 1 then we can calculate minimum round this way . for example a number which frequency is 10 . where (10%3)=1 , it's not accepted because either 2 or 3 task completed at a time same difficulty level. If we bring 3 task from the value of (number of frequency/3) now remainder is 1+3=4 which is divisible by 2. so, minimum require round is = ((number of frequency/3)-1) + 2 .
