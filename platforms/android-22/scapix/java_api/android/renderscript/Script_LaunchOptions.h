// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_RENDERSCRIPT_SCRIPT_LAUNCHOPTIONS_FWD
#define SCAPIX_JAVA_API_ANDROID_RENDERSCRIPT_SCRIPT_LAUNCHOPTIONS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::renderscript { class Script_LaunchOptions; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::renderscript::Script_LaunchOptions>
{
	static constexpr fixed_string class_name = "android/renderscript/Script$LaunchOptions";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_RENDERSCRIPT_SCRIPT_LAUNCHOPTIONS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_RENDERSCRIPT_SCRIPT_LAUNCHOPTIONS)
#define SCAPIX_JAVA_API_ANDROID_RENDERSCRIPT_SCRIPT_LAUNCHOPTIONS

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::renderscript::Script_LaunchOptions : public jni::object_base<"android/renderscript/Script$LaunchOptions",
	java::lang::Object>
{
public:

	static jni::ref<android::renderscript::Script_LaunchOptions> new_object() { return base_::new_object(); }
	jni::ref<android::renderscript::Script_LaunchOptions> setX(jint xstartArg, jint xendArg) { return call_method<"setX", jni::ref<android::renderscript::Script_LaunchOptions>>(xstartArg, xendArg); }
	jni::ref<android::renderscript::Script_LaunchOptions> setY(jint ystartArg, jint yendArg) { return call_method<"setY", jni::ref<android::renderscript::Script_LaunchOptions>>(ystartArg, yendArg); }
	jni::ref<android::renderscript::Script_LaunchOptions> setZ(jint zstartArg, jint zendArg) { return call_method<"setZ", jni::ref<android::renderscript::Script_LaunchOptions>>(zstartArg, zendArg); }
	jint getXStart() { return call_method<"getXStart", jint>(); }
	jint getXEnd() { return call_method<"getXEnd", jint>(); }
	jint getYStart() { return call_method<"getYStart", jint>(); }
	jint getYEnd() { return call_method<"getYEnd", jint>(); }
	jint getZStart() { return call_method<"getZStart", jint>(); }
	jint getZEnd() { return call_method<"getZEnd", jint>(); }

protected:

	Script_LaunchOptions(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_RENDERSCRIPT_SCRIPT_LAUNCHOPTIONS
