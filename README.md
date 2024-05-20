# Gen $\Omega$ Hitler

It is 2350 and humans now have hitpoints like video game characters. The *Sigma Males* led by *Hitler*  have decided to *slayyy* all *Alpha Males*.
To do so, the new *Gen* $\Omega$ *Hitler* wants to send each *Alpha Male* through a *4 X 4* grid of rooms as shown. Each room either has a gas which 
when inhaled reduces the hitpoints of the *Alpha Male* by some amount OR a medicine to recover hitpoints OR the room is blocked.The amount of change in hitpoint is specified in each box (indicating the room) of the grid. 

The *Alpha Male* has 100 hitpoints initially. Maximum possible hitpoint is 200.

He enters at the top left corner and the exit is at the bottom right corner.
He is allowed to move to any room adjacent to his current room.
However he cannot re-enter a room or enter a blocked room.

*example:*

| 1 | -2 | 3 | 4 | 5 |
|-|-|-|-|-|
| 6 |-7 |-8 |9 |10 |
| 2| 3| 0| 5| 6|
|7 |8 |9 |-1 |2 |
|3 |-4 |5 |6 |7 |

Moreover the criminal manages to sneak in *k* gas masks, which make him immune to the damage of the gas. He can use one gas mask in one room only (i.e non-reusable gas masks).
Help Hitler find out the maximum possible hitpoint of the *Alpha Male* after he leaves the grid.

**INPUT:**

The first line of the input contains an integer *t*(1 <= *t* <=10^3) denoting number of test cases. 

The second line of the input contains an integer *k*(1<=k<=3) denoting the number of gas masks.

Each test case contains *25* space-separated integers in the range [-10,10].

Negative integers indicate poisonous gas, positive integers indicate medicine while *'0'* indicates a blocked room.

**OUTPUT:**

For each test case, output a single integer indicating the final hitpoint of the *Alpha Male*.

Example:

*input*:

1

2

1
2
3
4
5
6
7
8
9
1
2
3
4
5
6
7
8
9
1
2
3
4
5
6
7

*output*:

18

Note:

| *1X* | *2X* | *3X* | *4X* | *5X* |
|-|-|-|-|-|
| 6 |7 |8 |9 |*1X* |
| 2| 3| 4| 5| *6X*|
|7 |8 |9 |1 |*2X* |
|3 |4 |5 |6 |*7X* |

The criminal follows the path shown by the X's and uses the *2* masks in rooms which do damage of amount *6* and *7* respectively.







