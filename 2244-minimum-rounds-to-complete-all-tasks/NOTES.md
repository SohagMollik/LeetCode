​step 1: First, calculate the frequency of each element.

step 2: If any element frequency is 1 then return -1 otherwise calculate the minimum rounds required to complete all the tasks.

step 3: If number of frequency a number which divisible by 3 that means minimum rounds required is (number of frequency/3) .

step 4: We know that number of frequency a number always is not divisible by 3. Always remainder is 2 or 1. If remainder is 2 that means we can complete 2 tasks of the same difficulty level and minimum required round is (number of frequency/3) +1 . For example a number which frequency is 20 . where (20%3)=2 , to complete first 18 task required minimum round is (20/3)=6 and remainder 2 complete 1 round. so total round is = 6+1 =7 .

step 5: if the remainder is 1 then we can calculate minimum round this way . for example a number which frequency is 10 . where (10%3)=1 , it's not accepted because either 2 or 3 task completed at a time same difficulty level. If we bring 3 task from the value of (number of frequency/3) now remainder is 1+3=4 which is divisible by 2. so, minimum require round is = ((number of frequency/3)-1) + 2 .
