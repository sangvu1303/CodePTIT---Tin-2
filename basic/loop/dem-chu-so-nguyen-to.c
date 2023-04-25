#include <stdio.h> 
#include <stdbool.h> 

bool isPrime(int n){
    if (n <= 1) return false; 
    for (int i = 2; i * i <= n; i++) 
        if (n % i == 0) return false; 
    return true; 
} 

int main() { 
    int n;
    scanf("%d", &n);
    int count[10] = {0}; // Khởi tạo mảng chứa số lần xuất hiện của các chữ số từ 0 đến 9    
    // Duyệt qua từng chữ số của n
    while (n > 0) {
        int digit = n % 10;
        n /= 10;       
        // Kiểm tra xem chữ số hiện tại có phải là số nguyên tố hay không
        if (isPrime(digit)) count[digit]++;
    }
    // In ra kết quả theo thứ tự xuất hiện các chữ số
    for (int i = 2; i <= 7; i++) {
        if (count[i] > 0)  printf("%d %d\n", i, count[i]);
    }
    return 0; 
} 
// Đầu tiên, ta khai báo hàm isPrime để kiểm tra xem một số nguyên có phải là số nguyên tố hay không. Hàm này sẽ trả về giá trị true nếu là số nguyên tố, ngược lại trả về false.

// Trong hàm main, ta khai báo biến n và đọc giá trị từ bàn phím. Sau đó, ta khởi tạo một mảng count chứa số lần xuất hiện của các chữ số từ 0 đến 9, lúc này tất cả các giá trị đều bằng 0.

// Sau đó, ta sử dụng vòng lặp while để duyệt qua từng chữ số của n. Trong quá trình duyệt, ta kiểm tra xem chữ số đó có phải là số nguyên tố hay không bằng cách gọi hàm isPrime. Nếu đúng, ta tăng giá trị tại vị trí tương ứng trong mảng count lên 1.

// Cuối cùng, ta sử dụng vòng lặp for để duyệt qua các chữ số từ 2 đến 7, kiểm tra xem chữ số này có xuất hiện trong n hay không. Nếu có, ta in ra màn hình số lần xuất hiện của chữ số đó. Chú ý rằng các chữ số khác 2 đến 7 đều không phải là số nguyên tố, nên ta không cần kiểm tra chúng.