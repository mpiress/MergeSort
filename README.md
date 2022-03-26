# Merge Sort: Implementação em C

<div style="display: inline-block;">
<img align="center" height="20px" width="90px" src="https://img.shields.io/badge/Maintained%3F-yes-green.svg"/> 
<img align="center" height="20px" width="60px" src="https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white"/> 
<img align="center" height="20px" width="80px" src="https://img.shields.io/badge/Made%20for-VSCode-1f425f.svg"/> 
<a href="https://github.com/mpiress/midpy/issues">
<img align="center" height="20px" width="90px" src="https://img.shields.io/badge/contributions-welcome-brightgreen.svg?style=flat"/>
<img align="center" height="20px" width="80px" src="https://badgen.net/badge/license/MIT/green"/>
</a> 
</div>

<p> </p>
<p> </p>

<p align="justify">
O algoritmo de ordenação Merge Sort foi criado em 1945 por John Von Newmann, matemático renomado da época. Sua execução considera um processo de ordenação por sub-conjuntos, o que, segundo Newmann, produz um número menor de comparações ao decorrer da ordenação. Sua idéia se baseia em um processo chamado de Divisão e Conquista, no qual o conjunto de entrada é sub-dividido em partes menores, os quais são ordenados através de chamadas recursivas. Contudo, embora seja <b>eficiente</b> para ordenar <b>conjuntos de tamanho médio</b>, seu consumo de memória é considerável, o que o torna pouco praticável para grandes entradas e/ou conjuntos complexos de dados.
</p>

<p align="justify">

> De uma forma geral, pode-se considerar como passos fundamentais do algoritmo:
>
> - Verificar se o caso tratado não é o caso base, no qual os ponteiros de início e fim do conjunto apontam para a mesma posição. Condição que reporta a existência de um único elemento no conjunto, o que já se considera ordenado por definição. 
>
> - Para todos os casos não base, dividir a lista em duas sub listas de tamanhos equivalente, chamando o método de ordenação recursivamente para cada sub lista até alcançar o caso base.
>
>    - Executar em cada sub lista definida no segundo passo uma ordenação parcial do conjunto, seguida de um merge (i.e., junção) entre dois sub conjuntos.

</p>

<p align="justify">

Para implementar esse modelo de ordenação, é preciso definir dois métodos, um recursivo para divisão do conjunto em sub conjuntos e outro para ordenação e junção desses conjuntos menores em uma resposta ordenada. A figura abaixo detalha essas funções em pseudo algoritmo juntamente com um pequeno exemplo de execução.

</p>

<p align="center">
	<img src="imgs/merge.png"/> 
</p> 

