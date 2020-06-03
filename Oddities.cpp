#include <stdio.h>

using namespace std;

int main()
{
    // khai báo biến
    int x, n, i;
    
    // nhập biến n
    scanf("%d", &n);
    
    // dùng lệnh if điền kiện (1 <= n <= 20); nếu đúng thì chạy tiếp vòng lặp for để giải bài
    if (n>=1 && n<=20)
    {
        // cho vòng lặp (ở đây lấy i) chạy từ 1 đến khi i <= n (n là số nhập lần đầu), để có thể nhập tiếp các số ở các dòng tiếp theo
        for (i=1; i<=n; ++i)
        {
            // nhập x, là các số theo yêu cầu đề bài; n là bao nhiêu thì nhập bấy nhiêu x
            scanf("%d\n", &x);
            // ĐÂY LÀ PHẦN THUẬT TOÁN
            /* điều kiện 1: thỏa yêu cầu đề bài (-10 <= x <= 10);
            nếu x chia 2 có phần dư bằng 0, thì x là số chẵn, vì số chẵn chia hết được cho 2 */
            if (x%2==0 && x<=10 && x>=-10)
                // nếu điều kiện trên đúng thì cho in ra màn hình số x là số chẵn, nếu không thì chạy tiếp các trường hợp khác
                printf("%d is even\n", x);
            /* điều kiện 2: thỏa yêu cầu đề bài (-10 <= x <= 10);
            nếu x chia 2 có phần dư bằng 1 (hoặc khác 0), thì x là số lẻ, vì số lẻ không chia hết được cho 2;
            ở đây có thể dùng lệnh else cho gọn, ở đây có 2 trường hợp, nếu không thuộc trường hợp 1 thì là trường hợp còn lại */
            if (x%2!=0 && x<=10 && x>=-10)
                // điều kiện đúng cho in ra màn hình x là số lẻ
                printf("%d is odd\n", x);
        }
    }
    return 0;
}
