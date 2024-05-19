# Gen $\Omega$ Hilter
***Problem Statement:***

It is 2350 and humans now have hitpoints like video game characters. The *Jazzis* have decided to *slayy* all criminals.
To do so, the new *Gen* $\Omega$ *Hilter* wants to send each criminal through a *5 X 5* grid of rooms as shown. Each room has a gas which 
when inhaled reduces the hitpoints of the criminal by some amount.The amount is specified in each box of the grid.
The criminal enters at the top right corner and the exit is at the bottom right corner, and he is allowed to move only
rightwards or downwards.

| 1 | 2 | 3 | 4 | 5 |
|-|-|-|-|-|
| 6 |7 |8 |9 |1 |
| 2| 3| 4| 5| 6|
|7 |8 |9 |1 |2 |
|3 |4 |5 |6 |7 |

However the criminal manages to sneak in *k* gas masks, which protect him from the damage of the gas. He can use a gas mask in one room only.
Help Hilter find out the minimum hitpoint loss of the criminal

**INPUT:**

The first line of the input contains an integer *t*(1 <= *t* <=10^3) denoting number of test cases. 

The second line of the input contains an integer *k*(1<=k<=5) denoting the number of gas masks.

Each test case contains *25* space-separated integers in the range [1,9] indicating the damage the gas does in the corresponding rooms.

**OUTPUT:**

For each test case, output a single integer indicating the minimum hitpoint loss the criminal can suffer.

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







