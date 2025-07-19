# 0 = OFF
Porta fecha, ausência de energia.

# 1 = ON
Porta aberta, presença de energia.

# E AND ^

**Todos precisam ser verdade.

```
A^B
A B A^B
0 0 0
0 1 0
1 0 0 
1 1 1 
````

````
Ou use a multiplicação.
A B A^B
0x0=0
0x1=0
1x0=0 
1x1=1
````

# Ou OR v

**Alguma precisa ser verdadeira.
````
A B AvL
```
0+0=0
0+1=1
1+0=1
1+1=1
````


# Não Not ¬

```
A ¬A 
0  1
1  0
````
