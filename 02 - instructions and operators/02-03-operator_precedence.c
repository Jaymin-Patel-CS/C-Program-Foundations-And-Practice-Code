#include <stdio.h>

int main() {
    // this is to only notify that normal rules of math is not applied here if bracket
    // is absent. their is new priority order of the c language which is shown below:
    //   1st       * / %
    //   2nd       +  - 
    //   3rd        = 
    // in the case of same priority operators come in same operation then their
    // asssociativity will be responsible. 
    // like * and / have associativity of left to right.
    return 0;
}