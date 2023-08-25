class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int b=0, a=0, l=0, o=0, n=0;
        int count=0;
        for(int i=0; i<text.size(); i++){
            if(text[i]=='b') b++;
            else if(text[i]=='a') a++;
            else if(text[i]=='l') l++;
            else if(text[i]=='o') o++;
            else if(text[i]=='n') n++;
            if(b>0 && a>0 && l>1 && o>1 && n>0){
                count++;
                b-=1;
                a-=1;
                l-=2;
                o-=2;
                n-=1;
            }
        }
        return count;
    }
};
