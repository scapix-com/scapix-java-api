// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_KRB5_INTERNAL_CCACHE_TAG_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_KRB5_INTERNAL_CCACHE_TAG_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::krb5::internal::ccache { class Tag; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::krb5::internal::ccache::Tag>
{
	static constexpr fixed_string class_name = "sun/security/krb5/internal/ccache/Tag";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_KRB5_INTERNAL_CCACHE_TAG_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_KRB5_INTERNAL_CCACHE_TAG)
#define SCAPIX_JAVA_API_SUN_SECURITY_KRB5_INTERNAL_CCACHE_TAG

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Integer.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::krb5::internal::ccache::Tag : public jni::object_base<"sun/security/krb5/internal/ccache/Tag",
	java::lang::Object>
{
public:

	static jni::ref<sun::security::krb5::internal::ccache::Tag> new_object(jint p1, jint p2, jni::ref<java::lang::Integer> p3, jni::ref<java::lang::Integer> p4) { return base_::new_object(p1, p2, p3, p4); }
	static jni::ref<sun::security::krb5::internal::ccache::Tag> new_object(jint p1) { return base_::new_object(p1); }
	jni::ref<jni::array<jbyte>> toByteArray() { return call_method<"toByteArray", jni::ref<jni::array<jbyte>>>(); }

protected:

	Tag(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_KRB5_INTERNAL_CCACHE_TAG