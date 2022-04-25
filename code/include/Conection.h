#ifndef _CONECTION_H_
#define _COnNECTION_H_


class Conection
{

private:
    String m_SSID;
    String m_Password;

public:
    void SerialConection ();
    void WiFiinit(const char* ssid, const char* password);
        
};

#endif
