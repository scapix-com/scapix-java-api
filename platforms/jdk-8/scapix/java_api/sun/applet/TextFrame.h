// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/awt/Frame.h>

#ifndef SCAPIX_JAVA_API_SUN_APPLET_TEXTFRAME_FWD
#define SCAPIX_JAVA_API_SUN_APPLET_TEXTFRAME_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::applet { class TextFrame; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::applet::TextFrame>
{
	static constexpr fixed_string class_name = "sun/applet/TextFrame";
	using base_classes = std::tuple<scapix::java_api::java::awt::Frame>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_APPLET_TEXTFRAME_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_APPLET_TEXTFRAME)
#define SCAPIX_JAVA_API_SUN_APPLET_TEXTFRAME

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::applet::TextFrame : public jni::object_base<"sun/applet/TextFrame",
	java::awt::Frame>
{
public:


protected:

	TextFrame(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_APPLET_TEXTFRAME
