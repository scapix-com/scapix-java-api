// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_AWT_MOUSEINFO_FWD
#define SCAPIX_JAVA_API_JAVA_AWT_MOUSEINFO_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::awt { class MouseInfo; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::awt::MouseInfo>
{
	static constexpr fixed_string class_name = "java/awt/MouseInfo";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_MOUSEINFO_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_AWT_MOUSEINFO)
#define SCAPIX_JAVA_API_JAVA_AWT_MOUSEINFO

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/PointerInfo.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::awt::MouseInfo : public jni::object_base<"java/awt/MouseInfo",
	java::lang::Object>
{
public:

	static jni::ref<java::awt::PointerInfo> getPointerInfo() { return call_static_method<"getPointerInfo", jni::ref<java::awt::PointerInfo>>(); }
	static jint getNumberOfButtons() { return call_static_method<"getNumberOfButtons", jint>(); }

protected:

	MouseInfo(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_MOUSEINFO