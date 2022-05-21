class Solution {
public:
    string intToRoman(int num) {
        string ret = "", res = "";
        // I II III IV V VI VII VIII IX X 1-10
        // X XX XXX XL L LX LXX LXXX XC C 10-100
        // C CC CCC CD D DC DCC DCCC DM M 100-1000
        // M MM MMM 1000-3000
        int tens = num%10;
        num/=10;
        int huns = num%10;
        num/=10;
        int thous = num % 10;
        num/=10;
        
        switch(tens) {
            case 1:
                ret = "I";
                break;
            case 2:
                ret = "II";
                break;
            case 3:
                ret = "III";
                break;
            case 4:
                ret = "IV";
                break;
            case 5:
                ret = "V";
                break;
            case 6:
                ret = "VI";
                break;
            case 7:
                ret = "VII";
                break;
            case 8:
                ret = "VIII";
                break;
            case 9:
                ret = "IX";
                break;
            default:
                break;
        }
        res = ret;
        ret = "";
        switch(huns) {
            case 1:
                ret = "X";
                break;
            case 2:
                ret = "XX";
                break;
            case 3:
                ret = "XXX";
                break;
            case 4:
                ret = "XL";
                break;
            case 5:
                ret = "L";
                break;
            case 6:
                ret = "LX";
                break;
            case 7:
                ret = "LXX";
                break;
            case 8:
                ret = "LXXX";
                break;
            case 9:
                ret = "XC";
                break;
            default:
                break;
        }
        res = ret + res;
        ret = "";
        
        switch(thous) {
            case 1:
                ret = "C";
                break;
            case 2:
                ret = "CC";
                break;
            case 3:
                ret = "CCC";
                break;
            case 4:
                ret = "CD";
                break;
            case 5:
                ret = "D";
                break;
            case 6:
                ret = "DC";
                break;
            case 7:
                ret = "DCC";
                break;
            case 8:
                ret = "DCCC";
                break;
            case 9:
                ret = "CM";
                break;
            default:
                break;
        }
        res = ret + res;
        ret = "";
        
        switch(num) {
            case 1:
                ret = "M";
                break;
            case 2:
                ret = "MM";
                break;
            case 3:
                ret = "MMM";
                break;
            default:
                break;
        }
        res = ret + res;
        return res;
    }
};