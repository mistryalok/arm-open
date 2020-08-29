volatile unsigned int * const UART0DR = (unsigned int *)0x101f1000;
 
void print_uart0(const char *s) {
 while(*s != '\0') { /* Loop until end of string */
 *UART0DR = (unsigned int)(*s); /* Transmit char */
 s++; /* Next char */
 }
}
 

int add(int i, int j)
{
  int res = 0;
  __asm ("ADD %[result], %[input_i], %[input_j]"
    : [result] "=r" (res)
    : [input_i] "r" (i), [input_j] "r" (j)
  );
  return res;
}


void c_entry() {
 print_uart0("Hello world!\n");
asm(
"mov     r0, r0\n\t"
"mov     r0, r0\n\t"
"mov     r0, r0\n\t"
// if I can have arma9"MSR TTBR0_EL1, X0\n\t"
"mov     r0, r0"
);
int a = 1;
  int b = 2;
  int c = 0;

  c = add(a,b);

  print_uart0("Result done");// %d + %d = %d\n", a, b, c);

 print_uart0("I am done!\n");

}
