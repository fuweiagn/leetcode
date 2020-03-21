int numJewelsInStones(char * J, char * S){
char isj[128] = {0};
    char c = *J;
    while (c != '\0')
    {
        isj[c] = 1;
        c = *(++J);
    }
    c = *S;
    int count = 0;
    while (c != '\0')
    {
        if(isj[c] != 0) ++count;
        c = *(++S);
    }
    return count;
}
