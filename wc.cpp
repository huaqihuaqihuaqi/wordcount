#include<stdio.h> 
int WordCount(char file[]){
    FILE *p=NULL;
    int wcount=0;
    p=fopen(file,"r");
    if(p==NULL){
        printf("Ѱ���ļ�ʧ��\n");
        return -1;
    }
    char mychar;
    mychar = fgetc(p);
    while(mychar!=EOF){
        if(mychar>='a'&&mychar<='z'||mychar>='A'&&mychar<='Z'||mychar>='0'&&mychar<='9'){
            while(mychar>='a'&&mychar<='z'||mychar>='A'&&mychar<='Z'||mychar>='0'&&mychar<='9'||mychar=='_'){
                mychar=fgetc(p);
            }
            wcount++;
            mychar=fgetc(p);
        }
        mychar=fgetc(p);
    }
    fclose(p);
    return wcount;
}
int main(){
    char input[10],File[200];
    while(1){
        printf("�������û����wc.exe-");
        scanf("%s",&input);
        if(input[0]=='w'){
            printf("�������ļ�����");
            scanf("%s",&File); 
            int wordcount=0;
            wordcount=WordCount(File);
            printf("�ļ��Ĵ���Ϊ��%d\n",wordcount);
            continue;
        }
    }
    return 0;
}
