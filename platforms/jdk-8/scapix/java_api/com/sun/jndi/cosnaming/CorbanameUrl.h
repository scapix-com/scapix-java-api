// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JNDI_COSNAMING_CORBANAMEURL_FWD
#define SCAPIX_JAVA_API_COM_SUN_JNDI_COSNAMING_CORBANAMEURL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::jndi::cosnaming { class CorbanameUrl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::jndi::cosnaming::CorbanameUrl>
{
	static constexpr fixed_string class_name = "com/sun/jndi/cosnaming/CorbanameUrl";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JNDI_COSNAMING_CORBANAMEURL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JNDI_COSNAMING_CORBANAMEURL)
#define SCAPIX_JAVA_API_COM_SUN_JNDI_COSNAMING_CORBANAMEURL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/naming/Name.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::jndi::cosnaming::CorbanameUrl : public jni::object_base<"com/sun/jndi/cosnaming/CorbanameUrl",
	java::lang::Object>
{
public:

	jni::ref<java::lang::String> getStringName() { return call_method<"getStringName", jni::ref<java::lang::String>>(); }
	jni::ref<javax::naming::Name> getCosName() { return call_method<"getCosName", jni::ref<javax::naming::Name>>(); }
	jni::ref<java::lang::String> getLocation() { return call_method<"getLocation", jni::ref<java::lang::String>>(); }
	static jni::ref<com::sun::jndi::cosnaming::CorbanameUrl> new_object(jni::ref<java::lang::String> p1) { return base_::new_object(p1); }

protected:

	CorbanameUrl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JNDI_COSNAMING_CORBANAMEURL
