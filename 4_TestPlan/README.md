# TEST PLANE AND OUTPUT
## Table no: High level test plan
Test ID  |	Description	| Exp I/P | Exp O/P | 	Actual Out | Type Of Test
-------  |  ---------   |  ------ |  -----  |  ---------   |  ------ 
H_01  | First player's input | a |  X  |  X   |  	Requirement based
H_02  | Second player's input | b |  O  |  O   |  	Requirement based
H_03  | First player's input | f |  X  |  X   |  	Requirement based
H_04  | Second player's input | g |  O  |  O   |  Requirement based
H_05  | First player's input | m |  X  |  X   |  	Requirement based
H_06  | Second player's input | z |  O  |  O   |  	Requirement based
H_07  |  The player gives the invalid input  |  7 |  Invalid move  |  Invalid move   | Scenario based
H_08  |  The player gives the invalid input  |  r |  Invalid move  |  Invalid move   | Scenario based
H_09  |  The player gives the invalid input  |  & |  Invalid move  |  Invalid move   | Scenario based
H_10  |  The player gives the invalid input  |  + |  Invalid move  |  Invalid move   | Scenario based
H_11  |  The player gives the invalid input  |  A |  Invalid move  |  Invalid move   | Scenario based
H_12  |  The player press enter without giving input   |    |  Invalid move  |  Invalid move   | Boundary based

## Table no: Low level test plan
Test ID  |	Description	| Exp I/P | Exp O/P | 	Actual Out | Type Of Test
-------  |  ---------   |  ------ |  -----  |  ---------   |  ------ 
L_01  | First row is 4 X  | X X X X |  Player 1 win   |  Player 1 win  |  Requirement based
L_02  | First column is 4 X  | X X X X |  Player 1 win   |  Player 1 win  |  Requirement based
L_03  | Third row is 4 O  | O O O O |  Player 2 win   |  Player 2 win  |  Requirement based
L_04  | Second column is 4 O | O O O O  |  Player 2 win   |  Player 2 win  |  Requirement based
L_05  | Diagonal is 4 O  | O O O O |  Player 2 win  |  Player 2 win   | Requirement based
L_06  | Diagonal is 4 X  | X X X X |  Player 1 win  |  Player 1 win   | REquirement based
L_07  | Check if not 4 X  | X O X X | Game draw |  Game draw   | Scenario based
L_08  | Check if not 4 O  | O X O O | Game draw | Game draw | Scenario based

## Output
### Game Draw
![](https://github.com/vai312/M1_Game_Tic_Tac_Toe/blob/main/4_TestPlan/Output/Game%20Draw.png)
### Invalid Move
![](https://github.com/vai312/M1_Game_Tic_Tac_Toe/blob/main/4_TestPlan/Output/Invalid%20move.png)
### Player 1 Win
![](https://github.com/vai312/M1_Game_Tic_Tac_Toe/blob/main/4_TestPlan/Output/player%201%20win.png)
### Player 2 Win
![](https://github.com/vai312/M1_Game_Tic_Tac_Toe/blob/main/4_TestPlan/Output/player%202%20win.png?raw=true)



