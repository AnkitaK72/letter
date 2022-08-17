#include <stdio.h>

int main()
{
    char quest_arr[8] = { 'A','b','A','C','b','b','c','A' };
    int i;
    int j;
    char ans_arr[5];
    int len =  sizeof(quest_arr)/sizeof(quest_arr[0]);  //no. of elements in quest_arr
    printf("ans_arr[8] : ", quest_arr[i]);
    for(i=0;i<len;i++){
        int count = 0;
        for(j=i+1;j<len;j++){
                if(quest_arr[i] == quest_arr[j]){
                    count++;
                    break;
                }
        }
        if(count==0){
           
            printf("%c ",quest_arr[i]);
        }
    }
    printf("\n\n");

    return 0;
}