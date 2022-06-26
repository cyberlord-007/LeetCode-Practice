/**
 * @param {number[][]} intervals
 * @return {number[][]}
 */



var merge = function(intervals) {
    let n = intervals.length
    let st = []
    
    intervals.sort((a,b) => a[0] - b[0])
    st.push(intervals[0])
    console.log(st)
    for(let i=0;i<n;i++) {
        let len = st.length
        let top = st[len - 1]
        if(intervals[i][0] > top[1])
            st.push(intervals[i])
        else if(top[1] < intervals[i][1]) {
            top[1] = intervals[i][1]
            st.pop()
            st.push(top)
        }
    }
    return st
    
};