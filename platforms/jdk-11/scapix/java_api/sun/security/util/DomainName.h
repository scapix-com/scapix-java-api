// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_UTIL_DOMAINNAME_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_UTIL_DOMAINNAME_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::util { class DomainName; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::util::DomainName>
{
	static constexpr fixed_string class_name = "sun/security/util/DomainName";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_UTIL_DOMAINNAME_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_UTIL_DOMAINNAME)
#define SCAPIX_JAVA_API_SUN_SECURITY_UTIL_DOMAINNAME

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/sun/security/util/RegisteredDomain.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::security::util::DomainName : public jni::object_base<"sun/security/util/DomainName",
	java::lang::Object>
{
public:

	static jni::ref<sun::security::util::RegisteredDomain> registeredDomain(jni::ref<java::lang::String> domain) { return call_static_method<"registeredDomain", jni::ref<sun::security::util::RegisteredDomain>>(domain); }

protected:

	DomainName(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_UTIL_DOMAINNAME
