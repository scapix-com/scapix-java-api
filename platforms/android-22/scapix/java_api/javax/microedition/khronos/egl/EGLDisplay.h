// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_MICROEDITION_KHRONOS_EGL_EGLDISPLAY_FWD
#define SCAPIX_JAVA_API_JAVAX_MICROEDITION_KHRONOS_EGL_EGLDISPLAY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::microedition::khronos::egl { class EGLDisplay; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::microedition::khronos::egl::EGLDisplay>
{
	static constexpr fixed_string class_name = "javax/microedition/khronos/egl/EGLDisplay";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_MICROEDITION_KHRONOS_EGL_EGLDISPLAY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_MICROEDITION_KHRONOS_EGL_EGLDISPLAY)
#define SCAPIX_JAVA_API_JAVAX_MICROEDITION_KHRONOS_EGL_EGLDISPLAY

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::microedition::khronos::egl::EGLDisplay : public jni::object_base<"javax/microedition/khronos/egl/EGLDisplay",
	java::lang::Object>
{
public:

	static jni::ref<javax::microedition::khronos::egl::EGLDisplay> new_object() { return base_::new_object(); }

protected:

	EGLDisplay(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_MICROEDITION_KHRONOS_EGL_EGLDISPLAY
