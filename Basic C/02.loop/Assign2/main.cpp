#include <stdio.h>

int main() {
    int lastThree[3] = {0}; // สร้างอาร์เรย์เพื่อเก็บ 3 ค่าล่าสุดของ i และกำหนดให้เริ่มต้นที่ 0

    for (int i = 0; i <= 10; i += 2) {
        // เก็บค่า i ในอาร์เรย์ lastThree
       
        lastThree[2] = 3;
     
    printf("%d\n",lastThree[2]);
        
    }
   
    return 0;
}
