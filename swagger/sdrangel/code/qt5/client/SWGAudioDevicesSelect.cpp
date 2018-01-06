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


#include "SWGAudioDevicesSelect.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace SWGSDRangel {

SWGAudioDevicesSelect::SWGAudioDevicesSelect(QString* json) {
    init();
    this->fromJson(*json);
}

SWGAudioDevicesSelect::SWGAudioDevicesSelect() {
    init();
}

SWGAudioDevicesSelect::~SWGAudioDevicesSelect() {
    this->cleanup();
}

void
SWGAudioDevicesSelect::init() {
    input_volume = 0.0f;
    input_index = 0;
    output_index = 0;
}

void
SWGAudioDevicesSelect::cleanup() {
    


}

SWGAudioDevicesSelect*
SWGAudioDevicesSelect::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGAudioDevicesSelect::fromJsonObject(QJsonObject &pJson) {
    ::SWGSDRangel::setValue(&input_volume, pJson["inputVolume"], "float", "");
    ::SWGSDRangel::setValue(&input_index, pJson["inputIndex"], "qint32", "");
    ::SWGSDRangel::setValue(&output_index, pJson["outputIndex"], "qint32", "");
}

QString
SWGAudioDevicesSelect::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGAudioDevicesSelect::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    obj->insert("inputVolume", QJsonValue(input_volume));

    obj->insert("inputIndex", QJsonValue(input_index));

    obj->insert("outputIndex", QJsonValue(output_index));

    return obj;
}

float
SWGAudioDevicesSelect::getInputVolume() {
    return input_volume;
}
void
SWGAudioDevicesSelect::setInputVolume(float input_volume) {
    this->input_volume = input_volume;
}

qint32
SWGAudioDevicesSelect::getInputIndex() {
    return input_index;
}
void
SWGAudioDevicesSelect::setInputIndex(qint32 input_index) {
    this->input_index = input_index;
}

qint32
SWGAudioDevicesSelect::getOutputIndex() {
    return output_index;
}
void
SWGAudioDevicesSelect::setOutputIndex(qint32 output_index) {
    this->output_index = output_index;
}


}

