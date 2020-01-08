int ldr = A0;
int cutoff = 700;
int dly = 10;
int a = 0,k = 0,d = 0;
int c,b,val,arr[];
char s ;

void setup() {
  
  Serial.begin(9600);
  pinMode(ldr,INPUT);
}

void loop() {
  
  initldr();
  msg();
}

int bti()
{
  if(digitalRead(ldr) > cutoff)
  {
    return 1;
  }
  
  else 
  {
   return 0;
  }
}


void initldr()   //For initilisation of ldr for recieving "!" letter
{

  while(b == 0)
  {
  for (int i = 0;i<8,i++)
  {
    a+=bti(digitalRead(ldr))*pow(2,i)
    delay(dly);   
  }
  if(a == 33)
  {
    b=1;
    }
  }
  esle
  {
    b=0;
    delay(dly);
  }
}

int readldr()   //Reading bit recieved by ldr
{

  if(b==1)
  {
     for (int j = 0;j<8;j++)
     {
        d+=bti(digitalRead(ldr))*pow(2,j)
        delay(dly);   
     }
  }
return d;
}

void msg()    //For computing the recieved  bits . ASCII to string
{
  c = readldr()
  while(c!=33)
  {
    arr[k] = c;
    k++;
  }
  
  for(int f = 0;f<k;f++)
  {
    Serial.println(arr[f]);
  }

}
