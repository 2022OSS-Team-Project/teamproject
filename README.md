<!--Heading-->

# 2022 OSS Team Project

## Mini Project

### _**설계**_

---

**팀 소개**

<ol>
1. 22000672 정수아, 22100015 강연재<br>
2. 역할분담(2022.05.02 기준):
   함수들을 반씩 나누어 구현, 각자의 구현 코드 피드백<br>
</ol>

**Mini Project 주제**

헬스장 회원 정보 관리 + 회원들의 몸 상태 및 추천 운동 출력 시스템

![topic img](https://images.unsplash.com/photo-1534438327276-14e5300c3a48?ixlib=rb-1.2.1&ixid=MnwxMjA3fDB8MHxzZWFyY2h8MzB8fGZpdG5lc3N8ZW58MHx8MHx8&w=1000&q=80)

**Mini Project 소개**

회원 정보를 저장하고 출력할 뿐 아니라 신체 정보를 함께 입력 받아서 키 대비 몸무게에 대한 맞춤형 체중 관리 시스템을 제공한다. 체형에 맞는 식단과 운동 정보를 제공하여 회원들의 건강한 신체 유지를 가장 큰 목적에 둔 시스템이다.

<br>

**기능(함수로 구현)**

<ul>
- 회원 정보 CRUD<br>
- 회원 데이터 파일 저장<br>
- 회원 데이터 파일 불러오기<br>
- 추천 운동 출력<br>
- 추천 식단 출력<br>
- 남은 헬스장 이용 기간 확인<br>
</ul>
<br>

**개발환경 및 언어**

개발 환경: VSC
![VSC](https://images.velog.io/images/rememberme_jhk/post/38e6ab0a-58a9-4477-bec4-a62ae20dda4a/vscode-logo.png)

개발 언어: C
![C](https://images.velog.io/images/asroq1/post/228227c1-8e56-426f-832f-95f2f863b5a7/0Clang.png)

**CRUD 함수 설명과 실행 결과**

헬스장 등록 회원 정보를 Create, Read, Update, Delete하는 4가지의 함수와 메뉴를 출력하고 정보를 수정하고 삭제할 때 해당 번호를 입력하는 함수를 완성하였습니다.
![image](https://user-images.githubusercontent.com/103136401/167351564-1bb9a1cb-1868-473f-9cba-5b7edd972dcd.png)
![image](https://user-images.githubusercontent.com/103136401/167351572-c675a52b-8bcb-4a62-bbf1-0640e85792e4.png)<br>
첫번째로 만든 함수는 새로운 정보를 추가하는 함수입니다. 회원 이름과 나이와 신장과 헬스장 등록 날짜를 추가할 수 있습니다.
![image](https://user-images.githubusercontent.com/103136401/167351624-bda1ed75-5f45-453d-b51a-c4bddf93de3e.png)
![image](https://user-images.githubusercontent.com/103136401/167351635-75f810a2-420e-449a-a8cb-5aff594beba2.png)<br>
두번째로 만든 함수는 저장된 정보를 조회할 수 있는 함수입니다. 저장된 회원의 이름, 나이, 신장, 헬스장 등록 날짜를 추가할 수 있습니다.
![image](https://user-images.githubusercontent.com/103136401/167351662-1cc9e7c1-09bd-4f4a-a0f4-fe8cc609f49f.png)<br>
![](https://user-images.githubusercontent.com/103136401/167352095-58a91cfa-dff5-4599-98a2-24e866c516b7.png)<br>
세번째로 만든 함수는 정보를 수정하는 함수입니다. 회원 이름과 나이와 신장과 헬스장 등록 날짜를 수정할 수 있습니다. 이미 존재하는 항목의 번호를 선택하여 수정할 경우, 해당 항목의 정보가 새로운 정보로 대체됩니다.
![image](https://user-images.githubusercontent.com/103136401/167351714-603664c7-70c9-4182-bebe-fc497b3d14dd.png)<br>
네번째로 만든 함수는 정보를 삭제하는 함수입니다. 회원 이름과 나이와 신장과 헬스장 등록 날짜를 삭제할 수 있습니다.<br>
<img width="464" alt="image" src="https://user-images.githubusercontent.com/103136401/167352095-58a91cfa-dff5-4599-98a2-24e866c516b7.png"><br>
다섯번째로 만든 함수는 수정하고 삭제할 해당 번호를 입력하는 함수입니다.
