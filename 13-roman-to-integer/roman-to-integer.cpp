class Solution {
public:
    int romanToInt(string s) {
        int lens =s.size()-1; 
        int sum =0;

        unordered_map<char,int> m={
            {'I',1},
            {'V',2},
            {'X',3},
            {'L',4},
            {'C',5},
            {'D',6},
            {'M',7}
        };

        for(int i=0;i<=lens-1;i++){

            if(m[s[i]] < m[s[i+1]]){
                switch (s[i]){
                    case 'I':
                       sum -=1;
                       break;
                   case 'V':
                       sum -=5;
                       break;
                   case 'X':
                       sum -=10;
                       break;
                    case 'L':
                        sum -=50;
                       break;
                   case 'C':
                      sum -=100;
                       break;
                   case 'D':
                       sum -=500;
                       break;
                   case 'M':
                       sum -=1000;
                       break;
                    }
            }
            else{
                switch (s[i]){
                    case 'I':
                       sum +=1;
                       break;
                   case 'V':
                       sum +=5;
                       break;
                   case 'X':
                       sum +=10;
                       break;
                    case 'L':
                        sum +=50;
                       break;
                   case 'C':
                      sum +=100;
                       break;
                   case 'D':
                       sum +=500;
                       break;
                   case 'M':
                       sum +=1000;
                       break;

            }
        }

    }
    switch (s[lens]){
                    case 'I':
                       sum +=1;
                       break;
                   case 'V':
                       sum +=5;
                       break;
                   case 'X':
                       sum +=10;
                       break;
                    case 'L':
                        sum +=50;
                       break;
                   case 'C':
                      sum +=100;
                       break;
                   case 'D':
                       sum +=500;
                       break;
                   case 'M':
                       sum +=1000;
                       break;}
    return sum;    
    }

};