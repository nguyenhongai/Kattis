#include <stdio.h>

int main()

{
    // nhập mảng 1 chiều n && t
    int n[] = {1, 1, 2, 2, 2, 8};
    int t [6];
    int i;
    
    // nhập giá trị t
    scanf("%d %d %d %d %d %d", &t[0], &t[1], &t[2], &t[3], &t[4], &t[5]);

    // chạy vòng lặp cho i tăng
    for (i = 0; i < 6; ++i)
      /* số gốc n trừ cho số nhập t: nếu t < 0, - và - sẽ thành cộng, cộng thêm để bằng số gốc n;
                                     nếu t >=0, - và + sẽ thành trừ, trừ lại để bằng số gốc n */ 
        printf("%d ", n[i] - t[i]);

    return 0;
}
