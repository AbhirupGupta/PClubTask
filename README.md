# Gen $\Omega$ Hitler

It is 2350 and humans now have hitpoints like video game characters. The *Sigma Males* led by *Hitler*  have decided to *slayyy* all *Alpha Males*.
To do so, the new *Gen* $\Omega$ *Hitler* wants to send each *Alpha Male* through a *4 X 4* grid of rooms as shown. Each room either has a gas which 
when inhaled reduces the hitpoints of the *Alpha Male* by some amount OR a medicine to recover hitpoints OR the room is blocked.The amount of change in hitpoint is specified in each box (indicating the room) of the grid. 

The *Alpha Male* has 100 hitpoints initially. Maximum possible hitpoint is 200.

He enters at the top left corner and the exit is at the bottom right corner.
He is allowed to move to any room adjacent to his current room.
However he cannot re-enter a room or enter a blocked room.

*example:*

| 1 | -2 | 3 | -4 |
|-|-|-|-|
| -6 |-7 |-8 |-9 |
| 2| -3| 0| 5|
|7 |-8 |-9 |-1 |

Moreover the criminal manages to sneak in *k* gas masks, which make him immune to the damage of the gas. He can use one gas mask 
in one room only (i.e. non-reusable gas masks).
Help Hitler find out the maximum possible hitpoint of the *Alpha Male* after he leaves the grid.

**INPUT:**

The first line of the input contains an integer *t*( 1 <= *t* <=10^3 ) denoting number of test cases. 

Each test case contains an integer *k*( 0 <= k <=3 ) denoting the number of gas masks, followed by 
*16* space-separated integers in the range [-10,10] in the next line.

Negative integers indicate poisonous gas, positive integers indicate medicine while *'0'* indicates a blocked room.

**OUTPUT:**

For each test case, output a single integer indicating the final hitpoint of the *Alpha Male*. 

Display *-1* if the grid is invalid (i.e. the *Alpha Male* can never reach the exit).

Example:

*input*:

1

1

1 -2 3 -4 -6 -7 -8 -9 2 -3 0 5 7 -8 -9 -1 

*output*:

102

Note:

| *1* | *-2* | *3* | *-4* | 
|-|-|-|-|
| -6 |-7 |-8 |***-9M*** |
| 2| -3| 0| ***5***|
|7 |-8 |-9 |***-1*** |

The *Alpha Male* follows the path : 1 -> (-2) -> 3 -> (-4) -> (-9) -> 5 -> (-1) and uses the only mask in the room which reduces hitpoints by 9 (indicated by *-9M*).

i.e. 1 + (-2) + 3 + (-4) + 5 + (-1) = 2








