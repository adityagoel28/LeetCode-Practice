impl Solution {
    pub fn combination_sum4(nums: Vec<i32>, t: i32) -> i32 {
        let mut dp = vec![0 as u32; (t + 1) as usize];
        dp[0] = 1;
        for i in 1..(t + 1) {
            for e in &nums {
                if(i - e >= 0) {
                    dp[i as usize] += dp[(i - e) as usize];
                }
            }
        }
        return dp[t as usize] as i32;
    }
}