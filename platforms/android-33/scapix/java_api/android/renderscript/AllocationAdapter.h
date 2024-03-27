// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/renderscript/Allocation.h>

#ifndef SCAPIX_JAVA_API_ANDROID_RENDERSCRIPT_ALLOCATIONADAPTER_FWD
#define SCAPIX_JAVA_API_ANDROID_RENDERSCRIPT_ALLOCATIONADAPTER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::renderscript { class AllocationAdapter; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::renderscript::AllocationAdapter>
{
	static constexpr fixed_string class_name = "android/renderscript/AllocationAdapter";
	using base_classes = std::tuple<scapix::java_api::android::renderscript::Allocation>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_RENDERSCRIPT_ALLOCATIONADAPTER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_RENDERSCRIPT_ALLOCATIONADAPTER)
#define SCAPIX_JAVA_API_ANDROID_RENDERSCRIPT_ALLOCATIONADAPTER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/renderscript/RenderScript.h>
#include <scapix/java_api/android/renderscript/Type.h>
#include <scapix/java_api/android/renderscript/Type_CubemapFace.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::renderscript::AllocationAdapter : public jni::object_base<"android/renderscript/AllocationAdapter",
	android::renderscript::Allocation>
{
public:

	void setLOD(jint lod) { return call_method<"setLOD", void>(lod); }
	void setFace(jni::ref<android::renderscript::Type_CubemapFace> cf) { return call_method<"setFace", void>(cf); }
	void setX(jint x) { return call_method<"setX", void>(x); }
	void setY(jint y) { return call_method<"setY", void>(y); }
	void setZ(jint z) { return call_method<"setZ", void>(z); }
	static jni::ref<android::renderscript::AllocationAdapter> create1D(jni::ref<android::renderscript::RenderScript> rs, jni::ref<android::renderscript::Allocation> a) { return call_static_method<"create1D", jni::ref<android::renderscript::AllocationAdapter>>(rs, a); }
	static jni::ref<android::renderscript::AllocationAdapter> create2D(jni::ref<android::renderscript::RenderScript> rs, jni::ref<android::renderscript::Allocation> a) { return call_static_method<"create2D", jni::ref<android::renderscript::AllocationAdapter>>(rs, a); }
	static jni::ref<android::renderscript::AllocationAdapter> createTyped(jni::ref<android::renderscript::RenderScript> rs, jni::ref<android::renderscript::Allocation> a, jni::ref<android::renderscript::Type> t) { return call_static_method<"createTyped", jni::ref<android::renderscript::AllocationAdapter>>(rs, a, t); }
	void resize(jint dimX) { return call_method<"resize", void>(dimX); }

protected:

	AllocationAdapter(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_RENDERSCRIPT_ALLOCATIONADAPTER
