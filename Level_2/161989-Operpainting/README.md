<h2><a href="https://school.programmers.co.kr/learn/courses/30/lessons/161989">덧칠하기</a></h2><h3>Level 2</h3>


한 구역에 페인트를 여러 번 칠해도 되고 다시 칠해야 할 구역이 아닌 곳에 페인트를 칠해도 되지만 다시 칠하기로 정한 구역은 적어도 한 번 페인트칠을 해야 합니다. 예산을 아끼기 위해 다시 칠할 구역을 정했듯 마찬가지로 롤러로 페인트칠을 하는 횟수를 최소화하려고 합니다.

정수  `n`,  `m`과 다시 페인트를 칠하기로 정한 구역들의 번호가 담긴 정수 배열  `section`이 매개변수로 주어질 때 롤러로 페인트칠해야 하는 최소 횟수를 return 하는 solution 함수를 작성해 주세요.

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>
<pre><strong>Input:</strong>n=8, m=4, section=[2,3,6]
<strong>Output:</strong> 2</pre>

<h2> comments </h2>
<p>
롤러 길이의 끝 지점을 기준으로 section 요소들을 검사합니다.
</p>