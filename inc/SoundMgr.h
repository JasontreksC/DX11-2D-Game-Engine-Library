#pragma once

class SoundMgr
{
	SINGLETON(SoundMgr);
private:
	SoundMgr() {};
	~SoundMgr() {}

public:

	FMOD::System* fmod_System = nullptr;
	map<string, FMOD::Sound*>soundList;
	FMOD::Channel* fmod_Channel = nullptr;
public:
	bool Init();
	void Update();
	bool AddFmodSound(string _fileName, string _instanceName, FMOD_MODE _loopmode);
	bool PlayFmodSound(string _instanceName);
	void StopFmodSound(string _instanceName);
	void Release();
};

