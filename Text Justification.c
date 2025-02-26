/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** fullJustify(char** words, int wordsSize, int maxWidth, int* returnSize) {
    char** result = (char**)malloc(sizeof(char*) * wordsSize);
    *returnSize = 0;
    int i = 0;
    
    while (i < wordsSize) {
        int lineLength = 0, start = i;
        while (i < wordsSize && lineLength + strlen(words[i]) + (i - start) <= maxWidth) {
            lineLength += strlen(words[i]);
            i++;
        }
        
        int gaps = i - start - 1;
        int extraSpaces = maxWidth - lineLength;
        
        result[*returnSize] = (char*)malloc((maxWidth + 1) * sizeof(char));
        result[*returnSize][0] = '\0';
        
        if (i == wordsSize || gaps == 0) {  // Left-justify last line or single-word line
            for (int j = start; j < i; j++) {
                strcat(result[*returnSize], words[j]);
                if (j < i - 1) strcat(result[*returnSize], " ");
            }
            while (strlen(result[*returnSize]) < maxWidth) {
                strcat(result[*returnSize], " ");
            }
        } else {  // Fully justify other lines
            for (int j = start; j < i; j++) {
                strcat(result[*returnSize], words[j]);
                if (j < i - 1) {
                    int spaces = extraSpaces / gaps + (j - start < (extraSpaces % gaps));
                    for (int k = 0; k < spaces; k++) {
                        strcat(result[*returnSize], " ");
                    }
                }
            }
        }
        
        (*returnSize)++;
    }
    
    return result;
}Text Justification
