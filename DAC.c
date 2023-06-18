char i=0;
int j=0;

void main() {
RCC_APB1ENR.DACEN=1;//DAC birimi AP1 hattýndan sat frekansý ile besleniyor
GPIO_Analog_Input(GPIOA_BASE,_GPIO_PINMASK_4); //PA4 analog giriþi olarak kullanýlacak
DAC_CR=1;

while(1){
for(i=0;i<11;i++){
DAC_DHR12R1=j;
j+=409;
delay_ms(2000);
}
j=0; //DAC ye gönderilecek veriyi sýfýrla
}
}