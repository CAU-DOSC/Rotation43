NEW BRANCH FOR 2ND PROJECT
# README file for TEAM[4,3]:

This text file describes brief but precise and complete specification of project including:
- funtion descriptions: name, input/output parameters
- declaration of of important data and data types to be included in user header file
- your team's brief ideas of implementations

- - -
Your description start form next line and do not delete lines upto this point.

Function Ownership List

 Trivial Swap Function - 오준석
 Juggling Swap Function - 최동우
 Block-Swap Function - 이지윤
 Reverse Swap Function - 김다빈
 README File - 박상우

Function Descriptions
 *gendata()
  -문자열 길이 n, rotate할 수 d를 입력받고 랜덤문자열을 입력받는 함수
 *strgen()
  -str에 랜덤문자열을 입력하는 함수
 *countdistance(int d)
  -d의 크기에 따라 시계방향으로 움직일 지 시계반대방향으로 움직일지 d를 설정하는 함수
 *void reverse(char *str, int start, int end)
  -리버스 로테이션을 하기 위해 이용하는 함수
 *void reversal(char *str)
  -reverse함수를 3번 사용하여 str 문자열을 d만큼 움직이게 하는 함수
 *void trivial(char *str)
  -트리비얼 로테이션을 이용해 str 문자열을 d만큼 움직이게 하는 함수
 *int gcd(int a, int b)
  -저글링 로테이션을 하기 위해 a와 b의 최대공약수를 구하는 함수
 *void juggling(char *str)
  -저글링 로테이션을 이용해 str 문자열을 d만큼 움직이게 하는 함수
 *void blockswap(char *arr)
  -블록스왑 로테이션을 이용해 str 문자열을 d만큼 움직이게 하는 함수

 실행 결과
 strlen  rotate d T.trivial T.juggle T.blockswap T.reverse
 1000000 7        0.009000  0.007000 0.006000    0.003000
Function Algorithm description

-Juggling Swap
저글링 스왑은 n과 d의 최대공약수만큼 i(=0) loop를 반복하며, { ( 현재 배열 + d) / n } 이 i 와 다를 동안 현재 배열의 데이터에 { ( 현재 배열 + d) / n }번째의 데이터를 복사하고 복사한 데이터의 위치로 이동하는 과정을 반복한다. 예를 들어 n = 6, d = 3일 때는  [0]에 [3]의 데이터, [3]에 [0]의 데이터, [1]에 [4]의 데이터, [4]에 [1]의 데이터, [2]에 [5]의 데이터, [5]에 [2]의 데이터가 들어가는 방식이며, n = 7, d = 3일 때는 [0]에 [3], [3]에 [6], [6]에 [2], [2]에 [5], [5]에 [1], [1]에 [4], [4]에 [0]의 데이터가 들어가는 방식이다.
-Block Swap
블록 스왑은 n개의 데이터를 d개만큼 A파트와 B파트를 나눠 AB를 BA로 스왑하는 알고리즘을 이용한다(예를 들어 n=7, d=3이라면 A = [0][1][2], B = [3][4][5][6] 이다). 그 후 B의 오른쪽 부분을 A의 길이만큼 같게 해 B를 과  두 부분으로 나눈 후 A와 부분을 교환 한다(만약 A의 길이가 더 길면 A를 과 로 나눈 후 B와 을 바꾼다). 그런 방식을 전부 바뀔 때까지 함수를 재귀적으로 실행한다.
-Reverse Swap
리버스 스왑은 블록스왑과 마찬가지로 n개의 데이터를 d개만큼 A파트와 B파트를 나눠 A 와 B를 서로 reverse 한 후에 ()를 reverse 하여  를 얻는 과정으로, 수학식으로는 라는 식을 이용한 알고리즘이다. reverse 하는 함수를 만든 후 reversal의 함수에서는 0~d-1만큼, 즉 를 로, 그 후 d~n-1만큼, 즉 를 로 바꾼 후 0~n-1만큼, 즉 전체를 reverse해 를 계산하는 방식이다.

