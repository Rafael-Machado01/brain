# Operador E / AND / ^

***Quando os dois for Verdadeiro.**
P Q  P ^ Q
V V V
V F F
F V F
V F F

# Operador OU / OR / v

**Quando algum for Verdadeiro.**
P Q P v Q
V V V
V F V
F V V
F F F

# Operador OU DISJ / OR _ _V
**Algum precisa ser verdadeiro porem quando os dois forem verdadeiro é falso.**
P Q P _ V  Q
V V F
V F V
F V V
F F F

# Operador NEGAÇÃO / NOT / ¬
**Alterna os valor se for V vai ser F e se for F vai ser V**
P ¬P
V F
F V

# Operador Se Então / IF THEN / -> 
**Só não pode ser VF**
P Q P -> Q
V V V
V F F
F V V
F F V

# Operador Se Somente se / IF ONLY IF / <->
**Os dois precisam ser iguais. se for VV então é V se for VF é falso.**
P Q P <-> Q
V V V
V F F
F V F
F F V



