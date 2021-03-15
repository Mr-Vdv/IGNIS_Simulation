// MESSAGE HIL_EXTENDED support class

#pragma once

namespace mavlink {
namespace ASLUAV {
namespace msg {

/**
 * @brief HIL_EXTENDED message
 *
 * Generic message to send additional variables from HIL simulation to autopilot
 */
struct HIL_EXTENDED : mavlink::Message {
    static constexpr msgid_t MSG_ID = 216;
    static constexpr size_t LENGTH = 40;
    static constexpr size_t MIN_LENGTH = 40;
    static constexpr uint8_t CRC_EXTRA = 19;
    static constexpr auto NAME = "HIL_EXTENDED";


    uint64_t timestamp; /*< [us] Timestamp */
    float var1; /*<  Variable 1 */
    float var2; /*<  Variable 2 */
    float var3; /*<  Variable 3 */
    float var4; /*<  Variable 4 */
    float var5; /*<  Variable 5 */
    float var6; /*<  Variable 6 */
    float var7; /*<  Variable 7 */
    float var8; /*<  Variable 8 */


    inline std::string get_name(void) const override
    {
            return NAME;
    }

    inline Info get_message_info(void) const override
    {
            return { MSG_ID, LENGTH, MIN_LENGTH, CRC_EXTRA };
    }

    inline std::string to_yaml(void) const override
    {
        std::stringstream ss;

        ss << NAME << ":" << std::endl;
        ss << "  timestamp: " << timestamp << std::endl;
        ss << "  var1: " << var1 << std::endl;
        ss << "  var2: " << var2 << std::endl;
        ss << "  var3: " << var3 << std::endl;
        ss << "  var4: " << var4 << std::endl;
        ss << "  var5: " << var5 << std::endl;
        ss << "  var6: " << var6 << std::endl;
        ss << "  var7: " << var7 << std::endl;
        ss << "  var8: " << var8 << std::endl;

        return ss.str();
    }

    inline void serialize(mavlink::MsgMap &map) const override
    {
        map.reset(MSG_ID, LENGTH);

        map << timestamp;                     // offset: 0
        map << var1;                          // offset: 8
        map << var2;                          // offset: 12
        map << var3;                          // offset: 16
        map << var4;                          // offset: 20
        map << var5;                          // offset: 24
        map << var6;                          // offset: 28
        map << var7;                          // offset: 32
        map << var8;                          // offset: 36
    }

    inline void deserialize(mavlink::MsgMap &map) override
    {
        map >> timestamp;                     // offset: 0
        map >> var1;                          // offset: 8
        map >> var2;                          // offset: 12
        map >> var3;                          // offset: 16
        map >> var4;                          // offset: 20
        map >> var5;                          // offset: 24
        map >> var6;                          // offset: 28
        map >> var7;                          // offset: 32
        map >> var8;                          // offset: 36
    }
};

} // namespace msg
} // namespace ASLUAV
} // namespace mavlink
