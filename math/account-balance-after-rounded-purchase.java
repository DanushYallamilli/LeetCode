class Solution {
    public int accountBalanceAfterPurchase(int p)
    {
        int round = (p+5) / 10*10;
        return 100-round;
        
    }
}