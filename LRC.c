
//================================================
//˵����LRCУ�飨ModBus ASCIIģʽ ��������У�飩
//���룺���Ļ������ͳ���
//����ֵ��LRCֵ
//================================================
unsigned char LRC(unsigned char *ucBuf,unsigned short int usLength)
{
  unsigned char ucLRC=0;
  
  while(usLength--)
  ucLRC+= *ucBuf++;  //�������ֽ���ӣ��Զ�������λ
  
  return (unsigned char)(-((char)(ucLRC)));  //���ض����Ʋ��� ���ţ�ȡ����1 �����룬ǰ��ǿ��ת��Ϊunsigned char  ��ȡ���ֽ�
    
}


