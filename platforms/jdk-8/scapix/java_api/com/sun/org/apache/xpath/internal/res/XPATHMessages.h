// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/org/apache/xml/internal/res/XMLMessages.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_RES_XPATHMESSAGES_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_RES_XPATHMESSAGES_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xpath::internal::res { class XPATHMessages; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xpath::internal::res::XPATHMessages>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xpath/internal/res/XPATHMessages";
	using base_classes = std::tuple<scapix::java_api::com::sun::org::apache::xml::internal::res::XMLMessages>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_RES_XPATHMESSAGES_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_RES_XPATHMESSAGES)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_RES_XPATHMESSAGES

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xpath::internal::res::XPATHMessages : public jni::object_base<"com/sun/org/apache/xpath/internal/res/XPATHMessages",
	com::sun::org::apache::xml::internal::res::XMLMessages>
{
public:

	static jni::ref<com::sun::org::apache::xpath::internal::res::XPATHMessages> new_object() { return base_::new_object(); }
	static jni::ref<java::lang::String> createXPATHMessage(jni::ref<java::lang::String> p1, jni::ref<jni::array<java::lang::Object>> p2) { return call_static_method<"createXPATHMessage", jni::ref<java::lang::String>>(p1, p2); }
	static jni::ref<java::lang::String> createXPATHWarning(jni::ref<java::lang::String> p1, jni::ref<jni::array<java::lang::Object>> p2) { return call_static_method<"createXPATHWarning", jni::ref<java::lang::String>>(p1, p2); }

protected:

	XPATHMessages(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_RES_XPATHMESSAGES
