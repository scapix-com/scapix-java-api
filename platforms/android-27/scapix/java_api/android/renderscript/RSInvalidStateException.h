// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/renderscript/RSRuntimeException.h>

#ifndef SCAPIX_JAVA_API_ANDROID_RENDERSCRIPT_RSINVALIDSTATEEXCEPTION_FWD
#define SCAPIX_JAVA_API_ANDROID_RENDERSCRIPT_RSINVALIDSTATEEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::renderscript { class RSInvalidStateException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::renderscript::RSInvalidStateException>
{
	static constexpr fixed_string class_name = "android/renderscript/RSInvalidStateException";
	using base_classes = std::tuple<scapix::java_api::android::renderscript::RSRuntimeException>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_RENDERSCRIPT_RSINVALIDSTATEEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_RENDERSCRIPT_RSINVALIDSTATEEXCEPTION)
#define SCAPIX_JAVA_API_ANDROID_RENDERSCRIPT_RSINVALIDSTATEEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::renderscript::RSInvalidStateException : public jni::object_base<"android/renderscript/RSInvalidStateException",
	android::renderscript::RSRuntimeException>
{
public:

	static jni::ref<android::renderscript::RSInvalidStateException> new_object(jni::ref<java::lang::String> string) { return base_::new_object(string); }

protected:

	RSInvalidStateException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_RENDERSCRIPT_RSINVALIDSTATEEXCEPTION