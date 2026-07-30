int romanToInt(char* s) {
    
    int hash[256] = {0};
    int i = 0, sum = 0;

    //Hash Table

    hash['I'] = 1;
    hash['V'] = 5;
    hash['X'] = 10;
    hash['L'] = 50;
    hash['C'] = 100;
    hash['D'] = 500;
    hash['M'] = 1000;

    //Here s[i] is the value of i index in the string 
    while(s[i] != '\0')
    {
        //here the value of hash[s[i]] is the integer value of s[i]
        if(hash[s[i]] < hash[s[i+1]])
        {
            sum += hash[s[i+1]] - hash[s[i]];
            i += 2;
        }
        else
        {
            sum += (hash[s[i]]);
            i++;
        }
    }
    return sum;
}