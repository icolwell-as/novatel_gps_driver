// *****************************************************************************
//
// Copyright (c) 2017, Southwest Research Institute® (SwRI®)
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are met:
//     * Redistributions of source code must retain the above copyright
//       notice, this list of conditions and the following disclaimer.
//     * Redistributions in binary form must reproduce the above copyright
//       notice, this list of conditions and the following disclaimer in the
//       documentation and/or other materials provided with the distribution.
//     * Neither the name of Southwest Research Institute® (SwRI®) nor the
//       names of its contributors may be used to endorse or promote products
//       derived from this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
// AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
// IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
// ARE DISCLAIMED. IN NO EVENT SHALL SOUTHWEST RESEARCH INSTITUTE BE LIABLE FOR ANY
// DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
// (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
// LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
// ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
// SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
//
// *****************************************************************************

#include <novatel_gps_driver/parsers/shortheader.h>

#include <ros/ros.h>

uint32_t novatel_gps_driver::ShortHeaderParser::GetMessageId() const
{
  return 0;
}

const std::string novatel_gps_driver::ShortHeaderParser::GetMessageName() const
{
  return "SHORTHEADER";
}

novatel_gps_msgs::NovatelShortMessageHeader novatel_gps_driver::ShortHeaderParser::ParseShortBinary(
    const novatel_gps_driver::ShortBinaryMessage& bin_msg) noexcept(false)
{
  novatel_gps_msgs::NovatelShortMessageHeader msg;
  msg.message_length = bin_msg.header_.message_length_;
  msg.message_id = bin_msg.header_.message_id_;
  msg.week_number = bin_msg.header_.week_number_;
  msg.milliseconds = bin_msg.header_.milliseconds_;

  return msg;
}

novatel_gps_msgs::NovatelShortMessageHeader novatel_gps_driver::ShortHeaderParser::ParseAscii(
    const novatel_gps_driver::NovatelSentence& sentence) noexcept(false)
{
  // if (sentence.header.size() != NOVATEL_MESSAGE_HEADER_LENGTH)
  // {
  //   std::stringstream error;
  //   error <<"Novatel message header size wrong: expected "
  //         << NOVATEL_MESSAGE_HEADER_LENGTH
  //         << ", got %zu"<< sentence.header.size();
  //   throw ParseException(error.str());
  // }
  //
  // bool valid = true;
  //
  novatel_gps_msgs::NovatelShortMessageHeader msg;
  // msg.message_name = sentence.header[0];
  // msg.port = sentence.header[1];
  // valid = valid && ParseUInt32(sentence.header[2], msg.sequence_num);
  // valid = valid && ParseFloat(sentence.header[3], msg.percent_idle_time);
  // msg.gps_time_status = sentence.header[4];
  // valid = valid && ParseUInt32(sentence.header[5], msg.gps_week_num);
  // valid = valid && ParseDouble(sentence.header[6], msg.gps_seconds);
  //
  // uint32_t receiver_status_code = 0;
  // valid = valid && ParseUInt32(sentence.header[7], receiver_status_code, 16);
  // GetNovatelReceiverStatusMessage(receiver_status_code, msg.receiver_status);
  //
  // valid = valid && ParseUInt32(sentence.header[9], msg.receiver_software_version);
  //
  // if (!valid)
  // {
  //   throw ParseException("Header was invalid.");
  // }
  return msg;
}
