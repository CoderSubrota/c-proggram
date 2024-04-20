#include <stdio.h>
int main()
{
    long long int eyes, mouth, body;
    scanf("%lld %lld %lld", &eyes, &mouth, &body);

    long long int min = 0;
    if (eyes < mouth && eyes < body)
    {
        min = eyes;
    }

       else if (body < mouth && body < eyes)
    {
        min = body;
    }
    
     else if (mouth < eyes && mouth < body)
    {
        min = mouth;
    }

 

    long long int newEyes = (eyes - min) / 2;
    long long int newBody = (body-min);
    long long int newMouth = (mouth-min);

    if(newEyes<=newBody){
        printf("%lld",newEyes+min);
    } else if(newBody<newEyes){
        printf("%lld",newBody+min);
    }

    return 0;
}