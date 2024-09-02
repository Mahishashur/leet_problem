class Solution {
public:
    int romanToInt(string s) {   

        map<char, int> dict;


        dict['I'] = 1;
        dict['V'] = 5;
        dict['X'] = 10;
        dict['L'] = 50;
        dict['C'] = 100;
        dict['D'] = 500;
        dict['M'] = 1000;


        int val = 0;

        for(int i = s.length() - 1; i >= 0; i--) {

            int z = 1;

            if (dict[s[i]] < dict[s[i+1]]) z = -1;

            val += dict[s[i]] * z;
        }

        return val;
    }
};
        
    