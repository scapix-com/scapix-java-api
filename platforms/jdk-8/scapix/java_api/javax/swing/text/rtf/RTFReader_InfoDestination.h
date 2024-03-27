// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/text/rtf/RTFReader_DiscardingDestination.h>
#include <scapix/java_api/javax/swing/text/rtf/RTFReader_Destination.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_TEXT_RTF_RTFREADER_INFODESTINATION_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_RTF_RTFREADER_INFODESTINATION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::text::rtf { class RTFReader_InfoDestination; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::text::rtf::RTFReader_InfoDestination>
{
	static constexpr fixed_string class_name = "javax/swing/text/rtf/RTFReader$InfoDestination";
	using base_classes = std::tuple<scapix::java_api::javax::swing::text::rtf::RTFReader_DiscardingDestination, scapix::java_api::javax::swing::text::rtf::RTFReader_Destination>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_RTF_RTFREADER_INFODESTINATION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_TEXT_RTF_RTFREADER_INFODESTINATION)
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_RTF_RTFREADER_INFODESTINATION

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::swing::text::rtf::RTFReader_InfoDestination : public jni::object_base<"javax/swing/text/rtf/RTFReader$InfoDestination",
	javax::swing::text::rtf::RTFReader_DiscardingDestination,
	javax::swing::text::rtf::RTFReader_Destination>
{
public:


protected:

	RTFReader_InfoDestination(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_RTF_RTFREADER_INFODESTINATION