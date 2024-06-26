// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_AWT_MODALITYLISTENER_FWD
#define SCAPIX_JAVA_API_SUN_AWT_MODALITYLISTENER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::awt { class ModalityListener; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::awt::ModalityListener>
{
	static constexpr fixed_string class_name = "sun/awt/ModalityListener";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AWT_MODALITYLISTENER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_AWT_MODALITYLISTENER)
#define SCAPIX_JAVA_API_SUN_AWT_MODALITYLISTENER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/sun/awt/ModalityEvent.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::awt::ModalityListener : public jni::object_base<"sun/awt/ModalityListener",
	java::lang::Object>
{
public:

	void modalityPushed(jni::ref<sun::awt::ModalityEvent> p1) { return call_method<"modalityPushed", void>(p1); }
	void modalityPopped(jni::ref<sun::awt::ModalityEvent> p1) { return call_method<"modalityPopped", void>(p1); }

protected:

	ModalityListener(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AWT_MODALITYLISTENER
