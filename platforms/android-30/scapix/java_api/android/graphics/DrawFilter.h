// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_GRAPHICS_DRAWFILTER_FWD
#define SCAPIX_JAVA_API_ANDROID_GRAPHICS_DRAWFILTER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::graphics { class DrawFilter; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::graphics::DrawFilter>
{
	static constexpr fixed_string class_name = "android/graphics/DrawFilter";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_GRAPHICS_DRAWFILTER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_GRAPHICS_DRAWFILTER)
#define SCAPIX_JAVA_API_ANDROID_GRAPHICS_DRAWFILTER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::graphics::DrawFilter : public jni::object_base<"android/graphics/DrawFilter",
	java::lang::Object>
{
public:

	static jni::ref<android::graphics::DrawFilter> new_object() { return base_::new_object(); }

protected:

	DrawFilter(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_GRAPHICS_DRAWFILTER
