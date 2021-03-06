#ifndef _SETTINGS_H
#define _SETTINGS_H

#include <map>
#include <string>
#include <vector>
#include <ostream>

class CONFIG;

class SETTINGS
{
public:
	SETTINGS();

	void Serialize(bool write, CONFIG & config);

	void Load(const std::string & settingsfile, std::ostream & error);

	void Save(const std::string & settingsfile, std::ostream & error);

	void Get(std::map<std::string, std::string> & options);

	void Set(const std::map<std::string, std::string> & options);

	unsigned int GetResolutionX() const
	{
		return resolution_x;
	}

	unsigned int GetResolutionY() const
	{
		return resolution_y;
	}

	unsigned int GetBpp() const
	{
		return bpp;
	}

	unsigned int GetDepthbpp() const
	{
		return depthbpp;
	}

	bool GetFullscreen() const
	{
		return fullscreen;
	}

	bool GetShaders() const
	{
		return shaders;
	}

	const std::string & GetSkin() const
	{
		return skin;
	}

	const std::string & GetLanguage() const
	{
		return language;
	}

	bool GetShowFps() const
	{
		return show_fps;
	}

	float GetMasterVolume() const
	{
		return mastervolume;
	}

	bool GetMPH() const
	{
		return mph;
	}

	const std::string & GetTrack() const
	{
		return track;
	}

	///returns 0 or 1 for off
	int GetAntialiasing() const
	{
		return antialiasing;
	}

	///return 0 or 1 for off
	int GetAnisotropic() const
	{
		return anisotropic;
	}

	bool GetTrackmap() const
	{
		return trackmap;
	}

	bool GetShowHUD() const
	{
		return show_hud;
	}

	int GetAnisotropy() const
	{
		return anisotropic;
	}

	float GetFOV() const
	{
		return FOV;
	}

	bool GetABS() const
	{
		return abs;
	}

	bool GetTCS() const
	{
		return tcs;
	}

	const std::string & GetJoyType() const
	{
		return joytype;
	}

	bool GetJoy200() const
	{
		return joy200;
	}

	float GetSpeedSensitivity() const
	{
		return speed_sensitivity;
	}

	bool GetJoystickCalibrated() const
	{
		return joystick_calibrated;
	}

	float GetViewDistance() const
	{
		return view_distance;
	}

	bool GetAutoClutch() const
	{
		return autoclutch;
	}

	bool GetAutoShift() const
	{
		return autoshift;
	}

	bool GetRacingline() const
	{
		return racingline;
	}

	bool GetMouseGrab() const
	{
		return mousegrab;
	}

	bool GetRecordReplay() const
	{
		return recordreplay;
	}

	int GetSelectedReplay() const
	{
		return selected_replay;
	}

	const std::string & GetTextureSize() const
	{
		return texturesize;
	}

	float GetButtonRamp() const
	{
		return button_ramp;
	}

	const std::string & GetFFDevice() const
	{
		return ff_device;
	}

	float GetFFGain() const
	{
		return ff_gain;
	}

	bool GetFFInvert() const
	{
		return ff_invert;
	}

	bool GetTrackReverse() const
	{
		return trackreverse;
	}

	bool GetTrackDynamic() const
	{
		return trackdynamic;
	}

	bool GetBatchGeometry() const
	{
		return batch_geometry;
	}

	bool GetShadows() const
	{
		return shadows;
	}

	int GetReflections() const
	{
		return reflections;
	}

	bool GetInputGraph() const
	{
		return input_graph;
	}

	int GetShadowDistance() const
	{
		return shadow_distance;
	}

	int GetShadowQuality() const
	{
		return shadow_quality;
	}

	int GetLighting() const
	{
		return lighting;
	}

	bool GetBloom() const
	{
		return bloom;
	}

	bool GetNormalMaps() const
	{
		return normalmaps;
	}

	const std::string & GetPlayerCar() const
	{
		return player;
	}

	const std::string & GetPlayerCarPaint() const
	{
		return player_paint;
	}

	void GetPlayerColor(float & r, float & g, float & b) const
	{
		r = player_color[0];
		g = player_color[1];
		b = player_color[2];
	}

	const std::string & GetOpponentCar() const
	{
		return opponent;
	}

	const std::string & GetOpponentCarPaint() const
	{
		return opponent_paint;
	}

	const std::string & GetOpponentType() const
	{
		return opponent_type;
	}

	void GetOpponentColor(float & r, float & g, float & b) const
	{
		r = opponent_color[0];
		g = opponent_color[1];
		b = opponent_color[2];
	}

	float GetCameraBounce() const
	{
		return camera_bounce;
	}

	int GetNumberOfLaps() const
	{
	    return number_of_laps;
	}

	float GetContrast() const
	{
		return contrast;
	}

	int GetCamera() const
	{
		return camera_id;
	}

	bool GetHGateShifter() const
	{
		return hgateshifter;
	}

	float GetAIDifficulty() const
	{
		return ai_difficulty;
	}

	bool GetVehicleDamage() const
	{
		return vehicle_damage;
	}

	void SetResolutionX ( unsigned int theValue )
	{
		resolution_x = theValue;
	}

	void SetResolutionY ( unsigned int value )
	{
		resolution_y = value;
	}

	void SetMasterVolume ( float value )
	{
		mastervolume = value;
	}

	void SetSelectedReplay ( int value )
	{
		selected_replay = value;
	}

	void SetCamera ( int value )
	{
		camera_id = value;
	}

	void SetResolutionOverride ( bool value )
	{
		res_override = value;
	}

	void SetFailsafeSettings()
	{
		*this = SETTINGS();
		depthbpp = 16;
		shaders = false;
		texturesize = "medium";
	}

private:
	bool res_override;
	int resolution_x;
	int resolution_y;
	int bpp;
	int depthbpp;
	bool fullscreen;
	bool shaders;
	std::string skin;
	std::string language;
	bool show_fps;
	float mastervolume;
	bool mph; //if false, KPH
	std::string track;
	int antialiasing; //0 or 1 mean off
	int anisotropic; //0 or 1 mean off
	bool trackmap;
	bool show_hud;
	float FOV;
	bool abs;
	bool tcs;
	std::string joytype;
	bool joy200;
	float speed_sensitivity;
	bool joystick_calibrated;
	float view_distance;
	bool autoclutch;
	bool autoshift;
	bool racingline;
	bool mousegrab;
	bool recordreplay;
	int selected_replay;
	std::string texturesize;
	float button_ramp;
	std::string ff_device;
	float ff_gain;
	bool ff_invert;
	bool trackreverse;
	bool trackdynamic;
	bool batch_geometry;
	bool shadows;
	int shadow_distance;
	int shadow_quality;
	int reflections;
	bool input_graph;
	int lighting;
	bool bloom;
	bool normalmaps;
	std::string player;
	std::string opponent;
	std::string player_paint;
	std::string opponent_paint;
	std::string opponent_type;
	std::vector<float> player_color;
	std::vector<float> opponent_color;
	int camera_id;
	float camera_bounce;
	int number_of_laps;
	float contrast;
	bool hgateshifter;
	float ai_difficulty;
	bool vehicle_damage;
};

#endif
