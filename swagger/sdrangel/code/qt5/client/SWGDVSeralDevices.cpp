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


#include "SWGDVSeralDevices.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace SWGSDRangel {

SWGDVSeralDevices::SWGDVSeralDevices(QString* json) {
    init();
    this->fromJson(*json);
}

SWGDVSeralDevices::SWGDVSeralDevices() {
    init();
}

SWGDVSeralDevices::~SWGDVSeralDevices() {
    this->cleanup();
}

void
SWGDVSeralDevices::init() {
    nb_devices = 0;
    dv_serial_devices = new QList<SWGDVSerialDevice*>();
}

void
SWGDVSeralDevices::cleanup() {
    

    if(dv_serial_devices != nullptr) {
        QList<SWGDVSerialDevice*>* arr = dv_serial_devices;
        foreach(SWGDVSerialDevice* o, *arr) {
            delete o;
        }
        delete dv_serial_devices;
    }
}

SWGDVSeralDevices*
SWGDVSeralDevices::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGDVSeralDevices::fromJsonObject(QJsonObject &pJson) {
    ::SWGSDRangel::setValue(&nb_devices, pJson["nbDevices"], "qint32", "");
    
    ::SWGSDRangel::setValue(&dv_serial_devices, pJson["dvSerialDevices"], "QList", "SWGDVSerialDevice");
    
}

QString
SWGDVSeralDevices::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGDVSeralDevices::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    obj->insert("nbDevices", QJsonValue(nb_devices));

    QJsonArray dv_serial_devicesJsonArray;
    toJsonArray((QList<void*>*)dv_serial_devices, &dv_serial_devicesJsonArray, "dv_serial_devices", "SWGDVSerialDevice");
    obj->insert("dvSerialDevices", dv_serial_devicesJsonArray);

    return obj;
}

qint32
SWGDVSeralDevices::getNbDevices() {
    return nb_devices;
}
void
SWGDVSeralDevices::setNbDevices(qint32 nb_devices) {
    this->nb_devices = nb_devices;
}

QList<SWGDVSerialDevice*>*
SWGDVSeralDevices::getDvSerialDevices() {
    return dv_serial_devices;
}
void
SWGDVSeralDevices::setDvSerialDevices(QList<SWGDVSerialDevice*>* dv_serial_devices) {
    this->dv_serial_devices = dv_serial_devices;
}


}

