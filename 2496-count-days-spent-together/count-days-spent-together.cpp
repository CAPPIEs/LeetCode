class Solution {
public:
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        int da=0;
        //bool val = false;
        //int val2 = 0;

        vector<int> Alicearrive;
        Alicearrive.push_back(stoi(arriveAlice.substr(0,2)));
        Alicearrive.push_back(stoi(arriveAlice.substr(3,2)));
        vector<int> Aliceleave;
        Aliceleave.push_back(stoi(leaveAlice.substr(0,2)));
        Aliceleave.push_back(stoi(leaveAlice.substr(3,2)));

        vector<int> Bobarrive;
        Bobarrive.push_back(stoi(arriveBob.substr(0,2)));
        Bobarrive.push_back(stoi(arriveBob.substr(3,2)));
        vector<int> Bobleave;
        Bobleave.push_back(stoi(leaveBob.substr(0,2)));
        Bobleave.push_back(stoi(leaveBob.substr(3,2)));

        vector<int> ha = max(Alicearrive, Bobarrive);
        vector<int> ll = min(Aliceleave, Bobleave);

        if(Alicearrive > Bobleave || Bobarrive > Aliceleave){
            return 0;
        }
        if(ha[0] == ll[0]){
            return ll[1]-ha[1]+1;}

            else{
                
                    int val3=ha[0];
                    

                    while(val3 != ll[0]){
                        int start = (val3 == ha[0]) ? ha[1] : 1;
                        if(std::set{1,3,5,7,8,10,12}.count(val3)){
                        for(int i=start;i<=31;i++ ){
                            da++;}
                        }
                        else if(std::set{4,6,9,11}.count(val3)){
                        for(int i=start;i<=30;i++ ){
                            da++;}
                        }
                        else{
                        for(int i=start;i<=28;i++ ){
                            da++;
                        }}
                        
                    
                    
                    val3++;
                    }
                    for(int i =1;i <=ll[1] ;i++){
                        da++;
                    }
                    
                }

            
            
            
        
        return da;
    }
    
};

