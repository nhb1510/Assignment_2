#include <stdio.h>
#include <stdlib.h>

int songuyento (int n) {                //hàm kiểm tra số nguyên tố
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) 
        return 0; 
    }
    return 1;
}

int main(int argc, char *argv[]) { 
    if (argc != 3) {
        printf("Usage: %s <number1> <number2>\n", argv[0]);
        return 1;
    }
    
    if ((atoi(argv[1])<0) || atoi(argv[2])<0) // kiểm tra 2 số a b >0
        printf ("2 số phải là số nguyên dương\n");

    int a = atoi(argv[1]);     // gán giá trị cho 2 số a b
    int b = atoi(argv[2]);

    if (!(1 <= a || a <= b || b <= 1000000000)) // điều kiện 2 số a<=b a b lớn hơn 1 và nhỏ hơn 10^9
    {
        printf ("Giá trị 2 số không thỏa mãn, vui lòng nhập 2 số a b theo điều kiện sau đây  (1 <= a <= b <= 10^9)\n");
        return 1;
    }

    printf ("Số nguyên tố từ %d đến %d: \n",a,b); // in ra số nguyên tố, sử dụng vòng lặp for
        for (int i = a; i<= b; i++) {
            if (songuyento(i))
                printf ("%d ",i);
            }
    printf ("\n");
    return 0;
}
