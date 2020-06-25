#include "PlusMinus.h"
/*
loop through the array increasing the values wherever necessary, when displaying it is to 6 decimal places hence %6f.
*/
void PlusMinus::plusMinus(std::vector<int> array)
{
    double positive = 0;
    double negative = 0;
    double zero = 0;
    int total = array.size();
    for (int i = 0; i < total; i++) {
        if (array[i] > 0) {
            //positive
            positive++;
        }
        else if (array[i] < 0) {
            //negative
            negative++;
        }
        else if (array[i] == 0) {
            //must be zero
            zero++;
        }
    }

    printf("%6f\n", positive / total);
    printf("%6f\n", negative / total);
    printf("%6f\n", zero / total);

}