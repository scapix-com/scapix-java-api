// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_AWT_APPCONTEXT_GETAPPCONTEXTLOCK_FWD
#define SCAPIX_JAVA_API_SUN_AWT_APPCONTEXT_GETAPPCONTEXTLOCK_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::awt { class AppContext_GetAppContextLock; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::awt::AppContext_GetAppContextLock>
{
	static constexpr fixed_string class_name = "sun/awt/AppContext$GetAppContextLock";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AWT_APPCONTEXT_GETAPPCONTEXTLOCK_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_AWT_APPCONTEXT_GETAPPCONTEXTLOCK)
#define SCAPIX_JAVA_API_SUN_AWT_APPCONTEXT_GETAPPCONTEXTLOCK

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::awt::AppContext_GetAppContextLock : public jni::object_base<"sun/awt/AppContext$GetAppContextLock",
	java::lang::Object>
{
public:


protected:

	AppContext_GetAppContextLock(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AWT_APPCONTEXT_GETAPPCONTEXTLOCK
