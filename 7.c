#include<stdio.h>
#include<stdbool.h>

    bool isScramble__(char *s1, int l1, int r1, char *s2, int l2, int r2) {
    if (l1 > r1) return false;
    if (r1 - l1 != r2 - l2) return false;
    int flag = 1;
    for (int i = 0; i <= r1 - l1; i++) 
        if (s1[l1 + i] != s2[l2 + i]) {
            flag = 0;
            break;
        }
    if (flag) return true;
    int letters[26] = {0};
    for (int i = 0; i <= r1 - l1; i++) {
        letters[s1[l1 + i] - 'a']++;
        letters[s2[l2 + i] - 'a']--;
    }
    for (int i = 0; i < 26; i++) {
        if (letters[i] != 0) return false;
    }
    for (int i = 0; i < r1 - l1; i++) {
        if (isScramble__(s1, l1, l1 + i, s2, l2, l2 + i) && 
        isScramble__(s1, l1 + i + 1, r1, s2, l2 + i + 1, r2))
            return true;
        if (isScramble__(s1, l1, l1 + i, s2, r2 - i, r2) && 
        isScramble__(s1, l1 + i + 1, r1, s2, l2, r2 - i - 1))
            return true;
    }
    return false;   
}
bool isScramble(char * s1, char * s2){
    int len1 = strlen(s1), len2 = strlen(s2);
    if (len1 != len2) return false;
    return isScramble__(s1, 0, len1 - 1, s2, 0, len2 - 1);
}
