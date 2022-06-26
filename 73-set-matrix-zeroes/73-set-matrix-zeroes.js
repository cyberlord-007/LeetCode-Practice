/**
 * @param {number[][]} matrix
 * @return {void} Do not return anything, modify matrix in-place instead.
 */
var setZeroes = function(matrix) {
    let r = matrix.length
    let c = matrix[0].length
    let row = new Set()
    let col = new Set()
    for(let i=0;i<r;i++) {
        for(let j=0;j<c;j++) {
            if(matrix[i][j] == 0) {
                row.add(i)
                col.add(j)
            }
        }
    }
    
    for(let i=0;i<r;i++) {
        for(let j=0;j<c;j++) {
            if(row.has(i) || col.has(j))
                matrix[i][j] = 0
        }
    }
    
};