# Novatel Short Message Header

# Message length, not including header or CRC
uint8 message_length

# Message ID number
uint16 message_id

# GNSS week number
uint16 week_number

# Milliseconds from the beginning of the GNSS week
int32 milliseconds

# (ASCII only) The name of the log
string message_name

# (ASCII only) Seconds from the beginning of the GNSS week
int32 seconds
