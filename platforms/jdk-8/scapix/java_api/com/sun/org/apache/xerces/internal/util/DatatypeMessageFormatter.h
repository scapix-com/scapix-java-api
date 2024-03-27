// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_UTIL_DATATYPEMESSAGEFORMATTER_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_UTIL_DATATYPEMESSAGEFORMATTER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xerces::internal::util { class DatatypeMessageFormatter; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xerces::internal::util::DatatypeMessageFormatter>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xerces/internal/util/DatatypeMessageFormatter";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_UTIL_DATATYPEMESSAGEFORMATTER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_UTIL_DATATYPEMESSAGEFORMATTER)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_UTIL_DATATYPEMESSAGEFORMATTER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Locale.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xerces::internal::util::DatatypeMessageFormatter : public jni::object_base<"com/sun/org/apache/xerces/internal/util/DatatypeMessageFormatter",
	java::lang::Object>
{
public:

	static jni::ref<com::sun::org::apache::xerces::internal::util::DatatypeMessageFormatter> new_object() { return base_::new_object(); }
	static jni::ref<java::lang::String> formatMessage(jni::ref<java::util::Locale> p1, jni::ref<java::lang::String> p2, jni::ref<jni::array<java::lang::Object>> p3) { return call_static_method<"formatMessage", jni::ref<java::lang::String>>(p1, p2, p3); }

protected:

	DatatypeMessageFormatter(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_UTIL_DATATYPEMESSAGEFORMATTER