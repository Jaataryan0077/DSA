class Solution {
public:
    string convertToTitle(int num) {
        string result = "";
        if(num >26) result += convertToTitle(floor((num-1) /26));
        result += 65+ ((num-1) % 26);
        return result;
    }
};