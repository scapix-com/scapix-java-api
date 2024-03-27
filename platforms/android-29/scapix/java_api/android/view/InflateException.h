// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/RuntimeException.h>

#ifndef SCAPIX_JAVA_API_ANDROID_VIEW_INFLATEEXCEPTION_FWD
#define SCAPIX_JAVA_API_ANDROID_VIEW_INFLATEEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::view { class InflateException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::view::InflateException>
{
	static constexpr fixed_string class_name = "android/view/InflateException";
	using base_classes = std::tuple<scapix::java_api::java::lang::RuntimeException>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_INFLATEEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_VIEW_INFLATEEXCEPTION)
#define SCAPIX_JAVA_API_ANDROID_VIEW_INFLATEEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/Throwable.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::view::InflateException : public jni::object_base<"android/view/InflateException",
	java::lang::RuntimeException>
{
public:

	static jni::ref<android::view::InflateException> new_object() { return base_::new_object(); }
	static jni::ref<android::view::InflateException> new_object(jni::ref<java::lang::String> detailMessage, jni::ref<java::lang::Throwable> throwable) { return base_::new_object(detailMessage, throwable); }
	static jni::ref<android::view::InflateException> new_object(jni::ref<java::lang::String> detailMessage) { return base_::new_object(detailMessage); }
	static jni::ref<android::view::InflateException> new_object(jni::ref<java::lang::Throwable> throwable) { return base_::new_object(throwable); }

protected:

	InflateException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_INFLATEEXCEPTION
