int calculate_sum() {
    int sum{0};
    for (int i{1}; i < 16; i=i+2 ) {
        sum += i;
    }   
    return sum;
}