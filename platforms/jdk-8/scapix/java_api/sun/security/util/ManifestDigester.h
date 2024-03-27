// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_UTIL_MANIFESTDIGESTER_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_UTIL_MANIFESTDIGESTER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::util { class ManifestDigester; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::util::ManifestDigester>
{
	static constexpr fixed_string class_name = "sun/security/util/ManifestDigester";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_UTIL_MANIFESTDIGESTER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_UTIL_MANIFESTDIGESTER)
#define SCAPIX_JAVA_API_SUN_SECURITY_UTIL_MANIFESTDIGESTER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/security/MessageDigest.h>
#include <scapix/java_api/sun/security/util/ManifestDigester_Entry.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::util::ManifestDigester : public jni::object_base<"sun/security/util/ManifestDigester",
	java::lang::Object>
{
public:

	using Entry = ManifestDigester_Entry;

	static jni::ref<java::lang::String> MF_MAIN_ATTRS() { return get_static_field<"MF_MAIN_ATTRS", jni::ref<java::lang::String>>(); }

	static jni::ref<sun::security::util::ManifestDigester> new_object(jni::ref<jni::array<jbyte>> p1) { return base_::new_object(p1); }
	jni::ref<sun::security::util::ManifestDigester_Entry> get(jni::ref<java::lang::String> p1, jboolean p2) { return call_method<"get", jni::ref<sun::security::util::ManifestDigester_Entry>>(p1, p2); }
	jni::ref<jni::array<jbyte>> manifestDigest(jni::ref<java::security::MessageDigest> p1) { return call_method<"manifestDigest", jni::ref<jni::array<jbyte>>>(p1); }

protected:

	ManifestDigester(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_UTIL_MANIFESTDIGESTER
