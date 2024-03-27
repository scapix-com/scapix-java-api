// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/AbstractSet.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SECURITY_AUTH_SUBJECT_SECURESET_FWD
#define SCAPIX_JAVA_API_JAVAX_SECURITY_AUTH_SUBJECT_SECURESET_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::security::auth { class Subject_SecureSet; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::security::auth::Subject_SecureSet>
{
	static constexpr fixed_string class_name = "javax/security/auth/Subject$SecureSet";
	using base_classes = std::tuple<scapix::java_api::java::util::AbstractSet, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SECURITY_AUTH_SUBJECT_SECURESET_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SECURITY_AUTH_SUBJECT_SECURESET)
#define SCAPIX_JAVA_API_JAVAX_SECURITY_AUTH_SUBJECT_SECURESET

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/Collection.h>
#include <scapix/java_api/java/util/Iterator.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::security::auth::Subject_SecureSet : public jni::object_base<"javax/security/auth/Subject$SecureSet",
	java::util::AbstractSet,
	java::io::Serializable>
{
public:

	jint size() { return call_method<"size", jint>(); }
	jni::ref<java::util::Iterator> iterator() { return call_method<"iterator", jni::ref<java::util::Iterator>>(); }
	jboolean add(jni::ref<java::lang::Object> p1) { return call_method<"add", jboolean>(p1); }
	jboolean remove(jni::ref<java::lang::Object> p1) { return call_method<"remove", jboolean>(p1); }
	jboolean contains(jni::ref<java::lang::Object> p1) { return call_method<"contains", jboolean>(p1); }
	jboolean removeAll(jni::ref<java::util::Collection> p1) { return call_method<"removeAll", jboolean>(p1); }
	jboolean retainAll(jni::ref<java::util::Collection> p1) { return call_method<"retainAll", jboolean>(p1); }
	void clear() { return call_method<"clear", void>(); }

protected:

	Subject_SecureSet(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SECURITY_AUTH_SUBJECT_SECURESET