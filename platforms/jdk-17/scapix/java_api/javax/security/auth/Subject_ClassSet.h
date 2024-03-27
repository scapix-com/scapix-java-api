// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/AbstractSet.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SECURITY_AUTH_SUBJECT_CLASSSET_FWD
#define SCAPIX_JAVA_API_JAVAX_SECURITY_AUTH_SUBJECT_CLASSSET_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::security::auth { class Subject_ClassSet; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::security::auth::Subject_ClassSet>
{
	static constexpr fixed_string class_name = "javax/security/auth/Subject$ClassSet";
	using base_classes = std::tuple<scapix::java_api::java::util::AbstractSet>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SECURITY_AUTH_SUBJECT_CLASSSET_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SECURITY_AUTH_SUBJECT_CLASSSET)
#define SCAPIX_JAVA_API_JAVAX_SECURITY_AUTH_SUBJECT_CLASSSET

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/Iterator.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::security::auth::Subject_ClassSet : public jni::object_base<"javax/security/auth/Subject$ClassSet",
	java::util::AbstractSet>
{
public:

	jint size() { return call_method<"size", jint>(); }
	jni::ref<java::util::Iterator> iterator() { return call_method<"iterator", jni::ref<java::util::Iterator>>(); }
	jboolean add(jni::ref<java::lang::Object> o) { return call_method<"add", jboolean>(o); }

protected:

	Subject_ClassSet(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SECURITY_AUTH_SUBJECT_CLASSSET
