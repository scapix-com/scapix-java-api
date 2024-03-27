// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_UTIL_MANIFESTENTRYVERIFIER_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_UTIL_MANIFESTENTRYVERIFIER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::util { class ManifestEntryVerifier; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::util::ManifestEntryVerifier>
{
	static constexpr fixed_string class_name = "sun/security/util/ManifestEntryVerifier";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_UTIL_MANIFESTENTRYVERIFIER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_UTIL_MANIFESTENTRYVERIFIER)
#define SCAPIX_JAVA_API_SUN_SECURITY_UTIL_MANIFESTENTRYVERIFIER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/security/CodeSigner.h>
#include <scapix/java_api/java/util/Hashtable.h>
#include <scapix/java_api/java/util/Map.h>
#include <scapix/java_api/java/util/jar/JarEntry.h>
#include <scapix/java_api/java/util/jar/Manifest.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::util::ManifestEntryVerifier : public jni::object_base<"sun/security/util/ManifestEntryVerifier",
	java::lang::Object>
{
public:

	static jni::ref<sun::security::util::ManifestEntryVerifier> new_object(jni::ref<java::util::jar::Manifest> p1, jni::ref<java::lang::String> p2) { return base_::new_object(p1, p2); }
	void setEntry(jni::ref<java::lang::String> p1, jni::ref<java::util::jar::JarEntry> p2) { return call_method<"setEntry", void>(p1, p2); }
	void update(jbyte p1) { return call_method<"update", void>(p1); }
	void update(jni::ref<jni::array<jbyte>> p1, jint p2, jint p3) { return call_method<"update", void>(p1, p2, p3); }
	jni::ref<java::util::jar::JarEntry> getEntry() { return call_method<"getEntry", jni::ref<java::util::jar::JarEntry>>(); }
	jni::ref<jni::array<java::security::CodeSigner>> verify(jni::ref<java::util::Hashtable> p1, jni::ref<java::util::Hashtable> p2, jni::ref<java::util::Map> p3) { return call_method<"verify", jni::ref<jni::array<java::security::CodeSigner>>>(p1, p2, p3); }

protected:

	ManifestEntryVerifier(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_UTIL_MANIFESTENTRYVERIFIER
