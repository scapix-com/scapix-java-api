// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/sun/security/util/DomainName_Match.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_UTIL_DOMAINNAME_COMMONMATCH_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_UTIL_DOMAINNAME_COMMONMATCH_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::util { class DomainName_CommonMatch; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::util::DomainName_CommonMatch>
{
	static constexpr fixed_string class_name = "sun/security/util/DomainName$CommonMatch";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::sun::security::util::DomainName_Match>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_UTIL_DOMAINNAME_COMMONMATCH_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_UTIL_DOMAINNAME_COMMONMATCH)
#define SCAPIX_JAVA_API_SUN_SECURITY_UTIL_DOMAINNAME_COMMONMATCH

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/sun/security/util/DomainName_Rule_Type.h>
#include <scapix/java_api/sun/security/util/RegisteredDomain.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::security::util::DomainName_CommonMatch : public jni::object_base<"sun/security/util/DomainName$CommonMatch",
	java::lang::Object,
	sun::security::util::DomainName_Match>
{
public:

	jni::ref<sun::security::util::RegisteredDomain> registeredDomain() { return call_method<"registeredDomain", jni::ref<sun::security::util::RegisteredDomain>>(); }
	jni::ref<sun::security::util::DomainName_Rule_Type> type() { return call_method<"type", jni::ref<sun::security::util::DomainName_Rule_Type>>(); }

protected:

	DomainName_CommonMatch(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_UTIL_DOMAINNAME_COMMONMATCH
