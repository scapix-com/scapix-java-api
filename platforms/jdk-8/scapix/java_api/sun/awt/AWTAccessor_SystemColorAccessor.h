// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_AWT_AWTACCESSOR_SYSTEMCOLORACCESSOR_FWD
#define SCAPIX_JAVA_API_SUN_AWT_AWTACCESSOR_SYSTEMCOLORACCESSOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::awt { class AWTAccessor_SystemColorAccessor; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::awt::AWTAccessor_SystemColorAccessor>
{
	static constexpr fixed_string class_name = "sun/awt/AWTAccessor$SystemColorAccessor";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AWT_AWTACCESSOR_SYSTEMCOLORACCESSOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_AWT_AWTACCESSOR_SYSTEMCOLORACCESSOR)
#define SCAPIX_JAVA_API_SUN_AWT_AWTACCESSOR_SYSTEMCOLORACCESSOR

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::awt::AWTAccessor_SystemColorAccessor : public jni::object_base<"sun/awt/AWTAccessor$SystemColorAccessor",
	java::lang::Object>
{
public:

	void updateSystemColors() { return call_method<"updateSystemColors", void>(); }

protected:

	AWTAccessor_SystemColorAccessor(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AWT_AWTACCESSOR_SYSTEMCOLORACCESSOR
