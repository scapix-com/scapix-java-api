// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_AWT_AWTACCESSOR_ACCESSIBLECONTEXTACCESSOR_FWD
#define SCAPIX_JAVA_API_SUN_AWT_AWTACCESSOR_ACCESSIBLECONTEXTACCESSOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::awt { class AWTAccessor_AccessibleContextAccessor; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::awt::AWTAccessor_AccessibleContextAccessor>
{
	static constexpr fixed_string class_name = "sun/awt/AWTAccessor$AccessibleContextAccessor";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AWT_AWTACCESSOR_ACCESSIBLECONTEXTACCESSOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_AWT_AWTACCESSOR_ACCESSIBLECONTEXTACCESSOR)
#define SCAPIX_JAVA_API_SUN_AWT_AWTACCESSOR_ACCESSIBLECONTEXTACCESSOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/javax/accessibility/AccessibleContext.h>
#include <scapix/java_api/sun/awt/AppContext.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::awt::AWTAccessor_AccessibleContextAccessor : public jni::object_base<"sun/awt/AWTAccessor$AccessibleContextAccessor",
	java::lang::Object>
{
public:

	void setAppContext(jni::ref<javax::accessibility::AccessibleContext> p1, jni::ref<sun::awt::AppContext> p2) { return call_method<"setAppContext", void>(p1, p2); }
	jni::ref<sun::awt::AppContext> getAppContext(jni::ref<javax::accessibility::AccessibleContext> p1) { return call_method<"getAppContext", jni::ref<sun::awt::AppContext>>(p1); }

protected:

	AWTAccessor_AccessibleContextAccessor(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AWT_AWTACCESSOR_ACCESSIBLECONTEXTACCESSOR
