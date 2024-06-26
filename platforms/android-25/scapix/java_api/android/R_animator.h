// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_R_ANIMATOR_FWD
#define SCAPIX_JAVA_API_ANDROID_R_ANIMATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android { class R_animator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::R_animator>
{
	static constexpr fixed_string class_name = "android/R$animator";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_R_ANIMATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_R_ANIMATOR)
#define SCAPIX_JAVA_API_ANDROID_R_ANIMATOR

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::R_animator : public jni::object_base<"android/R$animator",
	java::lang::Object>
{
public:

	static jint fade_in() { return get_static_field<"fade_in", jint>(); }
	static jint fade_out() { return get_static_field<"fade_out", jint>(); }

	static jni::ref<android::R_animator> new_object() { return base_::new_object(); }

protected:

	R_animator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_R_ANIMATOR
