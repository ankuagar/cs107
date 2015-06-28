# include <stdio.h>

// print Fahrenheit-Celsius table conversion
main()
{
    forloop();
}

whileloop()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    printf("%s | %s\n", "Fahrenheit", "Celsius");
    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%3.0f %20.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}

forloop()
{
    int fahr;
    for (fahr = 0; fahr <= 300; fahr = fahr + 20)
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}
