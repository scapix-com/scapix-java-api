// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_OPENGL_GLES10EXT_FWD
#define SCAPIX_JAVA_API_ANDROID_OPENGL_GLES10EXT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::opengl { class GLES10Ext; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::opengl::GLES10Ext>
{
	static constexpr fixed_string class_name = "android/opengl/GLES10Ext";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_OPENGL_GLES10EXT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_OPENGL_GLES10EXT)
#define SCAPIX_JAVA_API_ANDROID_OPENGL_GLES10EXT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/nio/IntBuffer.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::opengl::GLES10Ext : public jni::object_base<"android/opengl/GLES10Ext",
	java::lang::Object>
{
public:

	static jni::ref<android::opengl::GLES10Ext> new_object() { return base_::new_object(); }
	static jint glQueryMatrixxOES(jni::ref<jni::array<jint>> p1, jint p2, jni::ref<jni::array<jint>> p3, jint p4) { return call_static_method<"glQueryMatrixxOES", jint>(p1, p2, p3, p4); }
	static jint glQueryMatrixxOES(jni::ref<java::nio::IntBuffer> p1, jni::ref<java::nio::IntBuffer> p2) { return call_static_method<"glQueryMatrixxOES", jint>(p1, p2); }

protected:

	GLES10Ext(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_OPENGL_GLES10EXT
