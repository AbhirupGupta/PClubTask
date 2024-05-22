# Gen $\Omega$ Hitler

This is a backtracking problem which I have solved using Recursion.

I do no have much in-depth knowledge about Dynamic Programming or graphs which probably could have been used to come up with a much more efficient algorithm.

The reason to use a multi-set for storing the damage is clearly wastage of memory space. However I did this as I wanted to further complicate the Question, which I couldn't do in limited time. Ultimately I didn't fix it.

The idea behind my solution given in 'SoultionCode.cpp' is to calculate damage along all possible paths from 0,0 to 3,3 and then use data of minimum result.
One problem is that the code also checks the paths that do not end in 3,3 thus detoriating the time complexity. DFS probably cannot be used here. At present, I do not have the resources to come up with a more efficient algorithm. 


