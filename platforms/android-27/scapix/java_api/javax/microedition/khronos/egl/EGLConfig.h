// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_MICROEDITION_KHRONOS_EGL_EGLCONFIG_FWD
#define SCAPIX_JAVA_API_JAVAX_MICROEDITION_KHRONOS_EGL_EGLCONFIG_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::microedition::khronos::egl { class EGLConfig; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::microedition::khronos::egl::EGLConfig>
{
	static constexpr fixed_string class_name = "javax/microedition/khronos/egl/EGLConfig";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_MICROEDITION_KHRONOS_EGL_EGLCONFIG_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_MICROEDITION_KHRONOS_EGL_EGLCONFIG)
#define SCAPIX_JAVA_API_JAVAX_MICROEDITION_KHRONOS_EGL_EGLCONFIG

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::microedition::khronos::egl::EGLConfig : public jni::object_base<"javax/microedition/khronos/egl/EGLConfig",
	java::lang::Object>
{
public:

	static jni::ref<javax::microedition::khronos::egl::EGLConfig> new_object() { return base_::new_object(); }

protected:

	EGLConfig(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_MICROEDITION_KHRONOS_EGL_EGLCONFIG