# include <stdio.h>
# include <stdlib.h>

int main(){
    int *arr[3];

    arr[0] = malloc(sizeof(int) * 2);
    arr[1] = malloc(sizeof(int) * 4);
    arr[2] = malloc(sizeof(int) * 1);

    // 예시 값 할당
    arr[0][0] = 10; arr[0][1] = 20;
    arr[1][0] = 30; arr[1][1] = 40; arr[1][2] = 50; arr[1][3] = 70;
    arr[2][0] = 60;

    // 출력
    printf("%d %d\n", arr[0][0], arr[0][1]);     // 10 20
    printf("%d %d %d %d\n", arr[1][0], arr[1][1], arr[1][2], arr[1][3]); // 30 40 50 70
    printf("%d\n", arr[2][0]);                  // 60

        // 메모리 해제
    free(arr[0]);
    free(arr[1]);
    free(arr[2]);

    return 0;
}