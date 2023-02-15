<h2><a href="https://school.programmers.co.kr/learn/courses/30/lessons/152995">인사 고과 </a></h2><h3>Level 3</h3>

각 사원의 근무 태도 점수와 동료 평가 점수 목록 `scores`이 주어졌을 때, 완호의 석차를 return 하도록 solution 함수를 완성해주세요.

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>
<pre><strong>Input:</strong> scores = [[2,2],[1,4],[3,2],[3,2],[2,1]]
<strong>Output:</strong> 4 </pre>

<h2> comments </h2>
<p> 원호의 점수는 0번째 인덱스로 고정되어 있어서 인덱스 관리를 할 필요는 없는 문제입니다.

원소의 점수와 map을 사용해서 간단하게 풀려고 했지만 쉽게 해결되진 않았습니다.

문제 접근 방법을 바꾸었습니다.

먼저, 완호가 인센티브를 받을 수 있는지 확인하고

받을 수 있다면 받을 수 있는 직원들의 점수를 저장합니다.

저장한 점수들을 이용해서 원호의 rank를 구합니다.
</p>
<h3>solution 1 </h3>
<p> 
</p>
<h3> solution2</h3>
<p>
</p>
<h3> solution3</h3>
<p>
점수는 [근무 태도 , 동료 평가] 로 이루어져 있습니다.

rank를 계산하기 위해 vector 정렬 함수를 정의했습니다.

(근무 태도) 점수가 같다면 -> (동료 평가) 점수를 기준으로 오름 차순 정렬,

(근무 태도) 점수가 다르다면 -> (근무 태도) 점수를 기준으로 내림 차순 정렬합니다.
