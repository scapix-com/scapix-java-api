// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/jdk/internal/access/JavaUtilJarAccess.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_JAR_JAVAUTILJARACCESSIMPL_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_JAR_JAVAUTILJARACCESSIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::jar { class JavaUtilJarAccessImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::jar::JavaUtilJarAccessImpl>
{
	static constexpr fixed_string class_name = "java/util/jar/JavaUtilJarAccessImpl";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::jdk::internal::access::JavaUtilJarAccess>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_JAR_JAVAUTILJARACCESSIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_JAR_JAVAUTILJARACCESSIMPL)
#define SCAPIX_JAVA_API_JAVA_UTIL_JAR_JAVAUTILJARACCESSIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/net/URL.h>
#include <scapix/java_api/java/security/CodeSource.h>
#include <scapix/java_api/java/util/Enumeration.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/java/util/jar/Attributes.h>
#include <scapix/java_api/java/util/jar/JarEntry.h>
#include <scapix/java_api/java/util/jar/JarFile.h>
#include <scapix/java_api/java/util/jar/Manifest.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::jar::JavaUtilJarAccessImpl : public jni::object_base<"java/util/jar/JavaUtilJarAccessImpl",
	java::lang::Object,
	jdk::internal::access::JavaUtilJarAccess>
{
public:

	jboolean jarFileHasClassPathAttribute(jni::ref<java::util::jar::JarFile> jar) { return call_method<"jarFileHasClassPathAttribute", jboolean>(jar); }
	jni::ref<jni::array<java::security::CodeSource>> getCodeSources(jni::ref<java::util::jar::JarFile> jar, jni::ref<java::net::URL> url) { return call_method<"getCodeSources", jni::ref<jni::array<java::security::CodeSource>>>(jar, url); }
	jni::ref<java::security::CodeSource> getCodeSource(jni::ref<java::util::jar::JarFile> jar, jni::ref<java::net::URL> url, jni::ref<java::lang::String> name) { return call_method<"getCodeSource", jni::ref<java::security::CodeSource>>(jar, url, name); }
	jni::ref<java::util::Enumeration> entryNames(jni::ref<java::util::jar::JarFile> jar, jni::ref<jni::array<java::security::CodeSource>> cs) { return call_method<"entryNames", jni::ref<java::util::Enumeration>>(jar, cs); }
	jni::ref<java::util::Enumeration> entries2(jni::ref<java::util::jar::JarFile> jar) { return call_method<"entries2", jni::ref<java::util::Enumeration>>(jar); }
	void setEagerValidation(jni::ref<java::util::jar::JarFile> jar, jboolean eager) { return call_method<"setEagerValidation", void>(jar, eager); }
	jni::ref<java::util::List> getManifestDigests(jni::ref<java::util::jar::JarFile> jar) { return call_method<"getManifestDigests", jni::ref<java::util::List>>(jar); }
	jni::ref<java::util::jar::Attributes> getTrustedAttributes(jni::ref<java::util::jar::Manifest> man, jni::ref<java::lang::String> name) { return call_method<"getTrustedAttributes", jni::ref<java::util::jar::Attributes>>(man, name); }
	void ensureInitialization(jni::ref<java::util::jar::JarFile> jar) { return call_method<"ensureInitialization", void>(jar); }
	jboolean isInitializing() { return call_method<"isInitializing", jboolean>(); }
	jni::ref<java::util::jar::JarEntry> entryFor(jni::ref<java::util::jar::JarFile> jar, jni::ref<java::lang::String> name) { return call_method<"entryFor", jni::ref<java::util::jar::JarEntry>>(jar, name); }

protected:

	JavaUtilJarAccessImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_JAR_JAVAUTILJARACCESSIMPL
