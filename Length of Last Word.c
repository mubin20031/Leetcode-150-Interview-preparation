int lengthOfLastWord(char* s) {
    int count = 0;
    int i = 0;

    while (s[i] != '\0') {
        i++;
    }
    i--;

    
    while (i >= 0 && s[i] == ' ') {
        i--;
    }

    while (i >= 0 && s[i] != ' ') {
        count++;
        i--;
    }

    return count;
}
