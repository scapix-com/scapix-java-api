// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/RuntimeException.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_PARSERS_ABSTRACTDOMPARSER_ABORT_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_PARSERS_ABSTRACTDOMPARSER_ABORT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xerces::internal::parsers { class AbstractDOMParser_Abort; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xerces::internal::parsers::AbstractDOMParser_Abort>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xerces/internal/parsers/AbstractDOMParser$Abort";
	using base_classes = std::tuple<scapix::java_api::java::lang::RuntimeException>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_PARSERS_ABSTRACTDOMPARSER_ABORT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_PARSERS_ABSTRACTDOMPARSER_ABORT)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_PARSERS_ABSTRACTDOMPARSER_ABORT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Throwable.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::org::apache::xerces::internal::parsers::AbstractDOMParser_Abort : public jni::object_base<"com/sun/org/apache/xerces/internal/parsers/AbstractDOMParser$Abort",
	java::lang::RuntimeException>
{
public:

	jni::ref<java::lang::Throwable> fillInStackTrace() { return call_method<"fillInStackTrace", jni::ref<java::lang::Throwable>>(); }

protected:

	AbstractDOMParser_Abort(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_PARSERS_ABSTRACTDOMPARSER_ABORT