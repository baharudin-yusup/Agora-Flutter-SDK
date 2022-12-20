/// Generated by terra, DO NOT MODIFY BY HAND.

#ifndef FAKE_IAUDIODEVICEMANAGER_INTERNAL_H_
#define FAKE_IAUDIODEVICEMANAGER_INTERNAL_H_

#include "IAudioDeviceManager.h"

namespace agora {
namespace rtc {
class FakeIAudioDeviceManagerInternal : public agora::rtc::IAudioDeviceManager {
  virtual agora::rtc::IAudioDeviceCollection *
  enumeratePlaybackDevices() override {
    return 0;
  }

  virtual agora::rtc::IAudioDeviceCollection *
  enumerateRecordingDevices() override {
    return 0;
  }

  virtual int setPlaybackDevice(const char *deviceId) override { return 0; }

  virtual int getPlaybackDevice(char *deviceId) override { return 0; }

  virtual int getPlaybackDeviceInfo(char *deviceId, char *deviceName) override {
    return 0;
  }

  virtual int setPlaybackDeviceVolume(int volume) override { return 0; }

  virtual int getPlaybackDeviceVolume(int *volume) override { return 0; }

  virtual int setRecordingDevice(const char *deviceId) override { return 0; }

  virtual int getRecordingDevice(char *deviceId) override { return 0; }

  virtual int getRecordingDeviceInfo(char *deviceId,
                                     char *deviceName) override {
    return 0;
  }

  virtual int setRecordingDeviceVolume(int volume) override { return 0; }

  virtual int getRecordingDeviceVolume(int *volume) override { return 0; }

  virtual int setLoopbackDevice(const char *deviceId) override { return 0; }

  virtual int getLoopbackDevice(char *deviceId) override { return 0; }

  virtual int setPlaybackDeviceMute(bool mute) override { return 0; }

  virtual int getPlaybackDeviceMute(bool *mute) override { return 0; }

  virtual int setRecordingDeviceMute(bool mute) override { return 0; }

  virtual int getRecordingDeviceMute(bool *mute) override { return 0; }

  virtual int startPlaybackDeviceTest(char const *testAudioFilePath) override {
    return 0;
  }

  virtual int stopPlaybackDeviceTest() override { return 0; }

  virtual int startRecordingDeviceTest(int indicationInterval) override {
    return 0;
  }

  virtual int stopRecordingDeviceTest() override { return 0; }

  virtual int startAudioDeviceLoopbackTest(int indicationInterval) override {
    return 0;
  }

  virtual int stopAudioDeviceLoopbackTest() override { return 0; }

  virtual int followSystemPlaybackDevice(bool enable) override { return 0; }

  virtual int followSystemRecordingDevice(bool enable) override { return 0; }

  virtual int followSystemLoopbackDevice(bool enable) override { return 0; }

  virtual void release() override {}
};

} // namespace rtc
} // namespace agora

#endif // FAKE_IAUDIODEVICEMANAGER_INTERNAL_H_