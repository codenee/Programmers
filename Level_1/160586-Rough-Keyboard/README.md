<h2><a href="https://school.programmers.co.kr/learn/courses/30/lessons/160586">대충 만든 자판</a></h2><h3>Level 1</h3>

1번 키부터 차례대로 할당된 문자들이 순서대로 담긴 문자열배열  `keymap`과 입력하려는 문자열들이 담긴 문자열 배열  `targets`가 주어질 때, 각 문자열을 작성하기 위해 키를 최소 몇 번씩 눌러야 하는지 순서대로 배열에 담아 return 하는 solution 함수를 완성해 주세요.

단, 목표 문자열을 작성할 수 없을 때는 -1을 저장합니다.

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>
<pre><strong>Input:</strong> keymap=["ABACD", "BCEFD"], targets=["ABCD","AABB"]
<strong>Output:</strong> [9, 4]</pre>

<h2> comments </h2>
<p> 
keymap배열, targets배열의 요소를 하나하나 접급하여 비교하는 방법은 비효율적이고 시간복잡도를 초과할거 같아 다른 방법을 생각해보았습니다.

문제를 풀기위한 포인트는 "**keymap 벡터의 어떤 요소이던지 먼저 나오는 알파벳의 순서로 키를 누른다.**" 입니다.

즉, keymap의 2차원 벡터에 저장되어 있는 요소들의 알파벳들을 index 빠른 순서로 저장하면 됩니다.

map 자료구조를 사용하여 (알파벳, 위치) 쌍으로 저장하여 문제를 접근하였습니다.