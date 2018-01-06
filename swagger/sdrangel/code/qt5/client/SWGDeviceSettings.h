/**
 * SDRangel
 * This is the web REST/JSON API of SDRangel SDR software. SDRangel is an Open Source Qt5/OpenGL 3.0+ (4.3+ in Windows) GUI and server Software Defined Radio and signal analyzer in software. It supports Airspy, BladeRF, HackRF, LimeSDR, PlutoSDR, RTL-SDR, SDRplay RSP1 and FunCube     ---   Limitations and specifcities:       * In SDRangel GUI the first Rx device set cannot be deleted. Conversely the server starts with no device sets and its number of device sets can be reduced to zero by as many calls as necessary to /sdrangel/deviceset with DELETE method.   * Stopping instance i.e. /sdrangel with DELETE method is a server only feature. It allows stopping the instance nicely.   * Preset import and export from/to file is a server only feature.   * Device set focus is a GUI only feature.   * The following channels are not implemented (status 501 is returned): ATV demodulator, Channel Analyzer, Channel Analyzer NG, LoRa demodulator, TCP source   * The content type returned is always application/json except in the following cases:     * An incorrect URL was specified: this document is returned as text/html with a status 400    --- 
 *
 * OpenAPI spec version: 4.0.0
 * Contact: f4exb06@gmail.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

/*
 * SWGDeviceSettings.h
 * 
 * Base device settings
 */

#ifndef SWGDeviceSettings_H_
#define SWGDeviceSettings_H_

#include <QJsonObject>


#include "SWGFileSourceSettings.h"
#include "SWGHackRFInputSettings.h"
#include "SWGHackRFOutputSettings.h"
#include "SWGLimeSdrInputSettings.h"
#include "SWGLimeSdrOutputSettings.h"
#include "SWGRtlSdrSettings.h"
#include <QString>

#include "SWGObject.h"


namespace SWGSDRangel {

class SWGDeviceSettings: public SWGObject {
public:
    SWGDeviceSettings();
    SWGDeviceSettings(QString* json);
    virtual ~SWGDeviceSettings();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGDeviceSettings* fromJson(QString &jsonString);

    QString* getDeviceHwType();
    void setDeviceHwType(QString* device_hw_type);

    qint32 getTx();
    void setTx(qint32 tx);

    SWGFileSourceSettings* getFileSourceSettings();
    void setFileSourceSettings(SWGFileSourceSettings* file_source_settings);

    SWGHackRFInputSettings* getHackRfInputSettings();
    void setHackRfInputSettings(SWGHackRFInputSettings* hack_rf_input_settings);

    SWGHackRFOutputSettings* getHackRfOutputSettings();
    void setHackRfOutputSettings(SWGHackRFOutputSettings* hack_rf_output_settings);

    SWGLimeSdrInputSettings* getLimeSdrInputSettings();
    void setLimeSdrInputSettings(SWGLimeSdrInputSettings* lime_sdr_input_settings);

    SWGLimeSdrOutputSettings* getLimeSdrOutputSettings();
    void setLimeSdrOutputSettings(SWGLimeSdrOutputSettings* lime_sdr_output_settings);

    SWGRtlSdrSettings* getRtlSdrSettings();
    void setRtlSdrSettings(SWGRtlSdrSettings* rtl_sdr_settings);


private:
    QString* device_hw_type;
    qint32 tx;
    SWGFileSourceSettings* file_source_settings;
    SWGHackRFInputSettings* hack_rf_input_settings;
    SWGHackRFOutputSettings* hack_rf_output_settings;
    SWGLimeSdrInputSettings* lime_sdr_input_settings;
    SWGLimeSdrOutputSettings* lime_sdr_output_settings;
    SWGRtlSdrSettings* rtl_sdr_settings;
};

}

#endif /* SWGDeviceSettings_H_ */
