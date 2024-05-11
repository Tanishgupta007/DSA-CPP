
//gfg
class Solution
{
public:
    int value(char s)
    {
        if (s == 'I')
        {
            return 1;
        }
        else if (s == 'V')
        {
            return 5;
        }
        else if (s == 'X')
        {
            return 10;
        }
        else if (s == 'L')
        {
            return 50;
        }
        else if (s == 'C')
        {
            return 100;
        }
        else if (s == 'D')
        {
            return 500;
        }
        else if (s == 'M')
        {
            return 1000;
        }
        else
        {
            return -1;
        }
    }
    int romanToDecimal(string &str)
    {
        int leng = str.size();
        int res = 0;
        for (int i = 0; i < leng; i++)
        {
            int val1 = value(str[i]);

            if (i + 1 < leng)
            {
                int val2 = value(str[i + 1]);
                if (val1 >= val2)
                {
                    res += val1;
                }
                else
                {
                    res += val2 - val1;
                    i++;
                }
            }
            else
            {
                res += val1;
            }
        }
        return res;
    }
};