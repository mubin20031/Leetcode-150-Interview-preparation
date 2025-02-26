int hIndex(int* citations, int citationsSize) {
    int ans=0;
    for(int i=0;i<citationsSize;i++){
        for(int j=i+1;j<citationsSize;j++){
            if( citations[i]< citations[j]){
                int temp =  citations[i];
                citations[i]= citations[j];
                citations[j]=temp;
            }
        }
    }
    int check=0;
    for(int i=0;i<citationsSize;i++){
        check++;
        if(citations[i]>=check)
            ans = check;
        else 
            break;
    }
    return ans;
}
