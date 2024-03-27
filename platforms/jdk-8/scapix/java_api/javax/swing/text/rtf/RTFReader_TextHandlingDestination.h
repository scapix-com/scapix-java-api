// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/text/rtf/RTFReader_AttributeTrackingDestination.h>
#include <scapix/java_api/javax/swing/text/rtf/RTFReader_Destination.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_TEXT_RTF_RTFREADER_TEXTHANDLINGDESTINATION_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_RTF_RTFREADER_TEXTHANDLINGDESTINATION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::text::rtf { class RTFReader_TextHandlingDestination; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::text::rtf::RTFReader_TextHandlingDestination>
{
	static constexpr fixed_string class_name = "javax/swing/text/rtf/RTFReader$TextHandlingDestination";
	using base_classes = std::tuple<scapix::java_api::javax::swing::text::rtf::RTFReader_AttributeTrackingDestination, scapix::java_api::javax::swing::text::rtf::RTFReader_Destination>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_RTF_RTFREADER_TEXTHANDLINGDESTINATION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_TEXT_RTF_RTFREADER_TEXTHANDLINGDESTINATION)
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_RTF_RTFREADER_TEXTHANDLINGDESTINATION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/swing/text/rtf/RTFReader.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::swing::text::rtf::RTFReader_TextHandlingDestination : public jni::object_base<"javax/swing/text/rtf/RTFReader$TextHandlingDestination",
	javax::swing::text::rtf::RTFReader_AttributeTrackingDestination,
	javax::swing::text::rtf::RTFReader_Destination>
{
public:

	static jni::ref<javax::swing::text::rtf::RTFReader_TextHandlingDestination> new_object(jni::ref<javax::swing::text::rtf::RTFReader> p1) { return base_::new_object(p1); }
	void handleText(jni::ref<java::lang::String> p1) { return call_method<"handleText", void>(p1); }
	void close() { return call_method<"close", void>(); }
	jboolean handleKeyword(jni::ref<java::lang::String> p1) { return call_method<"handleKeyword", jboolean>(p1); }

protected:

	RTFReader_TextHandlingDestination(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_RTF_RTFREADER_TEXTHANDLINGDESTINATION
