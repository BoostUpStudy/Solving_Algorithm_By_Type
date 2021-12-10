// 2021 KAKAO 신규 아이디 추천 (Lv1)
const solution = (new_id) => {
    let answer = '';
    
    answer = new_id;
    
    // 소문자 치환
    answer = answer.toLowerCase();
    
    // 소문자, 숫자, -, _, .만 (아스키코드나 regex 쓰면 될듯?)
    answer = answer.replace(/[^a-z0-9-_.]/g,"");
    
    // 2번 이상 연속된 마침표 제거
    answer = answer.replace(/[.]+/g,".");
    
    // .가 처음이나 끝에 있으면 제거
    if (answer[0] === '.') answer = answer.substr(1);
    if (answer[answer.length - 1] === '.') answer = answer.substr(0, answer.length - 1);
    
    // 빈 문자열이면 a
    if (answer === '') answer = 'a';
    
    // 16자 이상이면 15글자로 제한, .가 맨 끝에 있으면 .도 제거
    answer = answer.substr(0,15);
    if (answer[14] === '.') answer = answer.substr(0,14);
    
    // 2자 이하면 길이가 3이 될 때까지 반복해서 끝에 붙임
    if (answer.length === 1) {
        answer += answer[0];
        answer += answer[0];
    }
    else if (answer.length === 2) {
        answer += answer[1];
    }
    
    return answer;
}
