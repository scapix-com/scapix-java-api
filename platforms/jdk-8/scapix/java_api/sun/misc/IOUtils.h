// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_MISC_IOUTILS_FWD
#define SCAPIX_JAVA_API_SUN_MISC_IOUTILS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::misc { class IOUtils; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::misc::IOUtils>
{
	static constexpr fixed_string class_name = "sun/misc/IOUtils";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MISC_IOUTILS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_MISC_IOUTILS)
#define SCAPIX_JAVA_API_SUN_MISC_IOUTILS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/InputStream.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::misc::IOUtils : public jni::object_base<"sun/misc/IOUtils",
	java::lang::Object>
{
public:

	static jni::ref<sun::misc::IOUtils> new_object() { return base_::new_object(); }
	static jni::ref<jni::array<jbyte>> readExactlyNBytes(jni::ref<java::io::InputStream> p1, jint p2) { return call_static_method<"readExactlyNBytes", jni::ref<jni::array<jbyte>>>(p1, p2); }
	static jni::ref<jni::array<jbyte>> readNBytesOrEOF(jni::ref<java::io::InputStream> p1, jint p2) { return call_static_method<"readNBytesOrEOF", jni::ref<jni::array<jbyte>>>(p1, p2); }
	static jni::ref<jni::array<jbyte>> readFully(jni::ref<java::io::InputStream> p1, jint p2, jboolean p3) { return call_static_method<"readFully", jni::ref<jni::array<jbyte>>>(p1, p2, p3); }
	static jni::ref<jni::array<jbyte>> readNBytes(jni::ref<java::io::InputStream> p1, jint p2) { return call_static_method<"readNBytes", jni::ref<jni::array<jbyte>>>(p1, p2); }

protected:

	IOUtils(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MISC_IOUTILS