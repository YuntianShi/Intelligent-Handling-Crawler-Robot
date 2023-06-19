#include <Arduino.h>

bool grab_s = FALSE; //??????
static bool left = FALSE;
static bool right = FALSE;

bool getSound(void)
{
    CheckSound();
    if (GetSound() > 60)
    {
        DelayMs(5);
        if (GetSound() > 60)
            return TRUE;
    }
    return FALSE;
}

void Grab(void)
{
    BusServoCtrl(1, SERVO_MOVE_TIME_WRITE, 300, 1000);
    BusServoCtrl(2, SERVO_MOVE_TIME_WRITE, 500, 1000);
    BusServoCtrl(3, SERVO_MOVE_TIME_WRITE, 350, 1000);
    BusServoCtrl(4, SERVO_MOVE_TIME_WRITE, 100, 1000);
    BusServoCtrl(5, SERVO_MOVE_TIME_WRITE, 300, 1000);
    BusServoCtrl(6, SERVO_MOVE_TIME_WRITE, 500, 1000);
    DelayMs(1000);

    BusServoCtrl(1, SERVO_MOVE_TIME_WRITE, 140, 1000);
    BusServoCtrl(2, SERVO_MOVE_TIME_WRITE, 500, 1000);
    BusServoCtrl(3, SERVO_MOVE_TIME_WRITE, 810, 1000);
    BusServoCtrl(4, SERVO_MOVE_TIME_WRITE, 100, 1000);
    BusServoCtrl(5, SERVO_MOVE_TIME_WRITE, 765, 1000);
    DelayMs(1000);
    DelayMs(1000);
    BusServoCtrl(1, SERVO_MOVE_TIME_WRITE, 600, 1000);
    DelayMs(1000);

    BusServoCtrl(3, SERVO_MOVE_TIME_WRITE, 350, 1000);
    BusServoCtrl(5, SERVO_MOVE_TIME_WRITE, 300, 1000);
    DelayMs(1000);

    BusServoCtrl(6, SERVO_MOVE_TIME_WRITE, 130, 1000);
    DelayMs(1000);

    BusServoCtrl(3, SERVO_MOVE_TIME_WRITE, 810, 1000);
    BusServoCtrl(5, SERVO_MOVE_TIME_WRITE, 765, 1000);
    DelayMs(1000);
    DelayMs(1000);
    BusServoCtrl(1, SERVO_MOVE_TIME_WRITE, 0, 1000);
    DelayMs(1000);

    BusServoCtrl(3, SERVO_MOVE_TIME_WRITE, 350, 1000);
    BusServoCtrl(5, SERVO_MOVE_TIME_WRITE, 300, 1000);
    DelayMs(1000);

    BusServoCtrl(1, SERVO_MOVE_TIME_WRITE, 300, 1000);
    BusServoCtrl(6, SERVO_MOVE_TIME_WRITE, 500, 1000);
    DelayMs(1000);
    grab_s = FALSE;
}

void leftGrab(void)
{
    BusServoCtrl(1, SERVO_MOVE_TIME_WRITE, 300, 1000);
    BusServoCtrl(2, SERVO_MOVE_TIME_WRITE, 500, 1000);
    BusServoCtrl(3, SERVO_MOVE_TIME_WRITE, 350, 1000);
    BusServoCtrl(4, SERVO_MOVE_TIME_WRITE, 100, 1000);
    BusServoCtrl(5, SERVO_MOVE_TIME_WRITE, 300, 1000);
    BusServoCtrl(6, SERVO_MOVE_TIME_WRITE, 500, 1000);
    DelayMs(1000);

    // BusServoCtrl(6,SERVO_MOVE_TIME_WRITE,875,1000);
    // DelayMs(1000);

    BusServoCtrl(1, SERVO_MOVE_TIME_WRITE, 200, 1000);
    BusServoCtrl(3, SERVO_MOVE_TIME_WRITE, 300, 1000);
    BusServoCtrl(4, SERVO_MOVE_TIME_WRITE, 250, 1000);
    BusServoCtrl(5, SERVO_MOVE_TIME_WRITE, 780, 1000);
    DelayMs(1000);
    DelayMs(1000);

    BusServoCtrl(1, SERVO_MOVE_TIME_WRITE, 600, 1000);
    DelayMs(1000);

    BusServoCtrl(3, SERVO_MOVE_TIME_WRITE, 350, 1000);
    BusServoCtrl(4, SERVO_MOVE_TIME_WRITE, 100, 1000);
    BusServoCtrl(5, SERVO_MOVE_TIME_WRITE, 300, 1000);
    DelayMs(1000);

    BusServoCtrl(6, SERVO_MOVE_TIME_WRITE, 140, 1000);
    DelayMs(1000);

    BusServoCtrl(3, SERVO_MOVE_TIME_WRITE, 300, 1000);
    BusServoCtrl(4, SERVO_MOVE_TIME_WRITE, 250, 1000);
    BusServoCtrl(5, SERVO_MOVE_TIME_WRITE, 780, 1000);
    DelayMs(1000);
    DelayMs(1000);

    BusServoCtrl(1, SERVO_MOVE_TIME_WRITE, 200, 1000);
    DelayMs(1000);

    BusServoCtrl(3, SERVO_MOVE_TIME_WRITE, 350, 1000);
    BusServoCtrl(4, SERVO_MOVE_TIME_WRITE, 100, 1000);
    BusServoCtrl(5, SERVO_MOVE_TIME_WRITE, 300, 1000);
    DelayMs(1000);

    BusServoCtrl(1, SERVO_MOVE_TIME_WRITE, 300, 1000);
    BusServoCtrl(2, SERVO_MOVE_TIME_WRITE, 500, 1000);
    BusServoCtrl(3, SERVO_MOVE_TIME_WRITE, 350, 1000);
    BusServoCtrl(4, SERVO_MOVE_TIME_WRITE, 100, 1000);
    BusServoCtrl(5, SERVO_MOVE_TIME_WRITE, 300, 1000);
    BusServoCtrl(6, SERVO_MOVE_TIME_WRITE, 500, 1000);
    DelayMs(1000);
    DelayMs(1000);
    left = FALSE;
}

void rightGrab(void)
{
    BusServoCtrl(1, SERVO_MOVE_TIME_WRITE, 300, 1000);
    BusServoCtrl(2, SERVO_MOVE_TIME_WRITE, 500, 1000);
    BusServoCtrl(3, SERVO_MOVE_TIME_WRITE, 350, 1000);
    BusServoCtrl(4, SERVO_MOVE_TIME_WRITE, 100, 1000);
    BusServoCtrl(5, SERVO_MOVE_TIME_WRITE, 300, 1000);
    BusServoCtrl(6, SERVO_MOVE_TIME_WRITE, 500, 1000);
    DelayMs(1000);

    BusServoCtrl(6, SERVO_MOVE_TIME_WRITE, 140, 1000);
    DelayMs(1000);

    BusServoCtrl(1, SERVO_MOVE_TIME_WRITE, 200, 1000);
    BusServoCtrl(3, SERVO_MOVE_TIME_WRITE, 300, 1000);
    BusServoCtrl(4, SERVO_MOVE_TIME_WRITE, 250, 1000);
    BusServoCtrl(5, SERVO_MOVE_TIME_WRITE, 780, 1000);
    DelayMs(1000);
    DelayMs(1000);

    BusServoCtrl(1, SERVO_MOVE_TIME_WRITE, 600, 1000);
    DelayMs(1000);

    BusServoCtrl(3, SERVO_MOVE_TIME_WRITE, 350, 1000);
    BusServoCtrl(4, SERVO_MOVE_TIME_WRITE, 100, 1000);
    BusServoCtrl(5, SERVO_MOVE_TIME_WRITE, 300, 1000);
    DelayMs(1000);

    BusServoCtrl(6, SERVO_MOVE_TIME_WRITE, 875, 1000);
    DelayMs(1000);

    BusServoCtrl(3, SERVO_MOVE_TIME_WRITE, 300, 1000);
    BusServoCtrl(4, SERVO_MOVE_TIME_WRITE, 250, 1000);
    BusServoCtrl(5, SERVO_MOVE_TIME_WRITE, 780, 1000);
    DelayMs(1000);
    DelayMs(1000);

    BusServoCtrl(1, SERVO_MOVE_TIME_WRITE, 200, 1000);
    DelayMs(1000);

    BusServoCtrl(3, SERVO_MOVE_TIME_WRITE, 350, 1000);
    BusServoCtrl(4, SERVO_MOVE_TIME_WRITE, 100, 1000);
    BusServoCtrl(5, SERVO_MOVE_TIME_WRITE, 300, 1000);
    DelayMs(1000);

    BusServoCtrl(1, SERVO_MOVE_TIME_WRITE, 300, 1000);
    BusServoCtrl(2, SERVO_MOVE_TIME_WRITE, 500, 1000);
    BusServoCtrl(3, SERVO_MOVE_TIME_WRITE, 350, 1000);
    BusServoCtrl(4, SERVO_MOVE_TIME_WRITE, 100, 1000);
    BusServoCtrl(5, SERVO_MOVE_TIME_WRITE, 300, 1000);
    BusServoCtrl(6, SERVO_MOVE_TIME_WRITE, 500, 1000);
    DelayMs(1000);
    DelayMs(1000);
    right = FALSE;
}

int main(void)
{

    SystemInit();                                   //ϵͳʱ�ӳ�ʼ��Ϊ72M	  SYSCLK_FREQ_72MHz
    NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2); //����NVIC�жϷ���2:2λ��ռ���ȼ���2λ��Ӧ���ȼ�
    InitDelay(72);                                  //��ʼ����ʱ����
    InitServo();                                    //�����ʼ��
    InitBuzzer();                                   //��������ʼ��
    InitLED();                                      //��ʼ��LEDָʾ��
    InitADC();                                      // ADC��ص�����ʼ��
    InitTimer2();                                   //��ʱ��2��ʼ��
    InitMotor();                                    //�����ʼ��
    IIC_init();                                     // IIC��ʼ��
    DelayMs(100);
    Usart1_Init(); //���ڳ�ʼ��
    InitBusServoCtrl();
    DelayMs(100);
    BusServoCtrl(1, SERVO_MOVE_TIME_WRITE, 600, 1000);
    BusServoCtrl(2, SERVO_MOVE_TIME_WRITE, 500, 1000);
    BusServoCtrl(3, SERVO_MOVE_TIME_WRITE, 350, 1000);
    BusServoCtrl(4, SERVO_MOVE_TIME_WRITE, 100, 1000);
    BusServoCtrl(5, SERVO_MOVE_TIME_WRITE, 300, 1000);
    BusServoCtrl(6, SERVO_MOVE_TIME_WRITE, 500, 1000);
    DelayMs(1000);

    while (1)
    {
        u8 val;
        bool voice = FALSE;
        TaskTimeHandle();    //���������ADC���
        IIC_start();         //��ʼ�ź�
        IIC_send_byte(0xF0); //����дָ��
        IIC_wait_ack();      //Ӧ��
        IIC_send_byte(0x01); //���ͼĴ�����ַ
        IIC_wait_ack();      //Ӧ��

        IIC_start();            //��������
        IIC_send_byte(0xF1);    //���Ͷ�ָ��
        IIC_wait_ack();         //Ӧ��
        val = IIC_read_byte(0); //��ȡһ���ֽ�
        IIC_stop();             //ֹͣ
                                //		printf("%d%d%d%d",val & 0x01,(val>>1) & 0x01, (val>>2) & 0x01, (val>>3) & 0x01);
                                //		//���ڴ�ӡ4����������״̬�����ڲ�����9600��1��ʾ��⵽���ߣ�0��ʾ��⵽���ߣ������Ҷ�Ӧsensor1-sensor4
                                //		printf("\n");
                                //		DelayMs(500);
        if (((val & 0x01) == 1) & (((val >> 1) & 0x01) == 1) & (((val >> 2) & 0x01) == 1) & (((val >> 3) & 0x01) == 1))
        {
            MotorControl(0, 0);
            voice = getSound(); //�������
            if (voice)
            {
                leftGrab();
                MotorControl(-80, -80);
                DelayMs(1000);
                MotorControl(80, -80);
                DelayMs(5000);
                while (1)
                {
                    TaskTimeHandle();       //���������ADC���
                    IIC_start();            //��ʼ�ź�
                    IIC_send_byte(0xF0);    //����дָ��
                    IIC_wait_ack();         //Ӧ��
                    IIC_send_byte(0x01);    //���ͼĴ�����ַ
                    IIC_wait_ack();         //Ӧ��
                    IIC_start();            //��������
                    IIC_send_byte(0xF1);    //���Ͷ�ָ��
                    IIC_wait_ack();         //Ӧ��
                    val = IIC_read_byte(0); //��ȡһ���ֽ�
                    IIC_stop();             //ֹͣ
                    MotorControl(80, -80);
                    if ((((val >> 1) & 0x01) == 1) | (((val >> 2) & 0x01) == 1))
                        break;
                }
            }
        }
        //  ͣ
        else if (((((val >> 3) & 0x01) == 1)))
            MotorControl(80, -80);
        else if (((((val >> 2) & 0x01) == 1) & (((val >> 1) & 0x01) == 0)))
            MotorControl(80, -80);
        else if (((((val >> 3) & 0x01) == 1) & (((val >> 2) & 0x01) == 1) & (((val >> 1) & 0x01) == 1) & ((val & 0x01) == 0)))
        {
            MotorControl(80, -80);
        }
        //  ����ת�ֽ���
        else if (((((val >> 3) & 0x01) == 0) & (((val >> 2) & 0x01) == 1) & (((val >> 1) & 0x01) == 1) & ((val & 0x01) == 1)))
        {
            MotorControl(-80, 80);
        }
        else if (((((val >> 1) & 0x01) == 1) & (((val >> 2) & 0x01) == 0)))
            MotorControl(-80, 80);
        else if ((((val & 0x01) == 1)))
            MotorControl(-80, 80);
        //  ִ��
        else
            MotorControl(65, 65);
    }
}
