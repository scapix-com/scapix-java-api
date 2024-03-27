// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/renderscript/ScriptIntrinsic.h>

#ifndef SCAPIX_JAVA_API_ANDROID_RENDERSCRIPT_SCRIPTINTRINSICLUT_FWD
#define SCAPIX_JAVA_API_ANDROID_RENDERSCRIPT_SCRIPTINTRINSICLUT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::renderscript { class ScriptIntrinsicLUT; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::renderscript::ScriptIntrinsicLUT>
{
	static constexpr fixed_string class_name = "android/renderscript/ScriptIntrinsicLUT";
	using base_classes = std::tuple<scapix::java_api::android::renderscript::ScriptIntrinsic>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_RENDERSCRIPT_SCRIPTINTRINSICLUT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_RENDERSCRIPT_SCRIPTINTRINSICLUT)
#define SCAPIX_JAVA_API_ANDROID_RENDERSCRIPT_SCRIPTINTRINSICLUT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/renderscript/Allocation.h>
#include <scapix/java_api/android/renderscript/Element.h>
#include <scapix/java_api/android/renderscript/RenderScript.h>
#include <scapix/java_api/android/renderscript/Script_KernelID.h>
#include <scapix/java_api/android/renderscript/Script_LaunchOptions.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::renderscript::ScriptIntrinsicLUT : public jni::object_base<"android/renderscript/ScriptIntrinsicLUT",
	android::renderscript::ScriptIntrinsic>
{
public:

	static jni::ref<android::renderscript::ScriptIntrinsicLUT> create(jni::ref<android::renderscript::RenderScript> rs, jni::ref<android::renderscript::Element> e) { return call_static_method<"create", jni::ref<android::renderscript::ScriptIntrinsicLUT>>(rs, e); }
	void setRed(jint index, jint value) { return call_method<"setRed", void>(index, value); }
	void setGreen(jint index, jint value) { return call_method<"setGreen", void>(index, value); }
	void setBlue(jint index, jint value) { return call_method<"setBlue", void>(index, value); }
	void setAlpha(jint index, jint value) { return call_method<"setAlpha", void>(index, value); }
	void forEach(jni::ref<android::renderscript::Allocation> ain, jni::ref<android::renderscript::Allocation> aout) { return call_method<"forEach", void>(ain, aout); }
	void forEach(jni::ref<android::renderscript::Allocation> ain, jni::ref<android::renderscript::Allocation> aout, jni::ref<android::renderscript::Script_LaunchOptions> opt) { return call_method<"forEach", void>(ain, aout, opt); }
	jni::ref<android::renderscript::Script_KernelID> getKernelID() { return call_method<"getKernelID", jni::ref<android::renderscript::Script_KernelID>>(); }

protected:

	ScriptIntrinsicLUT(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_RENDERSCRIPT_SCRIPTINTRINSICLUT