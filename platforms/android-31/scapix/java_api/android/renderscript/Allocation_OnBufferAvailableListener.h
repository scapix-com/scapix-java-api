// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_RENDERSCRIPT_ALLOCATION_ONBUFFERAVAILABLELISTENER_FWD
#define SCAPIX_JAVA_API_ANDROID_RENDERSCRIPT_ALLOCATION_ONBUFFERAVAILABLELISTENER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::renderscript { class Allocation_OnBufferAvailableListener; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::renderscript::Allocation_OnBufferAvailableListener>
{
	static constexpr fixed_string class_name = "android/renderscript/Allocation$OnBufferAvailableListener";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_RENDERSCRIPT_ALLOCATION_ONBUFFERAVAILABLELISTENER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_RENDERSCRIPT_ALLOCATION_ONBUFFERAVAILABLELISTENER)
#define SCAPIX_JAVA_API_ANDROID_RENDERSCRIPT_ALLOCATION_ONBUFFERAVAILABLELISTENER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/renderscript/Allocation.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::renderscript::Allocation_OnBufferAvailableListener : public jni::object_base<"android/renderscript/Allocation$OnBufferAvailableListener",
	java::lang::Object>
{
public:

	void onBufferAvailable(jni::ref<android::renderscript::Allocation> p1) { return call_method<"onBufferAvailable", void>(p1); }

protected:

	Allocation_OnBufferAvailableListener(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_RENDERSCRIPT_ALLOCATION_ONBUFFERAVAILABLELISTENER
