<h2><a href="https://school.programmers.co.kr/learn/courses/30/lessons/76502">76502. 괄호 회전하기</a></h2><h3>Level 2</h3>
대괄호, 중괄호, 그리고 소괄호로 이루어진 문자열  s가 매개변수로 주어집니다. 이  s를 왼쪽으로 x (0 ≤ x < (s의 길이)) 칸만큼 회전시켰을 때  s가 올바른 괄호 문자열이 되게 하는 x의 개수를 return 하도록 solution 함수를 완성해주세요.
<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>
<pre><strong>Input:</strong> s="[](){}"
<strong>Output:</strong> 3</pre>

<h2> comments </h2>
<h3>solution 1 </h3>
<p>기존 괄호 문제는 stack으로 바로 풀 수 있었지만, 왼쪽으로 회전하는 조건이 들어가서 작업을 하나 더 해야 하는 문제입니다.</p>
<h3> solution2</h3>
std::rotate 함수를 사용하여 문자열을 회전시키는 풀이입니다.

std::rotate(s.begin(), s.begin() + 3, s.end()); // 3칸씩 왼쪽 이동

std::rotate(s.begin(), s.end() - 1, s.end()); // 1칸씩 오른쪽 이동