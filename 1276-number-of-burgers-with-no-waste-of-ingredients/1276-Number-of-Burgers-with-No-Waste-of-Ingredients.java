class Solution {
    public List<Integer> numOfBurgers(int t, int c)
    {
        List<Integer> result = new ArrayList<>();

        if(t % 2 != 0 || t < c)
        {
            return result;
        }
        int jumbo = (t - 2*c) / 2;
        int small = c - jumbo;

        if(jumbo < 0 || small < 0)
        return result;

        result.add(jumbo);
        result.add(small);
        return result;

    }
}