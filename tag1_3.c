int main()
{

    unsigned int countDownCounter = 100;
    while(countDownCounter) {
    printf("%d\n" , countDownCounter);
        countDownCounter = countDownCounter -1;
    }
    printf("Solid rocket booster ignition and liftoff!\n");
    return 0;
}
