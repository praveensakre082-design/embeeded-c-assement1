\#include"main.h"

\#include<string.h>

int main(void)

{



HAL\_Init();

SystemClock\_config();

MX\_GPIO\_Init();



while(1)

{



if(HAL\_GPIO\_ReadPin(GPIOB,GPIO\_PIN5)==GPIO\_SET)

{

&#x20;if(HAL(HAL\_GPIO\_ReadPin(GPIOA,GPIO\_PIN5)==GPIO\_SET)

&#x20; {

&#x20;   HAL\_GPIO\_WritePin(GPIOB,GPIO\_PIN6,GPIO\_SET);

&#x20;   HAL\_GPIO\_WritePin(GPIOB,GPIO\_PIN7,GPIO\_SET);

&#x20;  }

&#x20; else 

&#x20; {

&#x20;   HAL\_GPIO\_WritePin(GPIOB,GPIO\_PIN6,GPIO\_RESET);

&#x20;   HAL\_GPIO\_WritePin(GPIOB,GPIO\_PIN7,GPIO\_RESET);

&#x20;  }



&#x20;  

&#x20;  }

&#x20;     if(HAL(HAL\_GPIO\_ReadPin(GPIOA,GPIO\_PIN5)==GPIO\_SET)

&#x20;        {

&#x20;         HAL\_GPIO\_WritePin(GPIOB,GPIO\_PIN6,GPIO\_SET);

&#x20;         HAL\_GPIO\_WritePin(GPIOB,GPIO\_PIN7,GPIO\_SET);

&#x20;         HAL\_Delay(1000);

&#x20;         

&#x20;         **HAL\_GPIO\_WritePin(GPIOB,GPIO\_PIN6,GPIO\_RESET);**

&#x20;         **HAL\_GPIO\_WritePin(GPIOB,GPIO\_PIN7,GPIO\_RESET);**

&#x20;         **HAL\_Delay(1000);**

&#x20;         **}**

**}**

