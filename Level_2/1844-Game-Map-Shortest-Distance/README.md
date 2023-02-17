<h2><a href="https://school.programmers.co.kr/learn/courses/30/lessons/1844">게임 맵 최단거리</a></h2><h3>Level 2</h3>

게임 맵의 상태 maps가 매개변수로 주어질 때, 캐릭터가 상대 팀 진영에 도착하기 위해서 지나가야 하는 칸의 개수의 **최솟값**을 return 하도록 solution 함수를 완성해주세요. 단, 상대 팀 진영에 도착할 수 없을 때는 -1을 return 해주세요.

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>
<pre><strong>Input:</strong> maps=[[1,0,1,1,1],[1,0,1,0,1],[1,0,1,1,1],[1,1,1,0,1],[0,0,0,0,1]]
<strong>Output:</strong> 11</pre>

<h2> comments </h2>
<p> 
시작 지점인 (0, 0)은 카운트 안했기 때문에 마지막에 도착 지점에 값이 있다면 1을 더해준다.

</p>