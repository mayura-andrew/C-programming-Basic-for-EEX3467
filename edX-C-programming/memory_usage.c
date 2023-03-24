#include <stdio.h>

int main(void) {
    char type = '\0';

    int number = 0;
    int length = 0;
    int mb = 0;
    int kb = 0;


    scanf("%c %d", &type, &number);


    if (type == "c") {
        length = number * sizeof(char);
    
    }else if (type == "i") {
        length = number * sizeof(int);
    } else  {
        length = number * sizeof(double);
    }

    if (length/1000000 > 0) {
        mb = length / 1000000;
        length = length - mb * 1000000;
        printf("%d MB and ", mb);
    } if (length / 1000 > 0) {
        kb = length / 1000;
        length = length - kb * 1000;
        printf("%d KB and ", kb);
    }
    printf("%d B\n ", length);

    return 0;

}

// given answer 

// #include <stdio.h>
 
// int main(void){
//     char c;
//     int num;
//     int spacePer;
//     int memory;
//     int mega, kilo, byte;
    
//     scanf("%c", &c);
//     scanf("%d", &num);
    
//     if (c=='c') spacePer = sizeof(char);
//     else if (c=='s') spacePer = sizeof(short);
//     else if (c=='i') spacePer = sizeof(int);
//     else spacePer = sizeof(double);
    
//     memory = spacePer*num;
//     mega = memory/1000000;
//     kilo = (memory-mega*1000000)/1000;
//     byte = memory-mega*1000000-kilo*1000;
    
//     if (mega>0){
//         printf("%d MB and %d KB and %d B", mega, kilo, byte);
//     } else if (kilo>0){
//         printf("%d KB and %d B", kilo, byte);
//     } else{ 
//         printf("%d B", byte);
//     }
        
//     return 0;
// }