<h2><a href="https://school.programmers.co.kr/learn/courses/30/lessons/64062">64062. 징검다리 건너기 </a></h2><h3>Level 2</h3>

디딤돌에 적힌 숫자가 순서대로 담긴 배열 `stones`와 한 번에 건너뛸 수 있는 디딤돌의 최대 칸수 `k`가 매개변수로 주어질 때, 최대 몇 명까지 징검다리를 건널 수 있는지 `return` 하도록 `solution` 함수를 완성해주세요.
<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>
<pre><strong>Input:</strong> stones = [2, 4, 5, 3, 2, 1, 4, 2, 5, 1], k = 3
<strong>Output:</strong> 3 </pre>

<h2> comments </h2>
<h3>solution 1 </h3>
<p> 점프 뛸 수 있는 구간의 최댓값을 구하고, 구간 마다 최댓값의 최솟값이 정답입니다.
</p>

<h3> solution2</h3>
multiset을 사용한 풀이입니다.