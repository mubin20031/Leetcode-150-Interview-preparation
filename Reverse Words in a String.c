void reverse(char *s, int left, int right) {
    while (left < right) {
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;
        left++;
        right--;
    }
}

char* reverseWords(char* s) {
    int len = strlen(s);
    if (len == 0) return s;

    
    reverse(s, 0, len - 1);

    
    int i = 0, j = 0;
    while (i < len) {
        while (i < len && isspace(s[i])) i++;  
        if (i >= len) break;
        if (j > 0) s[j++] = ' '; 
        int start = j;
        while (i < len && !isspace(s[i])) s[j++] = s[i++];  
        reverse(s, start, j - 1); 
    }
    
    s[j] = '\0';  
    return s;
}
