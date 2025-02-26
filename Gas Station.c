int canCompleteCircuit(int* gas, int gasSize, int* cost, int costSize) {
    int deficit = 0;
    int maxGas = 0;
    int start = 0;
    
    for(int i = 0; i < gasSize; i++){
        maxGas += gas[i] - cost[i];
        if(maxGas < 0){
            start = i + 1;
            deficit += maxGas;
            maxGas = 0;
            }
    }
    if(maxGas + deficit >= 0){
        return start;
    }
    else{
        return -1;
    }
}
