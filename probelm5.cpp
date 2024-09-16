//To Lower Case

class Solution {
 public:
  string toLowerCase(string str) {

    const int convert = 'A' - 'a';

    for (char& x : str)
    
      if (x >= 'A' && x <= 'Z')
        x -= convert;

    return str;
  }
};