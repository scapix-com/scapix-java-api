// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/util/AndroidRuntimeException.h>

#ifndef SCAPIX_JAVA_API_ANDROID_APP_FRAGMENT_INSTANTIATIONEXCEPTION_FWD
#define SCAPIX_JAVA_API_ANDROID_APP_FRAGMENT_INSTANTIATIONEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::app { class Fragment_InstantiationException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::app::Fragment_InstantiationException>
{
	static constexpr fixed_string class_name = "android/app/Fragment$InstantiationException";
	using base_classes = std::tuple<scapix::java_api::android::util::AndroidRuntimeException>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_FRAGMENT_INSTANTIATIONEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_APP_FRAGMENT_INSTANTIATIONEXCEPTION)
#define SCAPIX_JAVA_API_ANDROID_APP_FRAGMENT_INSTANTIATIONEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Exception.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::app::Fragment_InstantiationException : public jni::object_base<"android/app/Fragment$InstantiationException",
	android::util::AndroidRuntimeException>
{
public:

	static jni::ref<android::app::Fragment_InstantiationException> new_object(jni::ref<java::lang::String> msg, jni::ref<java::lang::Exception> cause) { return base_::new_object(msg, cause); }

protected:

	Fragment_InstantiationException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_FRAGMENT_INSTANTIATIONEXCEPTION
