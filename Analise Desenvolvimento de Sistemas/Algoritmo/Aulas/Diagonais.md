# Diagonal Principal  DP
É a linha de elementos que vai do canto superior esquerdo até o canto inferior direito.

```
1 2 3
4 5 6
7 8 9

Diagonal Principal é 1 5 9
````
Como achar a DP ?
```
if(i = j) 
````
Acima da DP 
```
if(i < j)
````
Abaixo da DP
````
if(i > j)
````

# Diagonal Secundária DS

É a linha de elementos do canto superior direito até o canto inferior esquerdo.

````
1 2 3 
4 5 6
7 8 9

Diagonal Secundária 3 5 7
````

Como achar a DS ?
```
i + j = n - 1
// n = numero da matriz se é 3x3 2x2
````

Acima da DS
```
i + j <= n -2
````

Abaixo da DS
```
i + j >= n
````


