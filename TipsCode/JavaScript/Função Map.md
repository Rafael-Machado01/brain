Pega um conjunto e mapeia
Por exemplo tenho o array ={1,2,3}
Quero mapear ele para serem multiplicado por 2
O map vai criar um novo array ={2,4,6}

O map não vai modificar o array original ele vai criar um novo array.

````
const num = [1,2,3,4];

// Multiplicar por 2

let result = num.map(function(e) {

return e * 2

})
````

![[Pasted image 20250826043320.png]]


# Map encadeado
Utilizando funções para mapear o array

````
 const som10 = function(e){
         return e + 10
        }

        const triplo = function(e) {
         return e * 3
        }

        const money = function(e) {
         return e * 1.00
        }
        result = num.map(som10).map(triplo).map(money)
        console.log(result)
````

