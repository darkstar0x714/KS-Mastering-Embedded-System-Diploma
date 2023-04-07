extern int xxx = 1;

void anotherFileFunction()
{
    printf("external File xxx=%d \n", xxx);
    xxx += 3;
}
