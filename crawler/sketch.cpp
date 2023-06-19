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

    SystemInit();                                   //系统时钟初始化为72M	  SYSCLK_FREQ_72MHz
    NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2); //设置NVIC中断分组2:2位抢占优先级，2位响应优先级
    InitDelay(72);                                  //初始化延时函数
    InitServo();                                    //舵机初始化
    InitBuzzer();                                   //蜂鸣器初始化
    InitLED();                                      //初始化LED指示灯
    InitADC();                                      // ADC电池电量初始化
    InitTimer2();                                   //定时器2初始化
    InitMotor();                                    //电机初始化
    IIC_init();                                     // IIC初始化
    DelayMs(100);
    Usart1_Init(); //串口初始化
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
        TaskTimeHandle();    //舵机驱动与ADC检测
        IIC_start();         //起始信号
        IIC_send_byte(0xF0); //发送写指令
        IIC_wait_ack();      //应答
        IIC_send_byte(0x01); //发送寄存器地址
        IIC_wait_ack();      //应答

        IIC_start();            //重新启动
        IIC_send_byte(0xF1);    //发送读指令
        IIC_wait_ack();         //应答
        val = IIC_read_byte(0); //读取一个字节
        IIC_stop();             //停止
                                //		printf("%d%d%d%d",val & 0x01,(val>>1) & 0x01, (val>>2) & 0x01, (val>>3) & 0x01);
                                //		//串口打印4个传感器的状态，串口波特率9600，1表示检测到黑线，0表示检测到白线，从左到右对应sensor1-sensor4
                                //		printf("\n");
                                //		DelayMs(500);
        if (((val & 0x01) == 1) & (((val >> 1) & 0x01) == 1) & (((val >> 2) & 0x01) == 1) & (((val >> 3) & 0x01) == 1))
        {
            MotorControl(0, 0);
            voice = getSound(); //检测声音
            if (voice)
            {
                leftGrab();
                MotorControl(-80, -80);
                DelayMs(1000);
                MotorControl(80, -80);
                DelayMs(5000);
                while (1)
                {
                    TaskTimeHandle();       //舵机驱动与ADC检测
                    IIC_start();            //起始信号
                    IIC_send_byte(0xF0);    //发送写指令
                    IIC_wait_ack();         //应答
                    IIC_send_byte(0x01);    //发送寄存器地址
                    IIC_wait_ack();         //应答
                    IIC_start();            //重新启动
                    IIC_send_byte(0xF1);    //发送读指令
                    IIC_wait_ack();         //应答
                    val = IIC_read_byte(0); //读取一个字节
                    IIC_stop();             //停止
                    MotorControl(80, -80);
                    if ((((val >> 1) & 0x01) == 1) | (((val >> 2) & 0x01) == 1))
                        break;
                }
            }
        }
        //  停
        else if (((((val >> 3) & 0x01) == 1)))
            MotorControl(80, -80);
        else if (((((val >> 2) & 0x01) == 1) & (((val >> 1) & 0x01) == 0)))
            MotorControl(80, -80);
        else if (((((val >> 3) & 0x01) == 1) & (((val >> 2) & 0x01) == 1) & (((val >> 1) & 0x01) == 1) & ((val & 0x01) == 0)))
        {
            MotorControl(80, -80);
        }
        //  左右转分界线
        else if (((((val >> 3) & 0x01) == 0) & (((val >> 2) & 0x01) == 1) & (((val >> 1) & 0x01) == 1) & ((val & 0x01) == 1)))
        {
            MotorControl(-80, 80);
        }
        else if (((((val >> 1) & 0x01) == 1) & (((val >> 2) & 0x01) == 0)))
            MotorControl(-80, 80);
        else if ((((val & 0x01) == 1)))
            MotorControl(-80, 80);
        //  执行
        else
            MotorControl(65, 65);
    }
}
