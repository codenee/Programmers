<h2><a href="https://school.programmers.co.kr/learn/courses/30/lessons/150368">150368. 이모티콘 할인행사</a></h2><h3>Level 2</h3>


카카오톡 사용자 `n`명의 구매 기준을 담은 2차원 정수 배열 `users`, 이모티콘 `m`개의 정가를 담은 1차원 정수 배열 `emoticons`가 주어집니다. 이때, 행사 목적을 최대한으로 달성했을 때의 이모티콘 플러스 서비스 가입 수와 이모티콘 매출액을 1차원 정수 배열에 담아 `return` 하도록 `solution` 함수를 완성해주세요.

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre><strong>Input:</strong> users=[[40, 10000], [25, 10000]], emoticons=[7000, 9000]
<strong>Output:</strong>[1, 5400] </pre>

<h2> comment </h2>
<p>
backtracking 알고리즘을 사용하여 푸는 문제입니다.

백트래킹이란 가지치기를 통해 가지 않아도 되는 루트는 고려하지 않고 탐색하는 완전 탐색 기법입니니다.

즉, DFS를 사용하여 조건에 맞지 않으면 중단하고 이전으로 되돌아가 다시 조건에 맞는 해를 찾아가는 기법입니다.</p>