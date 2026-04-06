int main()
{
    int arr[5] = {10, 20, 30, 40, 50};

    printf("Pehla element: %d\n", arr[0]);             // 10
    printf("Teesra element: %d\n", arr[2]);          // 30

    arr[3] = 100;                                  // 4th position pe value change kar di
    printf("Naya 4th element: %d\n", arr[3]);

    return 0;
}
