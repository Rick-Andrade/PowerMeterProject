#ifndef _LOG_H_
#define _LOG_H_



class LOG
{
public:
    void init ()
    {
        Serial.println("Wellcome to the Power Meter Project by Henrique Andrade");
        Serial.println();
        Serial.print("Enter your SSID: ");
        char m_SSID;
        while (Serial.available()==0){}

        m_SSID = Serial.read();
        Serial.println(m_SSID);


        Serial.println();

        /*Serial.print("Enter your Password: ");
        const char m_Password = Serial.read();
        Serial.println();*/

    }
};

#endif