#include "prime.h"
#include "intal.h"
#include "intal_list.h"

int main(int argc, char const *argv[])
{
    //Arbitrary long list
    struct intal_list *prime_list = Intal_list();

    //The current prime number
    struct intal *current_prime = Intal();

    set(current_prime, 0);
    while (1)
    {
        add(current_prime, 1);

        if(isPrime(prime_list, current_prime)){
            push(prime_list, current_prime);
        }
        
    }

    return 0;
}
