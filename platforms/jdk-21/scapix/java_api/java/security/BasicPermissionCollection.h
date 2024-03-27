// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/security/PermissionCollection.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVA_SECURITY_BASICPERMISSIONCOLLECTION_FWD
#define SCAPIX_JAVA_API_JAVA_SECURITY_BASICPERMISSIONCOLLECTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::security { class BasicPermissionCollection; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::security::BasicPermissionCollection>
{
	static constexpr fixed_string class_name = "java/security/BasicPermissionCollection";
	using base_classes = std::tuple<scapix::java_api::java::security::PermissionCollection, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_BASICPERMISSIONCOLLECTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_SECURITY_BASICPERMISSIONCOLLECTION)
#define SCAPIX_JAVA_API_JAVA_SECURITY_BASICPERMISSIONCOLLECTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/security/Permission.h>
#include <scapix/java_api/java/util/Enumeration.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::security::BasicPermissionCollection : public jni::object_base<"java/security/BasicPermissionCollection",
	java::security::PermissionCollection,
	java::io::Serializable>
{
public:

	static jni::ref<java::security::BasicPermissionCollection> new_object(jni::ref<java::lang::Class> clazz) { return base_::new_object(clazz); }
	void add(jni::ref<java::security::Permission> permission) { return call_method<"add", void>(permission); }
	jboolean implies(jni::ref<java::security::Permission> permission) { return call_method<"implies", jboolean>(permission); }
	jni::ref<java::util::Enumeration> elements() { return call_method<"elements", jni::ref<java::util::Enumeration>>(); }

protected:

	BasicPermissionCollection(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_BASICPERMISSIONCOLLECTION
