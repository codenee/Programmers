<h2><a href="https://school.programmers.co.kr/learn/courses/30/lessons/12909">12909. 올바른 괄호</a></h2><h3>Level 2</h3>
괄호가 바르게 짝지어졌다는 것은 '(' 문자로 열렸으면 반드시 짝지어서 ')' 문자로 닫혀야 한다는 뜻입니다. 예를 들어

-   "()()" 또는 "(())()" 는 올바른 괄호입니다.
-   ")()(" 또는 "(()(" 는 올바르지 않은 괄호입니다.

'(' 또는 ')' 로만 이루어진 문자열 s가 주어졌을 때, 문자열 s가 올바른 괄호이면 true를 return 하고, 올바르지 않은 괄호이면 false를 return 하는 solution 함수를 완성해 주세요.
<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>
<pre><strong>Input:</strong> s="()()"
<strong>Output:</strong> true</pre>

<h2> comments </h2>
<h3>solution 1 </h3>
<p>stack 을 사용한 풀이입니다.</p>

<h3> solution2</h3>
문자열 s는 '(' 과')'로만 이루어져 있으므로 '(' 문자가 나오면 1증가, ')'문자가 나오면 1감소하여 0이 되면 올바른 짝이 되는 공식을 사용한 풀이입니다.