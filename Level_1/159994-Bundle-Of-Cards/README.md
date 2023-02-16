<h2><a href="https://school.programmers.co.kr/learn/courses/30/lessons/159994">카드 뭉치 </a></h2><h3>Level 1</h3>

문자열로 이루어진 배열 `cards1`, `cards2`와 원하는 단어 배열 `goal`이 매개변수로 주어질 때, `cards1`과 `cards2`에 적힌 단어들로 `goal`를 만들 있다면 "Yes"를, 만들 수 없다면 "No"를 return하는 solution 함수를 완성해주세요.

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>
<pre><strong>Input:</strong> cards1=["i", "drink", "water"], cards2=["want", "to"], goal=["i", "want", "to", "drink", "water"]
<strong>Output:</strong> "Yes" </pre>

<h2> comments </h2>
<p> 
카드를 사용하지 않고 다음 카드로 넘어 갈 수 없음으로 iterator를 이용해서 풀었습니다.

goal 요소중에 같은 단어가 있다면 ++iter 후 다음 요소를 검사합니다.

iter1, 2에 같은 단어가 없다면 goal의 단어 배열을 만들 수 없는 것임으로 "No"를 반환합니다.