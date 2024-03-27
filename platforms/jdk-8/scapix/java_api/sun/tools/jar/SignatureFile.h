// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_TOOLS_JAR_SIGNATUREFILE_FWD
#define SCAPIX_JAVA_API_SUN_TOOLS_JAR_SIGNATUREFILE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::tools::jar { class SignatureFile; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::tools::jar::SignatureFile>
{
	static constexpr fixed_string class_name = "sun/tools/jar/SignatureFile";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_TOOLS_JAR_SIGNATUREFILE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_TOOLS_JAR_SIGNATUREFILE)
#define SCAPIX_JAVA_API_SUN_TOOLS_JAR_SIGNATUREFILE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/InputStream.h>
#include <scapix/java_api/java/io/OutputStream.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Enumeration.h>
#include <scapix/java_api/sun/net/www/MessageHeader.h>
#include <scapix/java_api/sun/security/pkcs/PKCS7.h>
#include <scapix/java_api/sun/tools/jar/Manifest.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::tools::jar::SignatureFile : public jni::object_base<"sun/tools/jar/SignatureFile",
	java::lang::Object>
{
public:

	static jni::ref<sun::tools::jar::SignatureFile> new_object(jni::ref<sun::tools::jar::Manifest> p1, jni::ref<java::lang::String> p2) { return base_::new_object(p1, p2); }
	static jni::ref<sun::tools::jar::SignatureFile> new_object(jni::ref<sun::tools::jar::Manifest> p1, jni::ref<jni::array<java::lang::String>> p2, jni::ref<java::lang::String> p3) { return base_::new_object(p1, p2, p3); }
	static jni::ref<sun::tools::jar::SignatureFile> new_object(jni::ref<java::io::InputStream> p1, jni::ref<java::lang::String> p2) { return base_::new_object(p1, p2); }
	static jni::ref<sun::tools::jar::SignatureFile> new_object(jni::ref<java::io::InputStream> p1) { return base_::new_object(p1); }
	static jni::ref<sun::tools::jar::SignatureFile> new_object(jni::ref<jni::array<jbyte>> p1) { return base_::new_object(p1); }
	jni::ref<java::lang::String> getName() { return call_method<"getName", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getBlockName() { return call_method<"getBlockName", jni::ref<java::lang::String>>(); }
	jni::ref<sun::security::pkcs::PKCS7> getBlock() { return call_method<"getBlock", jni::ref<sun::security::pkcs::PKCS7>>(); }
	void setBlock(jni::ref<sun::security::pkcs::PKCS7> p1) { return call_method<"setBlock", void>(p1); }
	void add(jni::ref<jni::array<java::lang::String>> p1) { return call_method<"add", void>(p1); }
	void add(jni::ref<java::lang::String> p1) { return call_method<"add", void>(p1); }
	jni::ref<sun::net::www::MessageHeader> getEntry(jni::ref<java::lang::String> p1) { return call_method<"getEntry", jni::ref<sun::net::www::MessageHeader>>(p1); }
	jni::ref<sun::net::www::MessageHeader> entryAt(jint p1) { return call_method<"entryAt", jni::ref<sun::net::www::MessageHeader>>(p1); }
	jni::ref<java::util::Enumeration> entries() { return call_method<"entries", jni::ref<java::util::Enumeration>>(); }
	void stream(jni::ref<java::io::OutputStream> p1) { return call_method<"stream", void>(p1); }

protected:

	SignatureFile(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_TOOLS_JAR_SIGNATUREFILE
