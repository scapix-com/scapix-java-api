// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_UTIL_RESOURCESMGR_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_UTIL_RESOURCESMGR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::util { class ResourcesMgr; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::util::ResourcesMgr>
{
	static constexpr fixed_string class_name = "sun/security/util/ResourcesMgr";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_UTIL_RESOURCESMGR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_UTIL_RESOURCESMGR)
#define SCAPIX_JAVA_API_SUN_SECURITY_UTIL_RESOURCESMGR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::util::ResourcesMgr : public jni::object_base<"sun/security/util/ResourcesMgr",
	java::lang::Object>
{
public:

	static jni::ref<sun::security::util::ResourcesMgr> new_object() { return base_::new_object(); }
	static jni::ref<java::lang::String> getString(jni::ref<java::lang::String> s) { return call_static_method<"getString", jni::ref<java::lang::String>>(s); }
	static jni::ref<java::lang::String> getAuthResourceString(jni::ref<java::lang::String> s) { return call_static_method<"getAuthResourceString", jni::ref<java::lang::String>>(s); }

protected:

	ResourcesMgr(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_UTIL_RESOURCESMGR
