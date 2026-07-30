class Solution {
    public double angleClock(int hr, int min)
    {
        double m = (double)(min * 6) % 360;
        double h = (double)((hr * 30) + (min * .5)) % 360;
        double ang = Math.abs(h-m);

        return (ang > 180)?360 - ang:ang;
    }
}
