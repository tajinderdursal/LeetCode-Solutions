class Solution {
public:
    int passwordStrength(string password) {
          int arr[62]={0};
        int arr1[4]={0};
        int score=0;
        for (int i=0;i<password.length();i++){
            int car=password[i];
            if(car>64&&car<91&&arr[car-65]==0){
              score+=2;
              arr[car-65]=1;
            }
            else if(car>96&&car<123&&arr[car-97+26]==0){
                score+=1;
                arr[car-97+26]=1;
            }
            else if(car>47&&car<59&&arr[car-48+52]==0){
                score+=3;
                arr[car-48+52]=1;
            }
            else if (car=='!'&&arr1[0]==0){
                score+=5;
                arr1[0]=1;
            }
              else if (car=='@'&&arr1[1]==0){
                score+=5;
                arr1[1]=1;

            }
              else if (car=='#'&&arr1[2]==0){
                score+=5;
                arr1[2]=1;
            }
              else if (car=='$'&&arr1[3]==0){
                score+=5;
                arr1[3]=1;
            }
        }
        return score;
        
    }
};