// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_AWT_KEYBOARDFOCUSMANAGER_LIGHTWEIGHTFOCUSREQUEST_FWD
#define SCAPIX_JAVA_API_JAVA_AWT_KEYBOARDFOCUSMANAGER_LIGHTWEIGHTFOCUSREQUEST_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::awt { class KeyboardFocusManager_LightweightFocusRequest; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::awt::KeyboardFocusManager_LightweightFocusRequest>
{
	static constexpr fixed_string class_name = "java/awt/KeyboardFocusManager$LightweightFocusRequest";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_KEYBOARDFOCUSMANAGER_LIGHTWEIGHTFOCUSREQUEST_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_AWT_KEYBOARDFOCUSMANAGER_LIGHTWEIGHTFOCUSREQUEST)
#define SCAPIX_JAVA_API_JAVA_AWT_KEYBOARDFOCUSMANAGER_LIGHTWEIGHTFOCUSREQUEST

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::awt::KeyboardFocusManager_LightweightFocusRequest : public jni::object_base<"java/awt/KeyboardFocusManager$LightweightFocusRequest",
	java::lang::Object>
{
public:

	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	KeyboardFocusManager_LightweightFocusRequest(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_KEYBOARDFOCUSMANAGER_LIGHTWEIGHTFOCUSREQUEST
