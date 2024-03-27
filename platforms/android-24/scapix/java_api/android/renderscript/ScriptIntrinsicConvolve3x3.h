// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/renderscript/ScriptIntrinsic.h>

#ifndef SCAPIX_JAVA_API_ANDROID_RENDERSCRIPT_SCRIPTINTRINSICCONVOLVE3X3_FWD
#define SCAPIX_JAVA_API_ANDROID_RENDERSCRIPT_SCRIPTINTRINSICCONVOLVE3X3_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::renderscript { class ScriptIntrinsicConvolve3x3; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::renderscript::ScriptIntrinsicConvolve3x3>
{
	static constexpr fixed_string class_name = "android/renderscript/ScriptIntrinsicConvolve3x3";
	using base_classes = std::tuple<scapix::java_api::android::renderscript::ScriptIntrinsic>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_RENDERSCRIPT_SCRIPTINTRINSICCONVOLVE3X3_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_RENDERSCRIPT_SCRIPTINTRINSICCONVOLVE3X3)
#define SCAPIX_JAVA_API_ANDROID_RENDERSCRIPT_SCRIPTINTRINSICCONVOLVE3X3

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/renderscript/Allocation.h>
#include <scapix/java_api/android/renderscript/Element.h>
#include <scapix/java_api/android/renderscript/RenderScript.h>
#include <scapix/java_api/android/renderscript/Script_FieldID.h>
#include <scapix/java_api/android/renderscript/Script_KernelID.h>
#include <scapix/java_api/android/renderscript/Script_LaunchOptions.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::renderscript::ScriptIntrinsicConvolve3x3 : public jni::object_base<"android/renderscript/ScriptIntrinsicConvolve3x3",
	android::renderscript::ScriptIntrinsic>
{
public:

	static jni::ref<android::renderscript::ScriptIntrinsicConvolve3x3> create(jni::ref<android::renderscript::RenderScript> rs, jni::ref<android::renderscript::Element> e) { return call_static_method<"create", jni::ref<android::renderscript::ScriptIntrinsicConvolve3x3>>(rs, e); }
	void setInput(jni::ref<android::renderscript::Allocation> ain) { return call_method<"setInput", void>(ain); }
	void setCoefficients(jni::ref<jni::array<jfloat>> v) { return call_method<"setCoefficients", void>(v); }
	void forEach(jni::ref<android::renderscript::Allocation> aout) { return call_method<"forEach", void>(aout); }
	void forEach(jni::ref<android::renderscript::Allocation> aout, jni::ref<android::renderscript::Script_LaunchOptions> opt) { return call_method<"forEach", void>(aout, opt); }
	jni::ref<android::renderscript::Script_KernelID> getKernelID() { return call_method<"getKernelID", jni::ref<android::renderscript::Script_KernelID>>(); }
	jni::ref<android::renderscript::Script_FieldID> getFieldID_Input() { return call_method<"getFieldID_Input", jni::ref<android::renderscript::Script_FieldID>>(); }

protected:

	ScriptIntrinsicConvolve3x3(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_RENDERSCRIPT_SCRIPTINTRINSICCONVOLVE3X3