// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_OPENGL_VISIBILITY_FWD
#define SCAPIX_JAVA_API_ANDROID_OPENGL_VISIBILITY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::opengl { class Visibility; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::opengl::Visibility>
{
	static constexpr fixed_string class_name = "android/opengl/Visibility";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_OPENGL_VISIBILITY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_OPENGL_VISIBILITY)
#define SCAPIX_JAVA_API_ANDROID_OPENGL_VISIBILITY

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::opengl::Visibility : public jni::object_base<"android/opengl/Visibility",
	java::lang::Object>
{
public:

	static jni::ref<android::opengl::Visibility> new_object() { return base_::new_object(); }
	static jint visibilityTest(jni::ref<jni::array<jfloat>> p1, jint p2, jni::ref<jni::array<jfloat>> p3, jint p4, jni::ref<jni::array<jchar>> p5, jint p6, jint p7) { return call_static_method<"visibilityTest", jint>(p1, p2, p3, p4, p5, p6, p7); }
	static jint frustumCullSpheres(jni::ref<jni::array<jfloat>> p1, jint p2, jni::ref<jni::array<jfloat>> p3, jint p4, jint p5, jni::ref<jni::array<jint>> p6, jint p7, jint p8) { return call_static_method<"frustumCullSpheres", jint>(p1, p2, p3, p4, p5, p6, p7, p8); }
	static void computeBoundingSphere(jni::ref<jni::array<jfloat>> p1, jint p2, jint p3, jni::ref<jni::array<jfloat>> p4, jint p5) { return call_static_method<"computeBoundingSphere", void>(p1, p2, p3, p4, p5); }

protected:

	Visibility(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_OPENGL_VISIBILITY
