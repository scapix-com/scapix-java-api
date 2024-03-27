// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/zip/ZipEntry.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_JAR_JARENTRY_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_JAR_JARENTRY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::jar { class JarEntry; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::jar::JarEntry>
{
	static constexpr fixed_string class_name = "java/util/jar/JarEntry";
	using base_classes = std::tuple<scapix::java_api::java::util::zip::ZipEntry>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_JAR_JARENTRY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_JAR_JARENTRY)
#define SCAPIX_JAVA_API_JAVA_UTIL_JAR_JARENTRY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/security/CodeSigner.h>
#include <scapix/java_api/java/security/cert/Certificate.h>
#include <scapix/java_api/java/util/jar/Attributes.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::jar::JarEntry : public jni::object_base<"java/util/jar/JarEntry",
	java::util::zip::ZipEntry>
{
public:

	static jint CENATT() { return get_static_field<"CENATT", jint>(); }
	static jint CENATX() { return get_static_field<"CENATX", jint>(); }
	static jint CENCOM() { return get_static_field<"CENCOM", jint>(); }
	static jint CENCRC() { return get_static_field<"CENCRC", jint>(); }
	static jint CENDSK() { return get_static_field<"CENDSK", jint>(); }
	static jint CENEXT() { return get_static_field<"CENEXT", jint>(); }
	static jint CENFLG() { return get_static_field<"CENFLG", jint>(); }
	static jint CENHDR() { return get_static_field<"CENHDR", jint>(); }
	static jint CENHOW() { return get_static_field<"CENHOW", jint>(); }
	static jint CENLEN() { return get_static_field<"CENLEN", jint>(); }
	static jint CENNAM() { return get_static_field<"CENNAM", jint>(); }
	static jint CENOFF() { return get_static_field<"CENOFF", jint>(); }
	static jlong CENSIG() { return get_static_field<"CENSIG", jlong>(); }
	static jint CENSIZ() { return get_static_field<"CENSIZ", jint>(); }
	static jint CENTIM() { return get_static_field<"CENTIM", jint>(); }
	static jint CENVEM() { return get_static_field<"CENVEM", jint>(); }
	static jint CENVER() { return get_static_field<"CENVER", jint>(); }
	static jint ENDCOM() { return get_static_field<"ENDCOM", jint>(); }
	static jint ENDHDR() { return get_static_field<"ENDHDR", jint>(); }
	static jint ENDOFF() { return get_static_field<"ENDOFF", jint>(); }
	static jlong ENDSIG() { return get_static_field<"ENDSIG", jlong>(); }
	static jint ENDSIZ() { return get_static_field<"ENDSIZ", jint>(); }
	static jint ENDSUB() { return get_static_field<"ENDSUB", jint>(); }
	static jint ENDTOT() { return get_static_field<"ENDTOT", jint>(); }
	static jint EXTCRC() { return get_static_field<"EXTCRC", jint>(); }
	static jint EXTHDR() { return get_static_field<"EXTHDR", jint>(); }
	static jint EXTLEN() { return get_static_field<"EXTLEN", jint>(); }
	static jlong EXTSIG() { return get_static_field<"EXTSIG", jlong>(); }
	static jint EXTSIZ() { return get_static_field<"EXTSIZ", jint>(); }
	static jint LOCCRC() { return get_static_field<"LOCCRC", jint>(); }
	static jint LOCEXT() { return get_static_field<"LOCEXT", jint>(); }
	static jint LOCFLG() { return get_static_field<"LOCFLG", jint>(); }
	static jint LOCHDR() { return get_static_field<"LOCHDR", jint>(); }
	static jint LOCHOW() { return get_static_field<"LOCHOW", jint>(); }
	static jint LOCLEN() { return get_static_field<"LOCLEN", jint>(); }
	static jint LOCNAM() { return get_static_field<"LOCNAM", jint>(); }
	static jlong LOCSIG() { return get_static_field<"LOCSIG", jlong>(); }
	static jint LOCSIZ() { return get_static_field<"LOCSIZ", jint>(); }
	static jint LOCTIM() { return get_static_field<"LOCTIM", jint>(); }
	static jint LOCVER() { return get_static_field<"LOCVER", jint>(); }

	static jni::ref<java::util::jar::JarEntry> new_object(jni::ref<java::lang::String> name) { return base_::new_object(name); }
	static jni::ref<java::util::jar::JarEntry> new_object(jni::ref<java::util::zip::ZipEntry> ze) { return base_::new_object(ze); }
	static jni::ref<java::util::jar::JarEntry> new_object(jni::ref<java::util::jar::JarEntry> je) { return base_::new_object(je); }
	jni::ref<java::util::jar::Attributes> getAttributes() { return call_method<"getAttributes", jni::ref<java::util::jar::Attributes>>(); }
	jni::ref<jni::array<java::security::cert::Certificate>> getCertificates() { return call_method<"getCertificates", jni::ref<jni::array<java::security::cert::Certificate>>>(); }
	jni::ref<jni::array<java::security::CodeSigner>> getCodeSigners() { return call_method<"getCodeSigners", jni::ref<jni::array<java::security::CodeSigner>>>(); }

protected:

	JarEntry(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_JAR_JARENTRY