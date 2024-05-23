# Gen $\Omega$ Hitler

This is a backtracking problem which I have solved using Recursion.

I do no have much in-depth knowledge about Dynamic Programming or graphs which probably could have been used to come up with a much more efficient algorithm.

The idea behind my solution given in 'SoultionCode.cpp' is to calculate damage along all possible paths from 0,0 to 3,3 and then use the minimum value.
To ensure we do not go back to the same room or get stuck in a loop, we can consider a visited room as a blocked room (change value to 0 temporarily). Then backtrack to the same room and explore other paths.
One problem is that the code also checks the paths that do not end in 3,3 thus detoriating the time complexity. At present, I do not have the resources to come up with a more efficient algorithm. 


