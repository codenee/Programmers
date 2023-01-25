<h2><a href=https://school.programmers.co.kr/learn/courses/30/lessons/86971>86971. 전력망을 둘로 나누기</a></h2><h3>Level 2</h3>

`n`개의 송전탑이 전선을 통해 하나의 형태로 연결되어 있습니다. 당신은 이 전선들 중 하나를 끊어서 현재의 전력망 네트워크를 2개로 분할하려고 합니다. 이때, 두 전력망이 갖게 되는 송전탑의 개수를 최대한 비슷하게 맞추고자 합니다.

송전탑의 개수 `n`, 그리고 전선 정보 `wires`가 매개변수로 주어집니다. 전선들 중 하나를 끊어서 송전탑 개수가 가능한 비슷하도록 두 전력망으로 나누었을 때, 두 전력망이 가지고 있는 송전탑 개수의 차이(절대값)를 `return` 하도록 `solution` 함수를 완성해주세요.
<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>
<pre><strong>Input:</strong> wires= [[1,3],[2,3],[3,4],[4,5],[4,6],[4,7],[7,8],[7,9]]
<strong>Output:</strong> 3</pre>