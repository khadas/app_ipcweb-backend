int rk_isp_set(const char *json);
int rk_video_set(const char *json);
int rk_audio_set(const char *json);
int rk_isp_get_contrast(int cam_id, int *value);
int rk_isp_set_contrast(int cam_id, int value);
int rk_isp_get_brightness(int cam_id, int *value);
int rk_isp_set_brightness(int cam_id, int value);
int rk_isp_get_saturation(int cam_id, int *value);
int rk_isp_set_saturation(int cam_id, int value);
int rk_isp_get_sharpness(int cam_id, int *value);
int rk_isp_set_sharpness(int cam_id, int value);