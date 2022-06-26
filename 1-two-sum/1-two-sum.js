/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(nums, target) {
    let res = []
    let mp = {}
    let n = nums.length
    for(let i=0;i<n;i++) {
        let toFind = target-nums[i]
        if(toFind in mp) {
            res.push(mp[toFind])
            res.push(i)
            return res
        }
        mp[nums[i]] = i
    }
    return res
};