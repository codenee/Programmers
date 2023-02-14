<h2><a href="https://school.programmers.co.kr/learn/courses/30/lessons/155651">호텔 대실 </a></h2><h3>Level 2</h3>

호텔을 운영 중인 코니는 최소한의 객실만을 사용하여 예약 손님들을 받으려고 합니다. 한 번 사용한 객실은 퇴실 시간을 기준으로 `10`분간 청소를 하고 다음 손님들이 사용할 수 있습니다.  
예약 시각이 문자열 형태로 담긴 2차원 배열 `book_time`이 매개변수로 주어질 때, 코니에게 필요한 최소 객실의 수를 `return` 하는 `solution` 함수를 완성해주세요.

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>
<pre><strong>Input:</strong> book_time = [["15:00", "17:00"], ["16:40", "18:20"], ["14:20", "15:20"], ["14:10", "19:20"], ["18:20", "21:20"]]
<strong>Output:</strong> 3 </pre>

<h2> comments </h2>
<h3>solution 1 </h3>
<p> 
start time과 end time을 관리하기 위한 room 구조체를 만듭니다.

room구조체 원소들은 오름차순으로 정렬되야 하는데 vector와 priority_queue는 기본 정렬 값이 다릅니다.

따라서 vector에서 사용하기 위한 `operator<` 를 정의, priority_queue에서 사용하기 위한 `operator>` 를 정의합니다.

정렬의 기준 값도 서로 다릅니다. vector의 기준 값은 `start time`, priority_queue는 `end time`입니다.

room형식으로 가지는 vector와 priority_queue를 생성합니다.
</p>

<h3> solution2</h3>
<p>
priority_queue 에는 `end time`만 저장합니다. 

book_time배열을 `start time`을 기준으로 오름차순으로 정렬합니다.
(pq `end time` <=  vector `start time` )비교하여 시간이 겹치는지 확인합니다.
시간이 안겹친다면 -> 같은 방 배정으로 `pq.pop`연산을 수행합니다.
시간이 겹친다면 -> 다른 방 배정으로 `pq.push`연산을 수행합니다.
pq의 크기가 방의 개수가 됩니다.
pq는 `end time` 저장소임과 동시에 방의 개수를 나타낼 수 있습니다.
</p>