// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_TOOLS_JAR_MANIFEST_FWD
#define SCAPIX_JAVA_API_SUN_TOOLS_JAR_MANIFEST_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::tools::jar { class Manifest; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::tools::jar::Manifest>
{
	static constexpr fixed_string class_name = "sun/tools/jar/Manifest";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_TOOLS_JAR_MANIFEST_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_TOOLS_JAR_MANIFEST)
#define SCAPIX_JAVA_API_SUN_TOOLS_JAR_MANIFEST

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/File.h>
#include <scapix/java_api/java/io/InputStream.h>
#include <scapix/java_api/java/io/OutputStream.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Enumeration.h>
#include <scapix/java_api/sun/net/www/MessageHeader.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::tools::jar::Manifest : public jni::object_base<"sun/tools/jar/Manifest",
	java::lang::Object>
{
public:

	static jni::ref<sun::tools::jar::Manifest> new_object() { return base_::new_object(); }
	static jni::ref<sun::tools::jar::Manifest> new_object(jni::ref<jni::array<jbyte>> p1) { return base_::new_object(p1); }
	static jni::ref<sun::tools::jar::Manifest> new_object(jni::ref<java::io::InputStream> p1) { return base_::new_object(p1); }
	static jni::ref<sun::tools::jar::Manifest> new_object(jni::ref<java::io::InputStream> p1, jboolean p2) { return base_::new_object(p1, p2); }
	static jni::ref<sun::tools::jar::Manifest> new_object(jni::ref<jni::array<java::lang::String>> p1) { return base_::new_object(p1); }
	void addEntry(jni::ref<sun::net::www::MessageHeader> p1) { return call_method<"addEntry", void>(p1); }
	jni::ref<sun::net::www::MessageHeader> getEntry(jni::ref<java::lang::String> p1) { return call_method<"getEntry", jni::ref<sun::net::www::MessageHeader>>(p1); }
	jni::ref<sun::net::www::MessageHeader> entryAt(jint p1) { return call_method<"entryAt", jni::ref<sun::net::www::MessageHeader>>(p1); }
	jni::ref<java::util::Enumeration> entries() { return call_method<"entries", jni::ref<java::util::Enumeration>>(); }
	void addFiles(jni::ref<java::io::File> p1, jni::ref<jni::array<java::lang::String>> p2) { return call_method<"addFiles", void>(p1, p2); }
	void addFile(jni::ref<java::io::File> p1) { return call_method<"addFile", void>(p1); }
	void doHashes(jni::ref<sun::net::www::MessageHeader> p1) { return call_method<"doHashes", void>(p1); }
	void stream(jni::ref<java::io::OutputStream> p1) { return call_method<"stream", void>(p1); }
	static jboolean isManifestName(jni::ref<java::lang::String> p1) { return call_static_method<"isManifestName", jboolean>(p1); }

protected:

	Manifest(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_TOOLS_JAR_MANIFEST