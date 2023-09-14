class Solution {
public:
    int splitNum(int number) {
        string num=to_string(number);
        sort(num.begin(),num.end());
        int num1=0;
        int num2=0;
        for(int i=0;i<num.size();i+=2){
            num1=num1*10+int(num[i]-'0');
            if (i<num.size()-1)
                num2=num2*10+int(num[i+1]-'0');
        }
        return num1+num2;
    }
};