#define OUT_TO_FILE

#ifndef IOSTREAM
    #define IOSTREAM
    #include<iostream>
#endif

#ifndef CMATH
    #define CMATH
    #include<cmath>
#endif

#ifndef DATACORE
    #define DATACORE
    #include"datacore.h"
#endif

#ifndef CNN
    #define CNN
    #include"cnn.h"
#endif

#include"dfsoutcnn2.h"
using namespace std;

int main()
{
    for(int i=1;i<=3;i++){
        Separate_Data(i);
    }
    InputCNN();
    OutputCNN(29);
}