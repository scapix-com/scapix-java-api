// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_UTIL_SIZE_FWD
#define SCAPIX_JAVA_API_ANDROID_UTIL_SIZE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::util { class Size; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::util::Size>
{
	static constexpr fixed_string class_name = "android/util/Size";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_UTIL_SIZE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_UTIL_SIZE)
#define SCAPIX_JAVA_API_ANDROID_UTIL_SIZE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::util::Size : public jni::object_base<"android/util/Size",
	java::lang::Object>
{
public:

	static jni::ref<android::util::Size> new_object(jint width, jint height) { return base_::new_object(width, height); }
	jint getWidth() { return call_method<"getWidth", jint>(); }
	jint getHeight() { return call_method<"getHeight", jint>(); }
	jboolean equals(jni::ref<java::lang::Object> obj) { return call_method<"equals", jboolean>(obj); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	static jni::ref<android::util::Size> parseSize(jni::ref<java::lang::String> string) { return call_static_method<"parseSize", jni::ref<android::util::Size>>(string); }
	jint hashCode() { return call_method<"hashCode", jint>(); }

protected:

	Size(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_UTIL_SIZE
