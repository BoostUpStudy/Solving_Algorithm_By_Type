const solution = (record) => {
    // uid와 닉네임을 담은 Object를 만들어서 관리한다
    // 한번 쫙 돌고 나서 result를 만들어준다
    // 시간복잡도는 O(2N);
    
    let answer = [];
    let id_nn = {};
    
    record.forEach(elem => {
        let tmp_arr = elem.split(" ");
        if (tmp_arr[0] === 'Enter' || tmp_arr[0] === 'Change') id_nn[tmp_arr[1]] = tmp_arr[2];
    })
    
    record.forEach(elem => {
        let tmp_arr = elem.split(" ");
        if (tmp_arr[0] === 'Enter') {
            answer.push(`${id_nn[tmp_arr[1]]}님이 들어왔습니다.`);
        }
        else if (tmp_arr[0] === 'Leave') answer.push(`${id_nn[tmp_arr[1]]}님이 나갔습니다.`);
    })
    
    return answer;
}
