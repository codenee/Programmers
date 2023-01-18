<h2><a href="https://school.programmers.co.kr/learn/courses/30/lessons/133502/solution_groups?language=cpp">133502. 햄버거 만들기</a></h2><h3>Level 1</h3>

재료의 정보를 나타내는 정수 배열 `ingredient`가 주어졌을 때, 포장하는 햄버거의 개수를 `return` 하도록 `solution` 함수를 완성하시오.

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre><strong>Input:</strong> Ingredient = [2, 1, 1, 2, 3, 1, 2, 3, 1]	
<strong>Output:</strong> 2 </pre>

<h2> comment </h2>
<h3> solution 1</h3>
<p>string 뒤에서 부터 4개를 검사하여 푼 풀이이다.</p>
<h3> solution 2</h3>
<p> vector를 사용하여 값을 누적시켜 하나의 요소로 관리하여 푼 풀이이다. </p>