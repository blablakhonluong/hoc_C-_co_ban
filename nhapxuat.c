// máy tính nó có 1 cái bộ biên dịch(MINGW x64) để dịch những cái mà mình vừa viết ra 1 cái chương trình có đuôi exe
#include<stdio.h> // thư viện chuẩn các cái định nghĩa cơ bản trong C.
#include<math.h> //thư viện để cung cấp các cái hàm trong toán

int main(){
    // tất cả code trong này sẽ chạy ra cái file exe

    //biến là 1 cái giá trị có thể thay đổi nhưng địa chỉ ô nhớ thì không

    int a=2; // cho nó 1 cái ô nhớ rồi

    a=3; // tức là cấp 1 cái ô nhớ khác cho cái thằng đã cấp rồi? (Vô lí)

    int b;

    printf("%d\n",&a); //ở trong cái "luôn là 1 chuỗi", cho nên là người ta phải cung cấp 1 cái định dạng cho kiểu biến

    printf("%d\n",&b); // Toán tử & là toán tử để trỏ về địa chỉ của biến

    printf("Nhap gia tri cua b: \n");

    scanf("%d",&b); // hàm nhập giá trị cho cái biến b mà ô nhớ đang lưu trữ

    printf("Gia tri vua nhap la: %d\n",b);


//BT: Nhap vao 2 so nguyen a,b. Xuat ra tong cua chung, hieu cua chung, tich cua chung, va dia chi cua chung.




}

