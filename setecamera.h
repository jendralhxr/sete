#ifndef SETECAMERA_H
#define SETECAMERA_H

#include <QObject>
#include <QThread>
#include <QTimer>
#include <QImage>
#include <MindVision/CameraApi.h>
#include <MindVision/CameraDefine.h>
#include <MindVision/CameraStatus.h>

class SeteCamera : public QThread
{
    Q_OBJECT
public:
    explicit SeteCamera(QThread *parent = nullptr);

public slots:
    int setExposure();
    int setFPS();
    int setGain();
    int setTrigger();

signals:
    int getFPS();

private:
    void run();
    unsigned int framenum;
    void *buffer;
    int init_SDK();
    int SetCameraResolution(int offsetx, int offsety, int width, int height);
    int  GUI_init_parameter(int hCamera,tSdkCameraCapbility * pCameraInfo);
    int  GUI_init_Resolution(int hCamera,tSdkCameraCapbility * pCameraInfo);
    int  GUI_Update_Resolution(int hCamera,tSdkCameraCapbility * pCameraInfo);
    int  GUI_init_exposure(int hCamera,tSdkCameraCapbility * pCameraInfo);
    int  GUI_init_WB(int hCamera,tSdkCameraCapbility * pCameraInfo);
    int  GUI_init_mmap(int hCamera,tSdkCameraCapbility * pCameraInfo);
    int  GUI_init_isp(int hCamera,tSdkCameraCapbility * pCameraInfo);
    int  GUI_init_speed(int hCamera,tSdkCameraCapbility * pCameraInfo);
    int  GUI_set_speed(int hCamera,tSdkCameraCapbility * pCameraInfo);
    int  GUI_init_Trigger(int hCamera,tSdkCameraCapbility * pCameraInfo);

    QTimer *m_timer;
    bool   exposure_time_lineedit_status;

    // QGraphicsScene *m_scene;
    // QGraphicsPixmapItem *m_image_item;

private slots:
    void on_radioButton_trigger_hardware_clicked(bool checked);
    void on_radioButton_software_trigger_clicked(bool checked);
    void on_radioButton_collect_clicked(bool checked);
    void on_flashlight_l_clicked(bool checked);
    void on_flashlight_h_clicked(bool checked);
    void on_flashlight_manual_clicked(bool checked);
    void on_flashlight_auto_clicked(bool checked);
    void on_lineEdit_exposure_time_returnPressed();
    void on_radioButton_jpg_clicked();
    void on_radioButton_png_clicked();
    void on_radioButton_raw_clicked();
    void on_radioButton_bmp_clicked();
    void on_pushButton_snap_catch_released();
    void on_pushButton_snap_path_released();
    void on_pushButton_para_load_released();
    void on_pushButton_para_save_released();
    void on_pushButton_para_acquiesce_released();
    void on_radioButton_D_clicked(bool checked);
    void on_radioButton_C_clicked(bool checked);
    void on_radioButton_B_clicked(bool checked);
    void on_horizontalSlider_isp_acutance_valueChanged(int value);
    void on_checkBox_isp_v_clicked(bool checked);
    void on_checkBox_isp_h_clicked(bool checked);
    void on_contrast_horizontalSlider_valueChanged(int value);
    void on_gamma_horizontalSlider_valueChanged(int value);
    void on_horizontalSlider_saturation_valueChanged(int value);
    void on_horizontalSlider_gain_b_valueChanged(int value);
    void on_horizontalSlider_gain_g_valueChanged(int value);
    void on_horizontalSlider_gain_r_valueChanged(int value);
    void on_horizontalSlider_exposure_time_valueChanged(int value);
    void on_horizontalSlider_gain_valueChanged(int value);
    void on_AWB_once_button_released();
    void on_res_combobox_activated(int index);

    void Image_process(QImage img);
    void camera_statues();

    void on_radioButton_A_clicked(bool checked);
    void on_exposure_mode_manual_clicked(bool checked);
    void on_exposure_mode_auto_clicked(bool checked);
    void on_radioButton_60HZ_clicked(bool checked);
    void on_radioButton_50HZ_clicked(bool checked);
    void on_software_trigger_once_button_clicked();
    void on_flicker_checkBox_clicked(bool checked);
    void on_AE_horizontalSlider_valueChanged(int value);

    void radioChange();


};

#endif // SETECAMERA_H
