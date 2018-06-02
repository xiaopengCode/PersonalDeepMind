
//================================================
//说明：LRC校验（ModBus ASCII模式 纵向冗余校验）
//输入：报文缓冲区和长度
//返回值：LRC值
//================================================
unsigned char LRC(unsigned char *ucBuf,unsigned short int usLength)
{
  unsigned char ucLRC=0;
  
  while(usLength--)
  ucLRC+= *ucBuf++;  //缓冲区字节相加，自动舍弃进位
  
  return (unsigned char)(-((char)(ucLRC)));  //返回二进制补码 负号：取反加1 即补码，前面强制转换为unsigned char  即取单字节
    
}


