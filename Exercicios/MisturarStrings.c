char resultado[100];

char * mergeAlternately(char * word1, char * word2){

    int len1 = strlen(word1);
    int len2 = strlen(word2);

    int i=0,j=0,k=0;
    while(i < len1 || j < len2){
        if(i<len1){
            resultado[k++] = word1[i++];
        }
         if(j < len2){
            resultado[k++] = word2[j++];
        }
    }
    resultado[k] ='\0';

    return resultado;
}

void app_main()
{
    char *wordd = "abc";
    char *worddd = "pqr";
    char *ret = mergeAlternately(wordd,worddd);
    printf("output eh %s\n",ret);
}