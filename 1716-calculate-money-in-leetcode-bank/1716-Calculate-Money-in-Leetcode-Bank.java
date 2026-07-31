class Solution {
    public int totalMoney(int num)
    {
        //week's sum
        int a = 28;
        int d = 7, n = num/7;
        int sum_w = (n * (2*a + (n - 1) * d)) / 2;

        // day's sum
        int sum_d = ((num%7) * (2*(n+1) + ((num%7)-1)*1)) / 2;

        return sum_w+sum_d;
    }
}