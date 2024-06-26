// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVA_SECURITY_PERMISSIONCOLLECTION_FWD
#define SCAPIX_JAVA_API_JAVA_SECURITY_PERMISSIONCOLLECTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::security { class PermissionCollection; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::security::PermissionCollection>
{
	static constexpr fixed_string class_name = "java/security/PermissionCollection";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_PERMISSIONCOLLECTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_SECURITY_PERMISSIONCOLLECTION)
#define SCAPIX_JAVA_API_JAVA_SECURITY_PERMISSIONCOLLECTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/security/Permission.h>
#include <scapix/java_api/java/util/Enumeration.h>
#include <scapix/java_api/java/util/stream/Stream.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::security::PermissionCollection : public jni::object_base<"java/security/PermissionCollection",
	java::lang::Object,
	java::io::Serializable>
{
public:

	static jni::ref<java::security::PermissionCollection> new_object() { return base_::new_object(); }
	void add(jni::ref<java::security::Permission> p1) { return call_method<"add", void>(p1); }
	jboolean implies(jni::ref<java::security::Permission> p1) { return call_method<"implies", jboolean>(p1); }
	jni::ref<java::util::Enumeration> elements() { return call_method<"elements", jni::ref<java::util::Enumeration>>(); }
	jni::ref<java::util::stream::Stream> elementsAsStream() { return call_method<"elementsAsStream", jni::ref<java::util::stream::Stream>>(); }
	void setReadOnly() { return call_method<"setReadOnly", void>(); }
	jboolean isReadOnly() { return call_method<"isReadOnly", jboolean>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	PermissionCollection(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_PERMISSIONCOLLECTION
