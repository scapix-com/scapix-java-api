// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_UTIL_OBJECTIDENTIFIER_HUGEOIDNOTSUPPORTEDBYOLDJDK_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_UTIL_OBJECTIDENTIFIER_HUGEOIDNOTSUPPORTEDBYOLDJDK_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::util { class ObjectIdentifier_HugeOidNotSupportedByOldJDK; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::util::ObjectIdentifier_HugeOidNotSupportedByOldJDK>
{
	static constexpr fixed_string class_name = "sun/security/util/ObjectIdentifier$HugeOidNotSupportedByOldJDK";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_UTIL_OBJECTIDENTIFIER_HUGEOIDNOTSUPPORTEDBYOLDJDK_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_UTIL_OBJECTIDENTIFIER_HUGEOIDNOTSUPPORTEDBYOLDJDK)
#define SCAPIX_JAVA_API_SUN_SECURITY_UTIL_OBJECTIDENTIFIER_HUGEOIDNOTSUPPORTEDBYOLDJDK

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::security::util::ObjectIdentifier_HugeOidNotSupportedByOldJDK : public jni::object_base<"sun/security/util/ObjectIdentifier$HugeOidNotSupportedByOldJDK",
	java::lang::Object,
	java::io::Serializable>
{
public:


protected:

	ObjectIdentifier_HugeOidNotSupportedByOldJDK(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_UTIL_OBJECTIDENTIFIER_HUGEOIDNOTSUPPORTEDBYOLDJDK