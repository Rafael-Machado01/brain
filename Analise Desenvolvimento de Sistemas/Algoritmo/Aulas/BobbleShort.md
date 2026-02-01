# Um Bobble Short é um algoritimo para organizar uma vetor, lista por uma condição.

_Neste código usamos para organizar um vetor por ordem decrescente._

```
for(int i=0;i < T; i++) {
	for(int j=i+1; j < T; j++) {
		if(vCons[i] < vCons[j]) {
			float swapCons = vCons[i]; // Passando o valor de i que é menor que j para swap
			string swapNome = vNome[i];

			vCons[i] = vCons[j]; // Passando o valor de j para o i
			vCons[j] = swapCons; // Passando o valor de swap para o j

			vNome[i] = vNome[j];
			vNome[j] = swapNome;
		}
	}
}
````


De uma olhada neste desafio de lógica e vai entender um pouco! [[Desafio dos baldes]]


