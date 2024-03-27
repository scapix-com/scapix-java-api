// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/awt/Frame.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_POPUP_DEFAULTFRAME_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_POPUP_DEFAULTFRAME_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing { class Popup_DefaultFrame; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::Popup_DefaultFrame>
{
	static constexpr fixed_string class_name = "javax/swing/Popup$DefaultFrame";
	using base_classes = std::tuple<scapix::java_api::java::awt::Frame>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_POPUP_DEFAULTFRAME_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_POPUP_DEFAULTFRAME)
#define SCAPIX_JAVA_API_JAVAX_SWING_POPUP_DEFAULTFRAME

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::swing::Popup_DefaultFrame : public jni::object_base<"javax/swing/Popup$DefaultFrame",
	java::awt::Frame>
{
public:


protected:

	Popup_DefaultFrame(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_POPUP_DEFAULTFRAME