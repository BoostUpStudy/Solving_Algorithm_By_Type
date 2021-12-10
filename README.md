# 알고알못의 유형별 알고리즘 해결법

## 📖 작성자
<div>
  <table align="center">
    <tr>
      <td>  
        <a href="https://github.com/alittlekitten">
          <img src="https://avatars.githubusercontent.com/alittlekitten" width="100"/>
        </a>
      </td>
    </tr>
    <tr>
      <td align="center">
        <a href="https://github.com/alittlekitten">
          alittlekitten
        </a>
      </td>
    </tr>
  </table>
</div>

<br/>

## ❗ 주의사항

※ 개인적인 경험에 의한 글이기 때문에 틀린 부분이 많을 수 있습니다. (필자는 현재 기준 solved.ac 실버)

※ 스터디 + 개인적인 풀이, 그리고 많은 분들의 제보 및 조언 통해 계속해서 수정될 예정입니다.

<br/>

## ⚒ 문제 유형 파악하기

### 입출력 제한 확인하기

완전 일치할 수는 없겠지만, 입출력 제한이 얼마나 걸려있냐에 따라 접근 방법을 다르게 가져갈 수 있다!

- 입력이 100 이하
  - Brute Force
  - BFS
  - DFS

<br/>

- 입력이 10,000 이하
  - 2차원 리스트
  - Sort

<br/>

- 입력이 1,000,000 이하
  - Heap
  - Priority Queue
  - Graph

<br/>

- 입력이 1,000,000 초과
  - DP
  - Greedy
  - Binary Search

<br/>

## 🚀 일반적인 유형별 풀이법

### Brute Force (완전탐색)

- 모든 주어진 경우의 수를 다 탐색하는 경우를 뜻한다.
- 해가 존재할 것으로 예상되는 모든 영역을 탐색한다.
- 순차탐색, DFS(깊이우선탐색), BFS(너비우선탐색) 방법을 이용한다.
- DFS는 갈 수 있는 점까지 들어가서 탐색해야하므로 `Stack`이나 `재귀함수`로 구현한다.
- BFS는 가장 가까운 점들부터 탐색하기 때문에 `Queue`로 구현한다.

### Sort (정렬)

- C++ 기준 `Sort` 라이브러리를 사용한다. (숫자와 문자 커버 가능)
- 3번째 파라미터로 정렬 순서를 결정할 수 있다. (내림차순은 greater<>()으로 간단하게 사용 가능)
- 아스키코드를 사용해야 한다면 `'0'`을 빼는 식으로 문자형태의 숫자를 사용할 수도 있다

### DP (동적 프로그래밍)

- `Bottom-Up`형태는 반복문, `Top-Down` 형태는 재귀함수를 사용한다.
- 한번 계산한 값을 저장해서 동일한 연산은 저장된 값을 사용한다. (누적!!!!)
- 전역에 저장해서 사용하는 경우가 많다
- 점화식을 작성해야 하는 경우가 많다.

### Greedy (탐욕 알고리즘)

- 현재 시점에서 최적의 가능성을 선택한다.
- 이전 시점에서 결정한 내용을 따로 저장해둬서 현재 시점에서 참조한다.
- 현재 시점에서만 판단하면 되기 때문에 비교적 단순할 수 있다. (Greedy인지를 파악하는 것이 가장 중요!)

### Binary Search (이진탐색)

- 절반으로 나눠서 필요한 부분만 선택하는 식으로 탐색한다.
- 정렬이 되어있어야만 사용이 가능하다
- 일반적으로 Brute Force로 해결하기에는 너무 큰 경우 이진탐색을 사용하면 O(logN)으로 시간복잡도를 줄일 수 있다.

### String (문자열)

- C++의 경우 별도로 split용 함수를 따로 만들어서 문자열을 자를 수 있다.
- 그 외의 언어는 기본적으로 제공하는 split 함수를 사용할 수 있다.
- JS 기준 문자열 정리에 필요한 함수들은 아래와 같다.
  - **split**은 매개변수로 `seperator`와 선택적으로 `limit`를 받는다. (구분자와 문자배열의 최대크기)
  - **substring**은 매개변수로 `indexStart`와 선택적으로 `indexEnd`를 받는다. (Start부터 End직전까지 잘라서 문자열 반환)
  - **substr**은 매개변수로 `start`와 선택적으로 `length`를 받는다. (start위치부터 length만큼 문자열을 반환)
  - **padEnd**는 매개변수로 `targetLength`와 선택적으로 `padString`을 받는다. (targetLength가 현재 length보다 크다면 padString을 채운다. padString의 기본값은 공백!!)
  - **replace**는 첫 번째 매개변수로 `regex` 혹은 `string`을 받고, 두 번째 매개변수로 `newString` 혹은 `function`을 받는다. (앞은 바꿀 요소에 대한 내용, 뒤는 어떻게 바꿀지에 대한 내용)
  - 추후 **Regex**에 대해서 다시 정리할 예정입니다.
