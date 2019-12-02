# The CORRIMUS log contains the RAWIMU data corrected for gravity, the earth’s rotation and estimated sensor errors.
# The values in this log are incremental values, accumulated over the logging interval of CORRIMUS.

# Parsed corrected IMU measurements from Novatel OEM7 receiver
Header header

NovatelMessageHeader novatel_msg_header

# Count of the number of IMU Samples used in each log output accumulation
uint32 imu_data_count

# All measurements in this message are instantaneous values;
# Rotation rate units are right-handed (radians/sample)
float64 pitch_rate
float64 roll_rate
float64 yaw_rate

# Accelerations are in (m/s/sample)
float64 lateral_acceleration
float64 longitudinal_acceleration
float64 vertical_acceleration
