#include<Arduino.h>
#include "Conection.h"
#include <WiFi.h>

WiFiClient espClient;


 void Conection::SerialConection ()
{
    Serial.println("Wellcome to the Power Meter Project by Henrique Andrade");
    Serial.println();
    Serial.print("Enter your SSID: ");   

    int ControlFlag = 0;
    char ControlChar1;   
    char ControlChar2;

    const char* ssid;
    const char* password;
    
    while (ControlFlag == 0)
    {
        
        if (Serial.available())
        {
           ControlChar1 = Serial.read();

            if (ControlChar1 == '*')
            {
                ssid = m_SSID.c_str();
                Serial.print("SSID typed: ");
                Serial.println(ssid);
                ControlFlag = 1;
            }
            else
            {
                m_SSID.concat(ControlChar1);
            }                   
        }
    }

    delay(500);
    
    Serial.print("Enter your Password: ");
    ControlFlag = 0;

    while (ControlFlag == 0)
    {
        
        if (Serial.available()) 
        {
            ControlChar2 = Serial.read();

            if (ControlChar2 == '*')
            {
                m_Password.remove(0,2);
                password = m_Password.c_str();
                Serial.print("Password typed: ");
                Serial.println(password);
                ControlFlag = 1;
            }
            else
            {
                m_Password.concat(ControlChar2);
            }   
        }
    }  

    Conection::WiFiinit(ssid, password);
        
}

void Conection::WiFiinit (const char* ssid, const char* password)
{
    WiFi.begin(ssid, password);

    while (WiFi.status() != WL_CONNECTED)
    {
        delay(500);
        Serial.print(".");
    }

    randomSeed(micros());

    Serial.println("");
    Serial.println("WiFi connected");
    Serial.println("IP address: ");
    Serial.println(WiFi.localIP());
}
        

    
