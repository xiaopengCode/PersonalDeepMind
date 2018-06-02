
unsigned char LRC(unsigned char *ucBuf,unsigned short int usLength)
{
  unsigned char ucLRC=0;
  
  while(usLength--)
  ucLRC+= *ucBuf++;
  
  return (unsigned char)(-((char)(ucLRC)));
    
}


