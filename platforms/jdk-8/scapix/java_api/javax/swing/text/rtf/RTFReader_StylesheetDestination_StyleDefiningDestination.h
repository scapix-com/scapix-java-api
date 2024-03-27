// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/text/rtf/RTFReader_AttributeTrackingDestination.h>
#include <scapix/java_api/javax/swing/text/rtf/RTFReader_Destination.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_TEXT_RTF_RTFREADER_STYLESHEETDESTINATION_STYLEDEFININGDESTINATION_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_RTF_RTFREADER_STYLESHEETDESTINATION_STYLEDEFININGDESTINATION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::text::rtf { class RTFReader_StylesheetDestination_StyleDefiningDestination; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::text::rtf::RTFReader_StylesheetDestination_StyleDefiningDestination>
{
	static constexpr fixed_string class_name = "javax/swing/text/rtf/RTFReader$StylesheetDestination$StyleDefiningDestination";
	using base_classes = std::tuple<scapix::java_api::javax::swing::text::rtf::RTFReader_AttributeTrackingDestination, scapix::java_api::javax::swing::text::rtf::RTFReader_Destination>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_RTF_RTFREADER_STYLESHEETDESTINATION_STYLEDEFININGDESTINATION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_TEXT_RTF_RTFREADER_STYLESHEETDESTINATION_STYLEDEFININGDESTINATION)
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_RTF_RTFREADER_STYLESHEETDESTINATION_STYLEDEFININGDESTINATION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/swing/text/Style.h>
#include <scapix/java_api/javax/swing/text/rtf/RTFReader_StylesheetDestination.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::swing::text::rtf::RTFReader_StylesheetDestination_StyleDefiningDestination : public jni::object_base<"javax/swing/text/rtf/RTFReader$StylesheetDestination$StyleDefiningDestination",
	javax::swing::text::rtf::RTFReader_AttributeTrackingDestination,
	javax::swing::text::rtf::RTFReader_Destination>
{
public:

	jni::ref<java::lang::String> styleName() { return get_field<"styleName", jni::ref<java::lang::String>>(); }
	void styleName(jni::ref<java::lang::String> v) { set_field<"styleName", jni::ref<java::lang::String>>(v); }
	jint number() { return get_field<"number", jint>(); }
	void number(jint v) { set_field<"number", jint>(v); }

	static jni::ref<javax::swing::text::rtf::RTFReader_StylesheetDestination_StyleDefiningDestination> new_object(jni::ref<javax::swing::text::rtf::RTFReader_StylesheetDestination> p1) { return base_::new_object(p1); }
	void handleText(jni::ref<java::lang::String> p1) { return call_method<"handleText", void>(p1); }
	void close() { return call_method<"close", void>(); }
	jboolean handleKeyword(jni::ref<java::lang::String> p1) { return call_method<"handleKeyword", jboolean>(p1); }
	jboolean handleKeyword(jni::ref<java::lang::String> p1, jint p2) { return call_method<"handleKeyword", jboolean>(p1, p2); }
	jni::ref<javax::swing::text::Style> realize() { return call_method<"realize", jni::ref<javax::swing::text::Style>>(); }

protected:

	RTFReader_StylesheetDestination_StyleDefiningDestination(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_RTF_RTFREADER_STYLESHEETDESTINATION_STYLEDEFININGDESTINATION
