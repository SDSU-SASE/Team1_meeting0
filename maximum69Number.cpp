class Solution
{
public:
    int maximum69Number (int num)
    {
        int thousands, hundreds, tens, ones;
        thousands = num / 1000;
        hundreds = (num - thousands * 1000) / 100;
        tens = (num - (thousands * 1000) - (hundreds * 100)) / 10;
        ones = (num - (thousands * 1000) - (hundreds * 100) - (tens * 10));
                
        if (thousands == 6)
        {
            num += 3000;
        }
        else if (hundreds == 6)
        {
            num += 300;
        }
        else if (tens == 6)
        {
            num += 30;
        }
        else if (ones == 6)
        {
            num += 3;
        }
        return num;
    }
};
