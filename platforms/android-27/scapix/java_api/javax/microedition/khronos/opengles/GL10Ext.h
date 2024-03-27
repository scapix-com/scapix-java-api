// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/javax/microedition/khronos/opengles/GL.h>

#ifndef SCAPIX_JAVA_API_JAVAX_MICROEDITION_KHRONOS_OPENGLES_GL10EXT_FWD
#define SCAPIX_JAVA_API_JAVAX_MICROEDITION_KHRONOS_OPENGLES_GL10EXT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::microedition::khronos::opengles { class GL10Ext; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::microedition::khronos::opengles::GL10Ext>
{
	static constexpr fixed_string class_name = "javax/microedition/khronos/opengles/GL10Ext";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::javax::microedition::khronos::opengles::GL>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_MICROEDITION_KHRONOS_OPENGLES_GL10EXT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_MICROEDITION_KHRONOS_OPENGLES_GL10EXT)
#define SCAPIX_JAVA_API_JAVAX_MICROEDITION_KHRONOS_OPENGLES_GL10EXT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/nio/IntBuffer.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::microedition::khronos::opengles::GL10Ext : public jni::object_base<"javax/microedition/khronos/opengles/GL10Ext",
	java::lang::Object,
	javax::microedition::khronos::opengles::GL>
{
public:

	jint glQueryMatrixxOES(jni::ref<jni::array<jint>> p1, jint p2, jni::ref<jni::array<jint>> p3, jint p4) { return call_method<"glQueryMatrixxOES", jint>(p1, p2, p3, p4); }
	jint glQueryMatrixxOES(jni::ref<java::nio::IntBuffer> p1, jni::ref<java::nio::IntBuffer> p2) { return call_method<"glQueryMatrixxOES", jint>(p1, p2); }

protected:

	GL10Ext(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_MICROEDITION_KHRONOS_OPENGLES_GL10EXT
