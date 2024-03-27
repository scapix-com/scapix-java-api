// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/renderscript/ScriptIntrinsic.h>

#ifndef SCAPIX_JAVA_API_ANDROID_RENDERSCRIPT_SCRIPTINTRINSICCOLORMATRIX_FWD
#define SCAPIX_JAVA_API_ANDROID_RENDERSCRIPT_SCRIPTINTRINSICCOLORMATRIX_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::renderscript { class ScriptIntrinsicColorMatrix; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::renderscript::ScriptIntrinsicColorMatrix>
{
	static constexpr fixed_string class_name = "android/renderscript/ScriptIntrinsicColorMatrix";
	using base_classes = std::tuple<scapix::java_api::android::renderscript::ScriptIntrinsic>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_RENDERSCRIPT_SCRIPTINTRINSICCOLORMATRIX_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_RENDERSCRIPT_SCRIPTINTRINSICCOLORMATRIX)
#define SCAPIX_JAVA_API_ANDROID_RENDERSCRIPT_SCRIPTINTRINSICCOLORMATRIX

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/renderscript/Allocation.h>
#include <scapix/java_api/android/renderscript/Element.h>
#include <scapix/java_api/android/renderscript/Float4.h>
#include <scapix/java_api/android/renderscript/Matrix3f.h>
#include <scapix/java_api/android/renderscript/Matrix4f.h>
#include <scapix/java_api/android/renderscript/RenderScript.h>
#include <scapix/java_api/android/renderscript/Script_KernelID.h>
#include <scapix/java_api/android/renderscript/Script_LaunchOptions.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::renderscript::ScriptIntrinsicColorMatrix : public jni::object_base<"android/renderscript/ScriptIntrinsicColorMatrix",
	android::renderscript::ScriptIntrinsic>
{
public:

	static jni::ref<android::renderscript::ScriptIntrinsicColorMatrix> create(jni::ref<android::renderscript::RenderScript> rs, jni::ref<android::renderscript::Element> e) { return call_static_method<"create", jni::ref<android::renderscript::ScriptIntrinsicColorMatrix>>(rs, e); }
	static jni::ref<android::renderscript::ScriptIntrinsicColorMatrix> create(jni::ref<android::renderscript::RenderScript> rs) { return call_static_method<"create", jni::ref<android::renderscript::ScriptIntrinsicColorMatrix>>(rs); }
	void setColorMatrix(jni::ref<android::renderscript::Matrix4f> m) { return call_method<"setColorMatrix", void>(m); }
	void setColorMatrix(jni::ref<android::renderscript::Matrix3f> m) { return call_method<"setColorMatrix", void>(m); }
	void setAdd(jni::ref<android::renderscript::Float4> f) { return call_method<"setAdd", void>(f); }
	void setAdd(jfloat r, jfloat g, jfloat b, jfloat a) { return call_method<"setAdd", void>(r, g, b, a); }
	void setGreyscale() { return call_method<"setGreyscale", void>(); }
	void setYUVtoRGB() { return call_method<"setYUVtoRGB", void>(); }
	void setRGBtoYUV() { return call_method<"setRGBtoYUV", void>(); }
	void forEach(jni::ref<android::renderscript::Allocation> ain, jni::ref<android::renderscript::Allocation> aout) { return call_method<"forEach", void>(ain, aout); }
	void forEach(jni::ref<android::renderscript::Allocation> ain, jni::ref<android::renderscript::Allocation> aout, jni::ref<android::renderscript::Script_LaunchOptions> opt) { return call_method<"forEach", void>(ain, aout, opt); }
	jni::ref<android::renderscript::Script_KernelID> getKernelID() { return call_method<"getKernelID", jni::ref<android::renderscript::Script_KernelID>>(); }

protected:

	ScriptIntrinsicColorMatrix(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_RENDERSCRIPT_SCRIPTINTRINSICCOLORMATRIX